#pragma once

#include "gameState.h"
#include "paddlePlayer.h"


class mainGame : public tinyState
{
public:
	void Initialize(sf::RenderWindow* window);
	void Update(sf::RenderWindow* window);
	void Render(sf::RenderWindow* window);
	void Destroy(sf::RenderWindow* window);
private:
	paddlePlayer* paddle;
};