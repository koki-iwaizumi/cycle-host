/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen2_screen/Screen2ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen2ViewBase::Screen2ViewBase()
{
    __background.setPosition(0, 0, 480, 800);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    image1.setXY(-9, -9);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_MAIN_SCREEN_ID));
    add(image1);

    speedText.setPosition(155, 91, 170, 123);
    speedText.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    speedText.setLinespacing(0);
    Unicode::snprintf(speedTextBuffer, SPEEDTEXT_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_2GM1).getText());
    speedText.setWildcard(speedTextBuffer);
    speedText.setTypedText(touchgfx::TypedText(T_SPEED));
    add(speedText);

    cadenceText.setPosition(155, 639, 170, 123);
    cadenceText.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    cadenceText.setLinespacing(0);
    Unicode::snprintf(cadenceTextBuffer, CADENCETEXT_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_JGAM).getText());
    cadenceText.setWildcard(cadenceTextBuffer);
    cadenceText.setTypedText(touchgfx::TypedText(T_CADENCE));
    add(cadenceText);

    powerText.setPosition(155, 356, 170, 123);
    powerText.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    powerText.setLinespacing(0);
    Unicode::snprintf(powerTextBuffer, POWERTEXT_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_4YHZ).getText());
    powerText.setWildcard(powerTextBuffer);
    powerText.setTypedText(touchgfx::TypedText(T_POWER));
    add(powerText);
}

Screen2ViewBase::~Screen2ViewBase()
{

}

void Screen2ViewBase::setupScreen()
{

}
