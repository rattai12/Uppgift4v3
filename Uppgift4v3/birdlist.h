#pragma once

#include <string>
#include <vector>
#include "Bird.h"

using namespace std;

class Birdlist
{
public:
	vector<Bird> theList;

	Birdlist();
public:
	void saveToList(Bird bird); // spara bird-objekten i denna lista. 
	void showBirds();
};

