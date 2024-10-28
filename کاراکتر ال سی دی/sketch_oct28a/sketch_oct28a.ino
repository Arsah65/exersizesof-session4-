#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
byte armsUp[8] = {
  0b00100,
  0b01010,
  0b00100,
  0b10101,
  0b01110,
  0b00100,
  0b00100,
  0b01010
};

byte armsDown[8] = {
  0b00100,
  0b01010,
  0b00100,
  0b00100,
  0b01110,
  0b10101,
  0b00100,
  0b01010
};
int u, d;
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.createChar(1, armsDown);
  lcd.createChar(2, armsUp);
  lcd.setCursor(0, 0);
}

void loop() {

  for (int i = 0; i <= 1; i++) {
    for (int j = 0; j <= 15; j++) {
      if (j % 2 == 0) {
        lcd.setCursor(i, j);
        lcd.write(1);
      } 
      else {
        lcd.setCursor(i, j);
        lcd.write(2);
      }
      }
    }
  }
