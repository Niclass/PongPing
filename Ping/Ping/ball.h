#pragma once

#include "paddlePlayer.h"
#include "score.h"

class ball : public Entity
{
public:
	ball(Score* score1, Score* score2, paddlePlayer* player1, paddlePlayer* player2);
	void Update(sf::RenderWindow* window);
	void Reset(sf::RenderWindow* window);

private:
	Score* score1;
	Score* score2;
	paddlePlayer* player1;
	paddlePlayer* player2;
};