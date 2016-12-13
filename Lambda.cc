#include "Lambda.hh"
#include <cstdlib>

// Constructors/Destructors
//  

Lambda::Lambda () :
_ideal();
{
	_ideal.set_economie( 50 + rand()%50 );
	_ideal.set_education( 50 + rand()%50 );
	_ideal.set_sante( 50 + rand()%50 );
	_ideal.set_affairesEtrangeres( 50 + rand()%50 );
	_ideal.set_militaire( 50 + rand()%50 );
	_ideal.set_securiteInterieure( 50 + rand()%50 );
	_ideal.set_environnement( 50 + rand()%50 );
	_ideal.set_justice( 50 + rand()%50 );
	_ideal.set_culture( 50 + rand()%50 );
}

Lambda::~Lambda () { }


Candidat* Lambda::choisirCandidat (Election electionsActuelles) {
	// à remplir
	// différence champ à champ avec le programme de chaque candidat
	// On choisit le candidat qui minimise cette différence entre l'ideal du citoyen et le progrmme du candidat
}

int Lambda::compatibilite_programme( Gouvernement* programme_du_candidat ){
	
}
