#include "container.h"
#include <random>
#include <iostream>
Container::Container(const unsigned int numberOfElements)
{
	numOfElements = numberOfElements;

	elements.resize(numOfElements);

	std::random_device rd;  
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> distribution(1, 100);

	for (int i = 0; i < numOfElements; i++)
	{
		int randomNum = distribution(gen);
		elements[i] = new Element(randomNum);
	}
}

const unsigned int Container::getNumOfElements() const
{
	return numOfElements;
}

const std::vector<Element*>& Container::getElements() const
{
	return elements;
}

std::vector<Element*>& Container::getElements()
{
	return elements;
}
