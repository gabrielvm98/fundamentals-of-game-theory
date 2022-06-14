#pragma once
#include "Human.h"
#include "InputManager.h"

class Player: public Human
{
private:
	float _speed;
	InputManager* _inputManager;
public:
	void init(float speed, glm::vec2 position,InputManager* InputManager);
	void update(const std::vector<std::string>& levelData);
	Player();
	~Player();
};

