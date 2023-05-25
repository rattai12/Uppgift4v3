#pragma once
#include <iostream>
using namespace std;
struct Bird {

	string type;
	string svenskfagel;
	string latinfagel;
	int observation;
	


	Bird();

	Bird(string type, string sv, string lat, int obs) { // skapat en konstruktor
		this->type = type;
		svenskfagel = sv;
		latinfagel = lat;
		observation = obs;
	}
};