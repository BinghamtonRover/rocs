#include <rocs.hpp>

const int LED_PIN = 13;

uint8_t selector = 0;

void setup() {
    pinMode(LED_PIN, OUTPUT);
    digitalWrite(LED_PIN, LOW);

    rocs::init(0x11, "led_example", 11);

    rocs::set_read_handler(read_handler);
    rocs::set_write_handler(write_handler);
}

void write_handler(uint8_t reg, uint8_t val) {
    switch (reg) {
        case 1:
            selector = val;
            break;
    }
}

uint8_t read_handler(uint8_t reg) {
    switch (reg) {
        case 1:
            return selector;
    }

    return 0;
}

void loop() {
    if (selector == 1) {
        digitalWrite(LED_PIN, HIGH);
    } else {
        digitalWrite(LED_PIN, LOW);
    }

    delay(20);
}
