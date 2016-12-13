#include "Gouvernement.h"

// Constructors/Destructors
//  

Gouvernement::Gouvernement () {
initAttributes();
}

Gouvernement::~Gouvernement () { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  

void Gouvernement::initAttributes () {
	_economie = 50;
	_education = 50;
	_sante = 50;
	_affairesEtrangeres = 50;
	_militaire = 50;
	_securiteInterieure = 50;
	_environnement = 50;
	_justice = 50;
	_culture = 50;
}

