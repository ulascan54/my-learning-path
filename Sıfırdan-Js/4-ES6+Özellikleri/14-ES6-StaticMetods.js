//* Statik metodlar

class Matematik{
  sqrt(x){
    console.log(x*x)
  }
  static cube(x){//* obje oluşturmadan metod kullanmak için static yazmamız gerekiyor
    //* statik metodlar obje üzerinden erişilemez
    console.log(x*x*x)
  }
}
// Matematik.cube(3)
// const math=new Matematik()
// console.log(math)
// math.cube(3)//!kullanılmaz

// math.sqrt(4)
// Matematik.sqrt(5)//!kullanılmaz
// Object.create()//?static bir metod dur
console.dir(Math)//? static metod dur