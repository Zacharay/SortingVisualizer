#pragma once

enum ElementState {
	sorted,
	notSorted,
	inComparision
};

class Element {
private:
	ElementState elementState;
	int value;
public:
	Element();
	Element(int val);
	ElementState getState()const;
	void setState(const ElementState state);
	int getValue()const;
	void setValue(const int val);
};