#include "element.h"

Element::Element()
{
	elementState = ElementState::notSorted;
	value = 1;
}

Element::Element(const int val)
{
	elementState = ElementState::notSorted;
	value = val;
}

ElementState Element::getState() const
{
	return elementState;
}

void Element::setState(const ElementState state)
{
	elementState = state;
}

int Element::getValue() const
{
	return value;
}

void Element::setValue(int val)
{
	value = val;
}
