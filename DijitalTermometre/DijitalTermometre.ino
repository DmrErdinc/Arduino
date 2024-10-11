// Taslak > library ekle bölümünden de " Wire " kütüphanesini ekleyebilirsiniz.
#include <Wire.h>
//  Eğer bu kütüphane sisteminizde yoksa " Taslak > library ekle > Kütüphaneleri Yönet " bölümünden "LiquidCrystal I2C" isimli ve yazarı "Frank de Brabander" kütüphanesini kurmanız gerekmektedir.
#include <LiquidCrystal_I2C.h>

// burada kullanacağımız lcd ekrana bir isim veriyoruz ben " lcd " ismini verdim.
// " 0x27 " I2C bağlantı numarası, burayı değiştirmiyoruz.
// " 16 " ve " 2 " kullandığımız lcd panelin sütün ve satır sayısı.
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  lcd.init(); // lcd ekranı başlatıyoruz.
  lcd.backlight(); // ekranın arka ışığını açıyoruz.
}

void loop()
{
  lcd.setCursor(0, 0); // lcd panelin hangi noktasından yazdırmaya başlayacağımızı belirliyoruz. İlk rakam sütun, ikinci rakam satır. Sayısal sistemlerde ilk konum 0-sıfır dan başlar.
  lcd.print(analogRead(0) / 9.31); // Analog 0 dan gelen veriyi 9,31 sayısına bölerek, santigrat değere çevirip, lcd ekrana yazdırıyoruz.
  delay(900); // ekranın çok hızlı değişmemesi için 100 milisaniye bekletme koyuyoruz.
}


















































































