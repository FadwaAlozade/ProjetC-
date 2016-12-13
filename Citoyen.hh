
#ifndef CITOYEN_H
#define CITOYEN_H

#include <string>

class Candidat;

class Citoyen
{
public:

	// Constructors/Destructor
	Citoyen ();
	
	virtual ~Citoyen ();


private:

	// Private attributes 

	Candidat* _vote;

public:
	// Private attribute accessor methods
	//  setters et getters

	void set_vote (Candidat* new_var)	 {
			_vote = new_var;
	}


	Candidat* get_vote ()	 {
		return _vote;
	}

	

};

#endif // CITOYEN_H
