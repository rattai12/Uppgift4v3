#pragma once
#include <iostream>
#include"birdlist.h"
#include <vector>
#include "bird.h"
using namespace std;

class Birdfile : public Birdlist { // ska spara the list. lager 3
public:
	vector<Birdlist>layer3list;
	void addbirdfile(Birdlist birdlist);
	void showBirds(Birdlist birdlist);
	

	string author;
	string date;


};