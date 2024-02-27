#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

int main(int argc, char* argv) {
    cout << "Voici le defi: Trouvez le nombre de l'enigme du jour!" << endl;
    cout << "Pret ? C'est parti!" << endl;
    int enigmeDuJour = 0, nombreEntre = 0;
    const int MAX = 365, MIN = 1;
    srand(time(NULL));
    enigmeDuJour = (rand() % (MAX - MIN + 1)) + MIN;

    do {
        cout << "Choisissez un nombre!" << endl;
        scanf("%d", &nombreEntre);
        if (enigmeDuJour > nombreEntre)
            cout << "Plus grand! " << endl;
        if (enigmeDuJour < nombreEntre)
            cout << "Plus petit!" << endl;
        else if (enigmeDuJour == nombreEntre)
            cout << "Bravo champion!" << endl;
        if (nombreEntre == 0)
            cout << "Parce que les divisons par 0 existent?" << endl;
        if (nombreEntre > 300)
            cout << "Contribuez a ce defi en proposant des enigmes en commentaires! Ou revenez plus tard" << endl;
    } while (nombreEntre != enigmeDuJour);
    return 0;}