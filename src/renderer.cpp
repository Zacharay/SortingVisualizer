#include "renderer.h"
#include <iostream>
#include <vector>
void renderContainer(const Container& container, sf::RenderWindow& window)
{
	sf::Vector2u windowSize = window.getSize();
	unsigned int windowWidth = windowSize.x;
	unsigned int windowHeight = windowSize.y;

	unsigned int margin = 20;
	unsigned int spaceBetween = 1;

	unsigned int numOfElements = container.getNumOfElements();

	float elementWidth = (float)(windowWidth - 2 * margin- (numOfElements -1)*spaceBetween)/ numOfElements;
	

	const std::vector<Element*> elements = container.getElements();

	window.clear();


	for (int i = 0; i < numOfElements; i++)
	{
		int elementValue = elements[i]->getValue();
		float elementHeight = (float)(windowHeight - margin * 2) / 100 * elementValue;
		sf::RectangleShape rect;
		rect.setSize(sf::Vector2f(elementWidth, -elementHeight));
		rect.setPosition(margin+((elementWidth+spaceBetween)*i), windowHeight-margin);
		rect.setFillColor(sf::Color::Blue);
		window.draw(rect);
	}


	window.display();
}
