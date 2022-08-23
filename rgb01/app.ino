#include <PWMLed.h>

PWMLed red(9);
PWMLed green(10);
PWMLed blue(11);

void setup(){
    Serial.begin(115200);
}
void loop(){
    one_color();
    two_color();
    three_color();
}

void led_off(int d_time=2000){
    delay(d_time);

    red.off();
    green.off();
    blue.off();

    Serial.println("--------------------------");
}

void one_color(){
    Serial.println("R ON");
    red.on();
    led_off();

    Serial.println("G ON");
    green.on();
    led_off();

    Serial.println("B ON");
    led_off();
}

void two_color(){
    Serial.println("R and G ON");
    red.on();
    green.on();
    led_off();

    Serial.println("B and G ON");
    blue.on();
    green.on();
    led_off();

    Serial.println("R and B ON");
    red.on();
    blue.on();
    led_off();
}

void three_color(){
    Serial.println("R and G and B ON");
    red.on();
    green.on();
    blue.on();
    led_off();
}