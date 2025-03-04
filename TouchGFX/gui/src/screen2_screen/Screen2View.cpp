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
