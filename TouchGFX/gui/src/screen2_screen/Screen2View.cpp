#include <gui/screen2_screen/Screen2View.hpp>

Screen2View::Screen2View()
{

}

void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();
}

void Screen2View::tearDownScreen()
{
    Screen2ViewBase::tearDownScreen();
}

void Screen2View::printSpeed(int value){
	Unicode::snprintf(speedTextBuffer, SPEEDTEXT_SIZE, "%d", value);
	speedText.invalidate();
}

void Screen2View::printPower(int value){
	Unicode::snprintf(powerTextBuffer, POWERTEXT_SIZE, "%d", value);
	powerText.invalidate();
}

void Screen2View::printCadence(int value){
	Unicode::snprintf(cadenceTextBuffer, CADENCETEXT_SIZE, "%d", value);
	cadenceText.invalidate();
}
