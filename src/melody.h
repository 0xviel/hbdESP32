#ifndef MELODY_H
#define MELODY_H

#include <Arduino.h>

const int buzzerPin = 25; // pin buzzer

//nadsa note
const int melody[] = {
    262, 262, 294, 262, 349, 330,
    262, 262, 294, 262, 392, 349,
    262, 262, 523, 440, 349, 330, 294,
    466, 466, 440, 349, 392, 349
};

// durasi note
const int noteDurations[] = {
    4, 4, 4, 4, 4, 2,
    4, 4, 4, 4, 4, 2,
    4, 4, 4, 4, 4, 4, 2,
    4, 4, 4, 4, 4, 2
};

void playMelody() {
    for (int i = 0; i < sizeof(melody) / sizeof(melody[0]); i++) {
        int noteDuration = 1000 / noteDurations[i];
        tone(buzzerPin, melody[i], noteDuration);
        delay(noteDuration * 1.3);
        noTone(buzzerPin);
    }
}

#endif
