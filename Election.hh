
#ifndef ELECTION_H
#define ELECTION_H

#include <string>
class Election
{
public:

	// Constructors/Destructors
	//  


	/**
	 * Empty Constructor
	 */
	Election ();

	/**
	 * Empty Destructor
	 */
	virtual ~Election ();



	/**
	 */
	void afficherCandidats ();


private:

	// Private attributes
	//  

	vector<Candidat> _cesCandidats;
	Candidat* _winner;
	vector<Citoyen> _cesVotants;
	

public:


	// Private attribute accessor methods
	//  setters et getters


	/**
	 * Set the value of _cesCandidats
	 * @param new_var the new value of _cesCandidats
	 */
	void set_cesCandidats (vector<Candidat> new_var)	 {
			_cesCandidats = new_var;
	}

	/**
	 * Get the value of _cesCandidats
	 * @return the value of _cesCandidats
	 */
	vector<Candidat> get_cesCandidats ()	 {
		return _cesCandidats;
	}

	/**
	 * Set the value of _winner
	 * @param new_var the new value of _winner
	 */
	void set_winner (Candidat* new_var)	 {
			_winner = new_var;
	}

	/**
	 * Get the value of _winner
	 * @return the value of _winner
	 */
	Candidat* get_winner ()	 {
		return _winner;
	}

	/**
	 * Set the value of _cesVotants
	 * @param new_var the new value of _cesVotants
	 */
	void set_cesVotants (vector<Citoyen> new_var)	 {
			_cesVotants = new_var;
	}

	/**
	 * Get the value of _cesVotants
	 * @return the value of _cesVotants
	 */
	vector<Citoyen> get_cesVotants ()	 {
		return _cesVotants;
	}
private:


	void initAttributes () ; // hein ??

};

#endif // ELECTION_H
