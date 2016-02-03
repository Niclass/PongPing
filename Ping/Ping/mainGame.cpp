#include "mainGame.h"
#include "mainMenu.h"


void mainGame::Initialize(sf::RenderWindow* window)
{
	this->font = new sf::Font();
	this->font->loadFromFile("Graphics/font.ttf");
	this->score1 = new Score(*font, 64U);
	this->score2 = new Score(*font, 64U);

	this->score1->setPosition(window->getSize().x - this->score1->getGlobalBounds().width, 0);

	this->player1 = new paddlePlayer(0);
	

	this->player2 = new paddlePlayer(1);
	

	this->ballObject = new ball(this->score1, this->score2, this->player1, this->player2);
	this->ballObject->Reset(window);


}
void mainGame::Update(sf::RenderWindow* window)
{
	this->ballObject->Update(window);
	this->player1->Update();
	this->player2->Update();
	this->score1->Update();
	this->score2->Update();

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
	{
		coreState.SetState(new mainMenu());
	}
}
void mainGame::Render(sf::RenderWindow* window)
{
	window->draw(*this->player1);
	window->draw(*this->player2);
	window->draw(*this->ballObject);
	window->draw(*this->score1);
	window->draw(*this->score2);
}
void mainGame::Destroy(sf::RenderWindow* window)
{
	delete this->player1;
	delete this->player2;
	delete this->ballObject;
	delete this->score1;
	delete this->score2;

}
