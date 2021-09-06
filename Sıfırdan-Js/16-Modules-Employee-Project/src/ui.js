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
}
