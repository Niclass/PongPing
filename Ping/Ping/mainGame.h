#pragma once

#include "gameState.h"
#include "paddlePlayer.h"
#include "ball.h"
#include "score.h"


class mainGame : public tinyState
{
public:
	void Initialize(sf::RenderWindow* window);
	void Update(sf::RenderWindow* window);
	void Render(sf::RenderWindow* window);
	void Destroy(sf::RenderWindow* window);
private:
	paddlePlayer* player1;
	paddlePlayer* player2;
	ball* ballObject;
	Score* score1;
	Score* score2;

	sf::Font* font;
};