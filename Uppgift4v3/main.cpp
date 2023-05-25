#include <iostream>
#include "database.h"
#include <windows.h>
using namespace std;
void svenska(){
	SetConsoleOutputCP(1252);
	SetConsoleCP(1252);
}

int main() 
{
	bool run = true;
	while (run)
	{
	svenska();
	Database database;

	cout << "Totalt antal inlästa filer: "<< database.size_of() << endl;
	cout << "1. Lägg till fågelfil" << endl;
	cout << "2. Visa en fågelfil" << endl;
	cout << "3. Visa alla fåglar" << endl;
	cout << "4. Avsluta" << endl;
	

	
		int menyval;
		cout << "Alternativ: ";
		cin >> menyval;
		switch (menyval) 
		{
		case 1: {
			cout << "Lägg till en fågel fil... \n" << endl;
			database.read_files();
			cout << "\n";
			

		}break;
		case 2: {
			//database.show_files();
		}break;

		case 3: {
			database.show_files();
		}break;

		case 4:
			run = false;
		}


	}
}