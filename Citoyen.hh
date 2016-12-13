
#ifndef CITOYEN_H
#define CITOYEN_H

#include <string>
class Citoyen
{
public:

	// Constructors/Destructors
	//  


	/**
	 * Empty Constructor
	 */
	Citoyen ();

	/**
	 * Empty Destructor
	 */
	virtual ~Citoyen ();


private:

	// Private attributes
	//  

	Candidat _vote;
	unsigned int _numeroVotant;

public:


	// Private attribute accessor methods
	//  setters et getters


	/**
	 * Set the value of _vote
	 * @param new_var the new value of _vote
	 */
	void set_vote (Candidat new_var)	 {
			_vote = new_var;
	}

	/**
	 * Get the value of _vote
	 * @return the value of _vote
	 */
	Candidat get_vote ()	 {
		return _vote;
	}

	/**
	 * Set the value of _numeroVotant
	 * @param new_var the new value of _numeroVotant
	 */
	void set_numeroVotant (unsigned int new_var)	 {
			_numeroVotant = new_var;
	}

	/**
	 * Get the value of _numeroVotant
	 * @return the value of _numeroVotant
	 */
	unsigned int get_numeroVotant ()	 {
		return _numeroVotant;
	}
private:


	void initAttributes () ; // hein ???

};

#endif // CITOYEN_H
