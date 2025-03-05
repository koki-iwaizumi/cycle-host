#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model {
public:
	Model();

	void bind(ModelListener *listener) {
		modelListener = listener;
	}

	void tick();

	int getSpeed() { return speed; };
	int getPower() { return power; };
	int getCadence() { return cadence; };
protected:
	ModelListener *modelListener;
	int speed;
	int power;
	int cadence;
};

#endif // MODEL_HPP
