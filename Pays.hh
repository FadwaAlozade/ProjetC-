
#ifndef PAYS_H
#define PAYS_H

#include <string>
class Pays
{
public:

	// Constructors/Destructors
	//  


	/**
	 * Empty Constructor
	 */
	Pays ();

	/**
	 * Empty Destructor
	 */
	virtual ~Pays ();



	/**
	 * @return Gouvernement // ne renverra pas forcément un gouvernement. Ca peut etre void.
	 */
	Gouvernement jouerMandat (); // changera le gouvernement actuel selon le programme du président et un nombre de points limité à distribuer (~30points)


	/**
	 */
	void afficherEtatGouvernement (); // affiche le gouvernement actuel avec ses barres de "vie"


	/**
	 */
	void afficherElections (); // afficher les candidat et leur programme ainsi que le gagnant (nouveau président)


	/**
	 */
	void afficherPresident (); // afficher le président actuel et son programme lorsqu'il était candidat


private:

	// Private attributes
	//  

	Candidat _presidentActuel;
	Gouvernement _gouvActuel;
	vector<Citoyen> _population;
	Election _cesElections;

public:


	// Private attribute accessor methods
	//  Getteurs et setteurs


	/**
	 * Set the value of _presidentActuel
	 * @param new_var the new value of _presidentActuel
	 */
	void set_presidentActuel (Candidat new_var)	 {
			_presidentActuel = new_var;
	}

	/**
	 * Get the value of _presidentActuel
	 * @return the value of _presidentActuel
	 */
	Candidat get_presidentActuel ()	 {
		return _presidentActuel;
	}

	/**
	 * Set the value of _gouvActuel
	 * @param new_var the new value of _gouvActuel
	 */
	void set_gouvActuel (Gouvernement new_var)	 {
			_gouvActuel = new_var;
	}

	/**
	 * Get the value of _gouvActuel
	 * @return the value of _gouvActuel
	 */
	Gouvernement get_gouvActuel ()	 {
		return _gouvActuel;
	}

	/**
	 * Set the value of _population
	 * @param new_var the new value of _population
	 */
	void set_population (vector<Citoyen> new_var)	 {
			_population = new_var;
	}

	/**
	 * Get the value of _population
	 * @return the value of _population
	 */
	vector<Citoyen> get_population ()	 {
		return _population;
	}

	/**
	 * Set the value of _cesElections
	 * @param new_var the new value of _cesElections
	 */
	void set_cesElections (Election new_var)	 {
			_cesElections = new_var;
	}

	/**
	 * Get the value of _cesElections
	 * @return the value of _cesElections
	 */
	Election get_cesElections ()	 {
		return _cesElections;
	}
	
private:


	void initAttributes () ; // hein ??

};

#endif // PAYS_H
