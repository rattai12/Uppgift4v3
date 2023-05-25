#include "birdfile.h"

void Birdfile::addbirdfile(Birdlist birdlist)
{
	layer3list.push_back(birdlist); // lgäger in birdlist i 
}

void Birdfile::showBirds(Birdlist birdlist)
{
    if (birdlist.theList.empty()) {
        cout << "No birds in the list." << endl;
        return;
    }

    Bird observer = birdlist.theList[0];
    cout << "Observatör: " << observer.type << endl;
    cout << "Datum: " << observer.svenskfagel << endl;
    cout << endl;

    for (int i = 1; i < birdlist.theList.size(); i++) {
        Bird bird = birdlist.theList[i];
        cout << "Type: " << bird.type << endl;
        cout << "Svenskfagel: " << bird.svenskfagel << endl;
        cout << "Latinfagel: " << bird.latinfagel << endl;
        cout << "Observation: " << bird.observation << endl;
        cout << endl;
    }
}

