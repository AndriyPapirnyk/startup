#define TRIG_PIN 9  // тригер для датчика

void setup() {
    pinMode(TRIG_PIN, OUTPUT);  // налаштування піна як вихід
}

void loop() {
    unsigned long startTime = millis();  // зберігаємо поточний час

    // Генерація імпульсів протягом 10 секунд з частотою 40 кГц
    while (millis() - startTime < 10000) {
        // Створюємо високий сигнал тривалістю 10 мікросекунд (половина періоду для 50 кГц)
        digitalWrite(TRIG_PIN, HIGH);
        delayMicroseconds(10); 

        // Створюємо низький сигнал тривалістю 10 мікросекунд (інша половина періоду для 50 кГц)
        digitalWrite(TRIG_PIN, LOW);
        delayMicroseconds(10);  
    }

    // Після 10 секунд зупиняємо роботу
    while (true);  // безкінечний цикл після закінчення роботи (можна замінити іншою логікою)
}
