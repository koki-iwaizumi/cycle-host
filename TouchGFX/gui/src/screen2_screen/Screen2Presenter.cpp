#include <gui/screen2_screen/Screen2View.hpp>
#include <gui/screen2_screen/Screen2Presenter.hpp>
#include <iostream>

Screen2Presenter::Screen2Presenter(Screen2View& v)
    : view(v)
{
}

void Screen2Presenter::activate()
{

}

void Screen2Presenter::deactivate()
{

}

void Screen2Presenter::systemSetSpeed()
{
	std::cout << "Screen2Presenter systemSetSpeed" << model->getSpeed() << std::endl;
	view.printSpeed(model->getSpeed());
}
