#include "Human.h"
#include <ctime>
#include <random>


Human::Human()
{
}


Human::~Human()
{
}

void Human::init(float speed, glm::vec2 position)
{
	_speed = speed;
	_color.set(185, 0, 0, 255);
	_position = position;
	static std::mt19937 randomEngine(time(nullptr));
	static std::uniform_real_distribution<float>randDir(-1.0f, 1.0f);

	_direction = glm::vec2(randDir(randomEngine), randDir(randomEngine));
	if (_direction.length() == 0) {
		_direction = glm::vec2(1.0f, 1.0f);
	}
	_direction = glm::vec2(_direction);
}

void Human::update(const std::vector<std::string>& levelData)
{
	//static std::mt19937 randomEngine(time(nullptr));
	_position = _direction * _speed;
}
