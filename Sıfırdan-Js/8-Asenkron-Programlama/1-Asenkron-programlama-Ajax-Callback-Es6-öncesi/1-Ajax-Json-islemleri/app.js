document.getElementById("ajax").addEventListener("click", getAllEmployees)

function getAllEmployees() {
  const xhr = new XMLHttpRequest()
  xhr.open("GET", "employees.json", true)
  xhr.onload = function (){
    let list = document.getElementById("employees")
    if (this.status===200) {
      const employees=JSON.parse(this.responseText)
        employees.forEach(person => {
              list.innerHTML +=`
              <tr>
                <td>${person.name}</td>
                <td>${person.department}</td>
                <td>${person.salary}</td>
              </tr> 
              `
        });
    }
  }

  xhr.send()
}