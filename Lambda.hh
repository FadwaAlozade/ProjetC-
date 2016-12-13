
#ifndef LAMBDA_H
#define LAMBDA_H

#include <string>
class Lambda : public Citoyen 
{
public:

	// Constructors/Destructors
	//  


	/**
	 * Empty Constructor
	 */
	Lambda ();

	/**
	 * Empty Destructor
	 */
	virtual ~Lambda ();



	/**
	 * @return Candidat*
	 * @param  electionsActuelles
	 */
	Candidat* choisirCandidat (Election electionsActuelles)
	{
	}

private:

	// Private attributes
	//  

	Gouvernement _ideal; // gouvernement dont rêve le citoyen lambda en question	
	

public:


	// Private attribute accessor methods
	//  setteurs et getteurs


	/**
	 * Set the value of _ideal
	 * @param new_var the new value of _ideal
	 */
	void set_ideal (Gouvernement new_var)	 {
			_ideal = new_var;
	}

	/**
	 * Get the value of _ideal
	 * @return the value of _ideal
	 */
	Gouvernement get_ideal ()	 {
		return _ideal;
	}
private:


	void initAttributes () ; // hein ???

};

#endif // LAMBDA_H
