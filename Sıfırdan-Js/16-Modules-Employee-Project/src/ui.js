export class UI {
  constructor() {
    this.employeesList = document.getElementById('employees')
    this.updateButton = document.getElementById('update')
    this.nameInput = document.getElementById('name')
    this.departmentInput = document.getElementById('department')
    this.salaryInput = document.getElementById('salary')
  }

  clearInputs() {
    this.nameInput.value = ''
    this.departmentInput.value = ''
    this.salaryInput.value = ''
  }

  addAllEmployeeToUI(employees) {
    employees.forEach((element) => {
      this.employeesList.innerHTML += `
    <tr>
        <td>${element.name}</td>
        <td>${element.department}</td>
        <td>${element.salary}</td>
        <td>${element.id}</td>
        <td><a href="#" id = "update-employee" class= "btn btn-danger">Güncelle</a></td> 
        <td><a href="#" id = "delete-employee" class= "btn btn-danger">Sil</a></td>
    </tr>
      `
    })
  }

  addEmployeeToUI(element){
    this.employeesList.innerHTML += `
    <tr>
        <td>${element.name}</td>
        <td>${element.department}</td>
        <td>${element.salary}</td>
        <td>${element.id}</td>
        <td><a href="#" id = "update-employee" class= "btn btn-danger">Güncelle</a></td> 
        <td><a href="#" id = "delete-employee" class= "btn btn-danger">Sil</a></td>
    </tr>
      `
  }

  deleteEmployeeFromUI(element){
    element.remove()
  }
  
  toggleUpdateButton(e){
    if (this.updateButton.style.display==="none") {
      this.updateButton.setAttribute('style','display:block;')
      this.nameInput.value =   e.parentElement.previousElementSibling.previousElementSibling.previousElementSibling.previousElementSibling.textContent
      this.departmentInput.value =  e.parentElement.previousElementSibling.previousElementSibling.previousElementSibling.textContent
      this.salaryInput.value =  e.parentElement.previousElementSibling.previousElementSibling.textContent
    }else{
      this.updateButton.setAttribute('style','display:none;')
      this.clearInputs()
    }
  }

  updateEmployeeOnUI(data,element){
    element.children[0].textContent=data.name
    element.children[1].textContent=data.department
    element.children[2].textContent=data.salary
    element.children[3].textContent=data.id
  }

  searchUpdate(filteredEmployee){
    this.employeesList.innerHTML=null
    filteredEmployee.forEach((element) => {
      this.employeesList.innerHTML += `
    <tr>
        <td>${element.name}</td>
        <td>${element.department}</td>
        <td>${element.salary}</td>
        <td>${element.id}</td>
        <td><a href="#" id = "update-employee" class= "btn btn-danger">Güncelle</a></td> 
        <td><a href="#" id = "delete-employee" class= "btn btn-danger">Sil</a></td>
    </tr>
      `
    })
  }
}
