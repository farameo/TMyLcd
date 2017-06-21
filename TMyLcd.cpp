#include <Arduino.h>
#include <EEPROM.h>
#include <TKeyPad.h>
#include <TMyLcd.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

//--------------------------------------------------

TMyLcd::TMylcd() {
}

//--------------------------------------

void TMyLcd::keyboard(){
	
	key();
	if (getnLastKey() == 4 ) {
		lcd.setCursor(0,0);
		lcd.print("derecho    ");
	}else if (getnLastKey() == 3) {
		lcd.setCursor(0,0);
		lcd.print("izquierdo");
	}else if (getnLastKey() == 2) {
		lcd.setCursor(0,0);
		lcd.print("abajo      ");
	}else if (getnLastKey() == 1) {
		lcd.setCursor(0,0);
		lcd.print("arriba     ");
	}else if (getnLastKey() == 5) {
		lcd.setCursor(0,0);
		lcd.print("select     ");
	}
	
}

//--------------------------------------------------

void TMyLcd::begin() {
	lcd.begin(_nCol, _nRow);
	lcd.setCursor(0,0);
	lcd.print("hola");
}

//--------------------------------------------------
