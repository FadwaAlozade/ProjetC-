
#ifndef CANDIDATRECIDIVISTE_H
#define CANDIDATRECIDIVISTE_H

#include <string>
class CandidatRecidiviste : public Candidat // Candidat ayant déjà été président
{
public:

	// Constructors/Destructors
	//  


	/**
	 * Empty Constructor
	 */
	CandidatRecidiviste ();

	/**
	 * Empty Destructor
	 */
	virtual ~CandidatRecidiviste ();



	/**
	 * @return int
	 */
	int calculPopularite (); // Une côte de popularite qui lui donne plus de chances de gagner. Dépend de son charisme et de comment il avait tenu ses promesses lors de son mandat
	
private:

	// Private attributes
	//  

	int _promesseTenue; // note sur s'il avait tenu ses promesses lors de son mandat

public:


	// Private attribute accessor methods
	// Setters et getters


	/**
	 * Set the value of _promesseTenue
	 * @param new_var the new value of _promesseTenue
	 */
	void set_promesseTenue (int new_var)	 {
			_promesseTenue = new_var;
	}

	/**
	 * Get the value of _promesseTenue
	 * @return the value of _promesseTenue
	 */
	int get_promesseTenue ()	 {
		return _promesseTenue;
	}
private:


	void initAttributes () ;

};

#endif // CANDIDATRECIDIVISTE_H
