import { Request } from './requests.js'
import { UI } from './ui.js'

//* elementleri seçme

const form = document.getElementById('employee-form')
const nameInput = document.getElementById('name')
const departmentInput = document.getElementById('department')
const salaryInput = document.getElementById('salary')
const employeesList = document.getElementById('employees')
const updateEmployeeButton = document.getElementById('update')

const request = new Request('http://localhost:3000/employees')
const ui = new UI()

eventListeners()
function eventListeners() {
  document.addEventListener('DOMContentLoaded', getAllEmployees)
  form.addEventListener('submit', addEmployee)
  employeesList.addEventListener('click', updateOrDelete)
}
function getAllEmployees() {
  request
    .get()
    .then((employees) => {
      ui.addAllEmployeeToUI(employees)
    })
    .catch((err) => console.log(err))
}
function addEmployee(e) {
  const employeeName = nameInput.value.trim()
  const employeeDepartment = departmentInput.value.trim()
  const employeeSalary = salaryInput.value.trim()
  if (
    employeeName === '' ||
    employeeDepartment === '' ||
    employeeSalary === ''
  ) {
    alert('Lütfen tüm alanları doldurun')
  } else {
    request
      .post({
        name: employeeName,
        department: employeeDepartment,
        salary: Number(employeeSalary)
      })
      .then((response) => {
        ui.addEmployeeToUI(response)
      })
  }

  ui.clearInputs()
  e.preventDefault()
}

function updateOrDelete(e) {
  if (e.target.id === 'delete-employee') {
    if (confirm('eminmisiniz ??')) {
      deleteEmployee(e.target)
    }
  } else if (e.target.id === 'update-employee') {
    updateEmployee(e.target)
  }
}

function updateEmployee(e) {
     ui.toggleUpdateButton(e)
 
}

function deleteEmployee(e) {
  const id =
    e.parentElement.previousElementSibling.previousElementSibling.textContent
  request
    .delete(id)
    .then((response) => {
      ui.deleteEmployeeFromUI(e.parentElement.parentElement)
      console.log(response)
      alert(response)
    })
    .catch((e) => console.log(e))
}

// request
//   .get()
//   .then((employees) => console.log(employees))
//   .catch((e) => console.log(e))

// request.post({
//   name: 'vesile',
//   department: 'muhasebe',
//   salary: 6000
// }).then(employee=>console.log(employee))
// .catch(e=>console.log(e))

// request.put(3,{
//   name: 'miraç',
//   department: 'mimar',
//   salary: 1234
// }).then(employee=>console.log(employee))
// .catch(e=>console.log(e))

// request
//   .delete(3)
//   .then((response) => console.log(response))
//   .catch((e) => console.log(e))
