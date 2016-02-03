#include "mainGame.h"
#include "mainMenu.h"


void mainGame::Initialize(sf::RenderWindow* window)
{
	this->paddle = new paddlePlayer(0);
}
void mainGame::Update(sf::RenderWindow* window)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
	{
		coreState.SetState(new mainMenu());
	}
	this->paddle->Update();
}
void mainGame::Render(sf::RenderWindow* window)
{
	window->draw(*this->paddle);
}
void mainGame::Destroy(sf::RenderWindow* window)
{
	delete this->paddle;
}
