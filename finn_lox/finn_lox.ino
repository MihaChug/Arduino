#include <DHT.h>

#define DHTPIN0 2 // номер пина, к которому подсоединен датчик
#define DHTPIN1 3 // номер пина, к которому подсоединен датчик
/*
#define DHTPIN2 4 // номер пина, к которому подсоединен датчик
#define DHTPIN3 5 // номер пина, к которому подсоединен датчик
#define DHTPIN4 6 // номер пина, к которому подсоединен датчик
#define DHTPIN5 7 // номер пина, к которому подсоединен датчик
#define DHTPIN6 8 // номер пина, к которому подсоединен датчик
#define DHTPIN7 9 // номер пина, к которому подсоединен датчик
#define DHTPIN8 10 // номер пина, к которому подсоединен датчик
#define DHTPIN9 11 // номер пина, к которому подсоединен датчик
#define DHTPIN10 12 // номер пина, к которому подсоединен датчик
#define DHTPIN11 13 // номер пина, к которому подсоединен датчик
*/


// Раскомментируйте в соответствии с используемым датчиком
// Инициируем датчик

DHT dht0(DHTPIN0, DHT22);
DHT dht1(DHTPIN1, DHT22);
/*
DHT dht2(DHTPIN2, DHT22);
DHT dht3(DHTPIN3, DHT22);
DHT dht4(DHTPIN4, DHT22);
DHT dht5(DHTPIN5, DHT22);
DHT dht6(DHTPIN6, DHT22);
DHT dht7(DHTPIN7, DHT22);
DHT dht8(DHTPIN8, DHT22);
DHT dht9(DHTPIN9, DHT22);
DHT dht10(DHTPIN10, DHT22);
DHT dht11(DHTPIN11, DHT22);
*/


//DHT dht(DHTPIN1, DHT11);

void setup() {
    Serial.begin(9600);
    dht0.begin();
    dht1.begin();
}

//наплодить еще запросов

void loop() {
    char data_f[8][8];
    // Задержка 2 секунды между измерениями
    delay(2000);
    //Считываем влажность
    data_f[0][0] = {(char)dht0.readHumidity() + (char)dht0.readTemperature()};
    data_f[0][1] = {(char)dht1.readHumidity() + (char)dht1.readTemperature()};
    for(int i = 1; i <= (sizeof(data_f)/sizeof(float)); i++){
      for(int j = 1; j <= (sizeof(data_f[i])/sizeof(float)); i++){
        
      }
    }
/*
    Serial.println(temperature);
    Serial.println(temperature1);
    */
}
