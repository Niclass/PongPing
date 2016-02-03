#pragma once

#include "paddle.h"
#include "ball.h"

class paddleAI : public paddle
{
public:
	paddleAI(int playerNumber);
	void SetBall(ball* ballObject);
	void Update();

private:
	ball* ballObject;
	int playerNumber;
	float speed;
};