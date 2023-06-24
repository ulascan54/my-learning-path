## Mongodb cheat sheet

- .find() : collectiondaki verileri alır
- db.create.collection("[Collection Name]"): collection oluşturur
- use mongo [db Name]: database oluşturur eğer yoksa varsa ona geçiş yapar
- .drop : silmeye yarar
- db.["collection name"].insertOne("") : collection yoksa collection oluşturup 1 veri girmemizi sağlar
- .insertMany: birden fazla veri girişi yapmamızı sağlar
- .count() : kayıtların sayısını verir
- findeOne() : eğer koşul yazılmamışsa en baştakini getirir
- **find()** içinde maskeleme işlemleri:
  - db.[collection name].find({},{name:1,rating:1}) : kayıtların sadece name ve rating verilerini getirir 1 ve 0 dan kasıt true yada false anlamındadır.( 1 -> getir, 0-> getirme)
  - .find({courses:"kotlin"}) : sadece kotlin olan verilerin tüm bilgilerini listeler
  - .find({rating:{$gte:4.5}}): yalnızca rating değeri 4.5 ten büyük veya eşit olanları listeler (gte: greater then or equal to)
- updateOne({name:"ulaş"},{$set{rating:4.6}}): ismi ulaş olanın ratingini değiştirir.
- updateMany({},{$set:{student:1000}}) : tüm verilerin öğrenci sayısını günceller
- updateMany({status:"A"},{$set:{student:15000}}) : Statüs değeri A ya eşit olanların verilerin öğrenci sayısını günceller
- deleteOne({name:"ulaş"}):ismi ulaş olan değeri siler
- deleteMany({status:"A"}): statusu A olan bütün verileri siler

---

## skip, limit, short metotları

- .find().skip(1): 1. indexten başlayarak tüm kayıtları listeler
- .find().limit(2): en baştan başlayarak yalnızca 2 kayıt getirir
- .find().skip(1).limit(2): 1 den başlayarak 2 kayıt getirir
- .find({},{rating:1}).sort({rating:1}): yalnızca ratingleri getirir ve büyükten küçüğe doğru sıralı şekilde getirir (-1 dersem tam tersini yapar) name:1 dersek te alfabetik olarak sırarlar.

---

## Aggregation

- ```
  db.products.aggregate([{$group :{_id: "$category", num_products: {$sum:1}}}])
  ```

  kategoriye göre gruplar ardından num products diye bir alana kaçtane olduklarını yazar o kategöriden ve listeler.

- ```
  db.products.aggregate([{$group :{_id: "$category", average_price: {$avg:"$price"}}}])
  ```
  kategoriye göre gruplar fiyata göre ortalama fiyat çıkarır
- ```
   db.products.aggregate([{$group :{_id: "$category", max_price: {$max:"$price"}}}])
  ```

  kategoriye göre gruplar ve en yüksek fiyatı çıkarır

- ```
    db.products.aggregate([{$group :{_id: "$category", min_price: {$min:"$price"}}}])
  ```
  kategoriye göre gruplar ve en düşük fiyatı çıkarır
