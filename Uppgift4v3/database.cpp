#include "database.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

Database::Database() : antal_filer(0) { } // constructor to initialize antal_filer

void Database::read_files() {
    string filnamn;
    cout << "Ange filnamn: ";
    cin >> filnamn;

    while (filnamn != "0") {
        string rad;
        ifstream ReadFile(filnamn); // öppnar filen

        Birdfile birdfile;
        Birdlist birdlist;

        while (getline(ReadFile, rad)) {
            Bird bird; // bird objekt som ska läsas in
            stringstream ss(rad);

            getline(ss, bird.type, ',');
            getline(ss, bird.svenskfagel, ',');
            getline(ss, bird.latinfagel, ',');
            ss >> bird.observation;
            birdlist.saveToList(bird); // lägger in bird-objektet i birdlistan.
        }

        // birdfile som ska spara filen
        birdfile.addbirdfile(birdlist);
        dataList.push_back(birdfile);
        antal_filer++;

        ReadFile.close();

        cout << "Ange filnamn(0 for att avsluta): ";
        cin >> filnamn;
    }
}

void Database::show_files() {
    if (dataList.empty()) {
        cout << "Hittar inga filer." <<endl;
        return;
    }
    else {
        // Assuming dataList is a vector of Birdfile objects
        for (int i = 0; i < dataList.size(); i++) {
            Birdfile& b = dataList[i];
            for (int j = 0; j < b.layer3list.size(); j++) {
                Birdlist& birdlist = b.layer3list[j];
                b.showBirds(birdlist);
            }
        }
    }
}

int Database::size_of() {
    return antal_filer; // returnerar hur många filer som lästs in. 
}
