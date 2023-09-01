#include "bubbleSort.h"
#include <vector>
#include <iostream>
#include <thread>
#include "renderer.h"
void bubbleSort(Container& container, sf::RenderWindow &window)
{
	int numOfElements = container.getNumOfElements();
	std::vector<Element*>&elements = container.getElements();

	for (int i = 0; i < numOfElements-1; i++)
	{
		for (int j = 0; j < numOfElements - i-1; j++)
		{
			if (elements[j]->getValue() > elements[j + 1]->getValue())
			{
				Element* temp = elements[j];
				elements[j] = elements[j + 1];
				elements[j + 1] = temp;
				renderContainer(container, window);
				std::this_thread::sleep_for(std::chrono::milliseconds(1));
			}
		}
	}
}
