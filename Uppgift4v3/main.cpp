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

	cout << "Totalt antal inl�sta filer: "<< database.size_of() << endl;
	cout << "1. L�gg till f�gelfil" << endl;
	cout << "2. Visa en f�gelfil" << endl;
	cout << "3. Visa alla f�glar" << endl;
	cout << "4. Avsluta" << endl;
	

	
		int menyval;
		cout << "Alternativ: ";
		cin >> menyval;
		switch (menyval) 
		{
		case 1: {
			cout << "L�gg till en f�gel fil... \n" << endl;
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