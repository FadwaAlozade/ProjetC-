
#ifndef GOUVERNEMENT_H
#define GOUVERNEMENT_H

#include <string>
class Gouvernement
{
public:

	// Constructors/Destructors
	//  


	/**
	 * Empty Constructor
	 */
	Gouvernement ();

	/**
	 * Empty Destructor
	 */
	virtual ~Gouvernement ();



	/**
	 */
	void afficherGouvernement (); // affiche le gouvernement avec ses barres de vie. //Peut-être à mettre en privé

private:

	// Private attributes
	//  

	int _economie;
	int _education;
	int _sante;
	int _affairesEtrangeres;
	int _militaire;
	int _securiteInterieure;
	int _environnement;
	int _justice;
	int _culture;


public:


	// Private attribute accessor methods
	//  setteurs et getteurs


	/**
	 * Set the value of _economie
	 * @param new_var the new value of _economie
	 */
	void set_economie (int new_var)	 {
			_economie = new_var;
	}

	/**
	 * Get the value of _economie
	 * @return the value of _economie
	 */
	int get_economie ()	 {
		return _economie;
	}

	/**
	 * Set the value of _education
	 * @param new_var the new value of _education
	 */
	void set_education (int new_var)	 {
			_education = new_var;
	}

	/**
	 * Get the value of _education
	 * @return the value of _education
	 */
	int get_education ()	 {
		return _education;
	}

	/**
	 * Set the value of _sante
	 * @param new_var the new value of _sante
	 */
	void set_sante (int new_var)	 {
			_sante = new_var;
	}

	/**
	 * Get the value of _sante
	 * @return the value of _sante
	 */
	int get_sante ()	 {
		return _sante;
	}

	/**
	 * Set the value of _affairesEtrangeres
	 * @param new_var the new value of _affairesEtrangeres
	 */
	void set_affairesEtrangeres (int new_var)	 {
			_affairesEtrangeres = new_var;
	}

	/**
	 * Get the value of _affairesEtrangeres
	 * @return the value of _affairesEtrangeres
	 */
	int get_affairesEtrangeres ()	 {
		return _affairesEtrangeres;
	}

	/**
	 * Set the value of _militaire
	 * @param new_var the new value of _militaire
	 */
	void set_militaire (int new_var)	 {
			_militaire = new_var;
	}

	/**
	 * Get the value of _militaire
	 * @return the value of _militaire
	 */
	int get_militaire ()	 {
		return _militaire;
	}

	/**
	 * Set the value of _securiteInterieure
	 * @param new_var the new value of _securiteInterieure
	 */
	void set_securiteInterieure (int new_var)	 {
			_securiteInterieure = new_var;
	}

	/**
	 * Get the value of _securiteInterieure
	 * @return the value of _securiteInterieure
	 */
	int get_securiteInterieure ()	 {
		return _securiteInterieure;
	}

	/**
	 * Set the value of _environnement
	 * @param new_var the new value of _environnement
	 */
	void set_environnement (int new_var)	 {
			_environnement = new_var;
	}

	/**
	 * Get the value of _environnement
	 * @return the value of _environnement
	 */
	int get_environnement ()	 {
		return _environnement;
	}

	/**
	 * Set the value of _justice
	 * @param new_var the new value of _justice
	 */
	void set_justice (int new_var)	 {
			_justice = new_var;
	}

	/**
	 * Get the value of _justice
	 * @return the value of _justice
	 */
	int get_justice ()	 {
		return _justice;
	}

	/**
	 * Set the value of _culture
	 * @param new_var the new value of _culture
	 */
	void set_culture (int new_var)	 {
			_culture = new_var;
	}

	/**
	 * Get the value of _culture
	 * @return the value of _culture
	 */
	int get_culture ()	 {
		return _culture;
	}
private:


	void initAttributes () ; // hein ??

};

#endif // GOUVERNEMENT_H
