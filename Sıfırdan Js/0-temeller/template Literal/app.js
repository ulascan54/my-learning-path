const name = "Mustafa Murat Çoşkun";
const department = "Bilişim";
const salary = 4000;

const a = "İsim: " + name + "\n" + "Departman: " + department + "\n" + "Maaş: " + salary;
console.log(a);

const b = `İsim: ${name}\nDepartman: ${department}\nMaaş: ${salary}`;

// const html = 
//   "<ul>" +
//   "<li>" + name + "</li>" +
//   "<li>" + department + "</li>" +
//   "<li>" + salary + "</li>" +
//   "</ul>"
// document.body.innerHTML=html;

const html2=`
  <ul>
  <li>${name}</li>
  <li>${department}</li>
  <li>${salary}</li>
  </ul>
`
document.body.innerHTML=html2;
