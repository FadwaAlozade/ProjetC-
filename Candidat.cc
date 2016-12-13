#include "Candidat.hh"
#include <vector>

#define MAX_CONSTRUCT 100
using namespace std;

// Constructors/Destructors
//  

Candidat::Candidat (Gouvernement gouv) :
_programme(gouv); // A la base tous les candidat ont pour programme de garder le gouvernement tel qu'il est
// Il peaufineront leur programme par la suite avec la méthode construireProgramme()
{ }

Candidat::~Candidat () { }



Gouvernement Candidat::constructionProgramme (Pays* paysActuel) {
	int compteur = MAX_CONSTRUCT;
	
	// mettre en place les priorité;
	/*
	 * Reste à faire !!!!!!!
	 **/
	
	// tirer au hasard 8 int entre 0 et 100 
	vector<int> separateur(10);
	sepataeur[0] = 0;
	separateur [9] = 100;
	
	for (int i=1; i<9 ; i++){
		separateur[i] = rand()%100;
	}
	
	// les trier pour qu'ils soient mis dans l'ordre du plus petit au plus grand
	sort( separateur.begin() , separateur.end() );
	
	// calculer les longueurs de tous les intervalles obtenus avec ces 8 valeurs
	vector<int> longueur(9);
	for (int i=0; i<9; i++){
		longueur [i] = separateur[i+1] - separateur[i];
	}
	
	// les trier pour qu'ils soient mis dans l'ordre du plus petit au plus grand
	sort( longueur.begin() , longueur.end() );
	
	// attribuer ces longueurs aux champs selon la priorité
	/*
	 * Reste à faire !!!!!!!
	 **/
	}

string Candidat::barresdevie(int champ){
	int i; //itérateur de boucle for
	string labarre = "";
	for(i=0 ; i<champ ; i++){
		labarre += "|";
	}
	return labarre;
}

void Candidat::afficheProgramme() {
	cout << "Je m'appelle" + _nom << endl;
	
	cout << "Voici mon programme : " << endl;
	
	cout << "Economie :\t" + barresdevie(_economie) << endl;
	cout << "Education :\t" + barresdevie(_education) << endl;
	cout << "Santé :\t" + barresdevie(_sante) << endl;
	cout << "Affaires étrangères :\t" + barresdevie(_affairesEtrangeres) << endl;
	cout << "Militaire :\t" + barresdevie(_militaire) << endl;
	cout << "Sécurité interne :\t" + barresdevie(_securiteInterieure) << endl;
	cout << "Environnement :\t" + barresdevie(_environnement) << endl;
	cout << "Justice :\t" + barresdevie(_justice) << endl;
	cout << "Culture :\t" + barresdevie(_culture) << endl;

	}
