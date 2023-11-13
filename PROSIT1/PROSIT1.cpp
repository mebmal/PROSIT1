// PROSIT1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "DistanceCalculation.h"
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cout << "Bonjour voici le programme de calcul de distance de deux points d'un repere orthonorme\n";
    cout << "Veuillez entrer la coordonnee x du premier point\n";
    cin >> x1;
    cout << "Veuillez entrer la coordonnee y du premier point\n";
    cin >> y1;
    cout << "Veuillez entrer la coordonnee x du deuxieme point\n";
    cin >> x2;
    cout << "Veuillez entrer la coordonnee y du deuxieme point\n";
    cin >> y2;
    DistanceCalculation * o1;
    o1 = new DistanceCalculation(x1, x2, y1, y2);
    cout << "Resultat : " << o1->calculateDistance() << endl;
    delete o1;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
