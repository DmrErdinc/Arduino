#define led1 3  // Birinci LED'in bağlı olduğu pin
#define led2 6  // İkinci LED'in bağlı olduğu pin

void setup() {
    pinMode(led1, OUTPUT);  // Birinci LED için çıkış pinini ayarla
    pinMode(led2, OUTPUT);  // İkinci LED için çıkış pinini ayarla
    Serial.begin(9600);     // Seri haberleşmeyi başlat
}

void loop() {
    int isik = analogRead(A0);  // Işık sensöründen değer oku
    Serial.println(isik);       // Okunan değeri seriye yazdır
                      // 50 ms gecikme

    // Birinci LED için kontrol
    if (isik > 700) {
        digitalWrite(led1, LOW);  // Işık sensör değeri büyükse birinci LED kapat
       
    } else if (isik <700) {
        digitalWrite(led1, HIGH);  // Işık sensör değeri küçükse birinci LED aç
       
    }

    // İkinci LED için kontrol
    if (isik < 700) {
        digitalWrite(led2, HIGH);  // Işık sensör değeri büyükse ikinci LED aç
       
    } else if (isik > 700) {
        digitalWrite(led2, LOW);   // Işık sensör değeri küçükse ikinci LED kapat
       
    }
}