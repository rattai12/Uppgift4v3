#pragma once
#include <iostream>
#include "birdfile.h"
using namespace std;

class Database {
public:
	int antal_filer = 0;
	vector<Birdfile>dataList;
	Database();
	void read_files(); // l�ser in f�glar
	void show_files(); // skriver ut f�glar
	int size_of();
};
