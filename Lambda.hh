
#ifndef LAMBDA_H
#define LAMBDA_H

#include <string>
#include "Citoyen.hh"
#include "Election.hh"
#include "Gouvernement.hh"

class Lambda : public Citoyen 
{
public:

	// Constructors/Destructors

	Lambda ();
	
	virtual ~Lambda ();
	
	Candidat* choisirCandidat (Election electionsActuelles);
	
	
private:

	// Private attributes
	Gouvernement _ideal; // gouvernement dont rêve le citoyen lambda en question	

	int compatibilite_programme( Gouvernement* programme_du_candidat ); // appelée par la méthode choisirCandidat

};

#endif // LAMBDA_H
