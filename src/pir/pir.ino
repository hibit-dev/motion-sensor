// -------------------------------------------------
// Copyright (c) 2025 HiBit <https://www.hibit.dev>
// -------------------------------------------------

#define PIR_PIN 2
#define LED_PIN 13

void setup()
{
  Serial.begin(115200);
  
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
    int motion = digitalRead(PIR_PIN);

    if (motion == HIGH) {
        Serial.println("Motion detected!");

        digitalWrite(LED_PIN, HIGH);

        delay(2000);
    } else {
        digitalWrite(LED_PIN, LOW);
    }
}

