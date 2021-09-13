let value;

const firstName = "louis";
const lastName = "Armstrong";
const langs = "Java,Python,C++";

value = firstName + lastName;
console.log(value);
value = firstName + " " + lastName;
console.log(value);
value = "Mustafa Murat ";
console.log(value);
value += "Çoşkun"; // value=value+"Çoşkun"
console.log(value);

value= firstName.length;//sayısını verir
console.log(value);

value=firstName.concat(" ",lastName," ","Caz");//firstname + " " + lastName....
console.log(value);

value= firstName.toLowerCase(); // hepsini küçük yazar
value= firstName.toUpperCase(); // hepsini büyük yazar
console.log(value);

value=firstName[0];
console.log(value);
value=firstName[1];
console.log(value);
value=firstName[2];
console.log(value);
value=firstName[3];
console.log(value);
value=firstName[4];
console.log(value);
value=firstName[firstName.length-1];
console.log(value);


//Index of  KARAKTER NEREDE BULUR YOKSA -1

value=firstName.indexOf("l");
console.log(value);
value=firstName.indexOf("o");
console.log(value);
value=firstName.indexOf("L");
console.log(value);

// CHAR AT indexteki elemanı bize verir
value=firstName.charAt(0);
value=firstName.charAt(firstName.length-1);

//split parçalama metodu virgüle göre parçalayıp arraya koyar
value=langs.split(",");
console.log(value);

//replace DEĞİŞTİR
value=langs.replace("Python","CSS")
console.log(value);

//Includes içerirmi içermezmi
value=langs.includes("Java")
value=langs.includes("aa")
console.log(value);
