
#ifndef CANDIDATNOUVEAU_H
#define CANDIDATNOUVEAU_H

#include <string>
class CandidatNouveau : public Candidat
{
public:

	// Constructors/Destructors
	//  


	/**
	 * Empty Constructor
	 */
	CandidatNouveau ();

	/**
	 * Empty Destructor
	 */
	virtual ~CandidatNouveau ();



	/**
	 * @return int
	 */
	int calculPopularite (); // Une côte de popularite qui lui donne plus de chances de gagner. Dépend de son charisme

};

#endif // CANDIDATNOUVEAU_H
