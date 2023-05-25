#pragma once
#include <iostream>
#include "birdfile.h"
using namespace std;

class Database {
public:
	int antal_filer = 0;
	vector<Birdfile>dataList;
	Database();
	void read_files(); // läser in fåglar
	void show_files(); // skriver ut fåglar
	int size_of();
};
