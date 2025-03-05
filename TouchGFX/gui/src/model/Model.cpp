#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <iostream>

#include "FreeRTOS.h"
#include "queue.h"
#include "main.h"

extern xQueueHandle msgQueueUI;

Model::Model() :
		modelListener(0), speed(0) {

}

void Model::tick() {
	if (uxQueueMessagesWaiting(msgQueueUI) > 0) {
		BikeData newData;
		xQueueReceive(msgQueueUI, &newData, 0);
		if (speed == newData.speed && power == newData.power
				&& cadence == newData.cadence) {
			return;
		}

		std::cout << "Model " << speed << ", " << newData.speed << std::endl;

		speed = newData.speed;
		power = newData.power;
		cadence = newData.cadence;

		modelListener->systemSet();
	}
}
