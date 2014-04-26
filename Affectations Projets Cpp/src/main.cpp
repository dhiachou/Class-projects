//============================================================================
// Name        : Affectations.cpp
// Author      : Dhia Eddine Chouchane
// Version     : alpha
// Copyright   :
// Description :
//============================================================================

#include <iostream>

#include "Groups.h"
#include "Students.h"
#include "Subjects.h"

using namespace std;

int main() {
	//prompting user for input filenames
	cout<<"Entrez le nom du fichier d'entrée (etudiants) : ";
	string inputStudentName;
	cin>>inputStudentName;

	cout << "Entrez le nom du fichier d'entrée (sujets) : ";
	string inputSubjectsName;
	cin >> inputSubjectsName;

	//prompting user for output filename
	cout << "Entrez le nom du fichier de sortie : ";
	string outputName;
	cin >> outputName; //*/

	//chargement du fichier et creation d'un objet contenant les noms des étudiants
	Students etudiants(inputStudentName+".csv");

	cout << "fichier students chargé"<<endl;

	//chargement des sujets
	Subjects sujets(inputSubjectsName+".csv");

	cout << "fichier subject chargé"<<endl;

	Groups groupes(etudiants,sujets);

	cout << "Groupes chargés"<<endl;

	groupes.writeToFile(outputName+".csv");

	cout <<"Ecriture finie"<<endl;


	return 0;
}
