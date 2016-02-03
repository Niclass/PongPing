#include "paddleAI.h"


paddleAI::paddleAI(int playerNumber)
{
	this->playerNumber = playerNumber;
	this->ballObject = ballObject;
	this->speed = 0.80f;
	switch (this->playerNumber)
	{
	case 0:
		this->Load("paddle1.png");
		break;
	default:
		this->Load("paddle2.png");
		break;
	}
}

void paddleAI::SetBall(ball* ballObject)
{
	this->ballObject = ballObject;
}
void paddleAI::Update()
{
	if (this->ballObject != NULL)
	{
		if (this->getPosition().y + this->getGlobalBounds().height / 2 < this->ballObject->getPosition().y)
		{
			this->move(0, this->speed);
		}
		if (this->getPosition().y + this->getGlobalBounds().height / 2 > this->ballObject->getPosition().y)
		{
			this->move(0, -this->speed);
		}
	}

	Entity::Update();
	if (this->getPosition().y < 0)
	{
		this->move(0, 1.0f);
	}
	if (this->getPosition().y + this->getGlobalBounds().height > 720)
	{
		this->move(0, -1.0f);
	}
}