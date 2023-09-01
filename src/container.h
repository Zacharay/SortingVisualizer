#pragma once
#include <vector>
#include "element.h"

class Container {
private:
	unsigned int numOfElements;
	std::vector<Element*> elements;
public:
	Container(const unsigned int numberOfElements);
	const unsigned int getNumOfElements()const;
	const std::vector<Element*>& getElements() const;
	std::vector<Element*>& getElements();
};