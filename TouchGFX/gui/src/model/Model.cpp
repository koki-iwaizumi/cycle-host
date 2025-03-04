#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <iostream>

#include "FreeRTOS.h"
#include "queue.h"

extern xQueueHandle msgQueueUI;

Model::Model() : modelListener(0), speed(0)
{

}

void Model::tick()
{
	if(uxQueueMessagesWaiting(msgQueueUI) > 0) {
		int newSpeed = 0;
		xQueueReceive(msgQueueUI, &newSpeed, 0);
		// if (speed == newSpeed) return;

		std::cout << "Model " << speed << ", " << newSpeed << std::endl;

		speed = newSpeed;

		modelListener->systemSetSpeed();
	}
}
