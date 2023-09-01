#pragma once
#include <vector>
#include "element.h"

class Container {
private:
	int numOfElements;
	std::vector<Element*> elements;
public:
	Container(const int numberOfElements);
};