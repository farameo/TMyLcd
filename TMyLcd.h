#ifndef TMYLCD
#define TMYLCD
#include <Arduino.h>
#include <TKeyPad.h>
#include <LiquidCrystal.h>

#pragma GCC diagnostic ignored "-Wwrite-strings"

	class TMyLcd: public KeyPad {
		private:
			//-------( configuration LCD)----------------

			int _nRow = 2;
			int _nCol = 16;
			boolean _lVert = true;	// true: an item below the other. false: an item by side

		
		public:

			TMylcd();

			void begin();
			void keyboard();
	
	};

#endif
