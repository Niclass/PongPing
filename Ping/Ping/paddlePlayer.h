#pragma once

#include "paddle.h"

class paddlePlayer : public paddle
{
public:
	paddlePlayer(int playerNumber);
	void Update();
	
private:
	int playerNumber;
};