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
protected:
	ModelListener *modelListener;
	int speed;
};

#endif // MODEL_HPP
