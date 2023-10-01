# x (Twitter Clone)

x, Twitter benzeri bir sosyal medya platformu olan bir açık kaynaklı proje. Bu platform, kullanıcıların kısa mesajlar (tweet'ler) paylaşmasına, takip etmesine, beğenmesine ve daha fazlasını yapmasına olanak tanır.

- Live -> https://x-clone-sigma.vercel.app/

## Kurulum

### Proje yerel bir ortamda veya bir sunucuda çalıştırmak için aşağıdaki adımları izleyin:

- Depoyu klonlayın:

```bash
git clone https://github.com/sizin-kullanici-adiniz/x.git
```

- Proje klasörüne gidin:

```bash
cd x
```

- Gerekli bağımlılıkları yükleyin:

```bash
npm install
```

- Ortam değişkenlerini yapılandırın:

```bash
cp .env.example .env
```

- .env dosyasını açın ve gerekli konfigürasyonları ayarlayın (veritabanı bağlantısı, gizli anahtarlar vb.).

- Veritabanını oluşturun ve tabloları oluşturmak için migrasyonları çalıştırın:

```
npm run migrate
```

- Uygulamayı başlatın:

```
npm start
```
