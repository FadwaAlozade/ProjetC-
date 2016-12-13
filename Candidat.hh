
#ifndef CANDIDAT_H
#define CANDIDAT_H

#include <string>
class Candidat
{
public:

	// Constructors/Destructors
	//  


	/**
	 * Empty Constructor
	 */
	Candidat ();

	/**
	 * Empty Destructor
	 */
	virtual ~Candidat ();



	/**
	 * @return Gouvernement
	 * @param  paysActuel
	 */
	Gouvernement constructionProgramme (Pays* paysActuel); // peut être mise en privé
	
	/**
	 * 
	 */
	void afficheProgramme(); // Affiche le programme de ce candidat

protected:

	/**
	 * @return int
	 */
	virtual int calculPopularite (); // Une côte de popularite qui se calcule différemment selon si le candidat a déjà été président ou non 

private:

	// Private attributes
	//  

	string _nom;
	unsigned int _numeroCandidat;
	Gouvernement _programme;
	int _popularite;
	int _charisme;


public:


	// Private attribute accessor methods
	// Setters et getters


	/**
	 * Set the value of _nom
	 * @param new_var the new value of _nom
	 */
	void set_nom (string new_var)	 {
			_nom = new_var;
	}

	/**
	 * Get the value of _nom
	 * @return the value of _nom
	 */
	string get_nom ()	 {
		return _nom;
	}

	/**
	 * Set the value of _numeroCandidat
	 * @param new_var the new value of _numeroCandidat
	 */
	void set_numeroCandidat (unsigned int new_var)	 {
			_numeroCandidat = new_var;
	}

	/**
	 * Get the value of _numeroCandidat
	 * @return the value of _numeroCandidat
	 */
	unsigned int get_numeroCandidat ()	 {
		return _numeroCandidat;
	}

	/**
	 * Set the value of _programme
	 * @param new_var the new value of _programme
	 */
	void set_programme (Gouvernement new_var)	 {
			_programme = new_var;
	}

	/**
	 * Get the value of _programme
	 * @return the value of _programme
	 */
	Gouvernement get_programme ()	 {
		return _programme;
	}

	/**
	 * Set the value of _popularite
	 * @param new_var the new value of _popularite
	 */
	void set_popularite (int new_var)	 {
			_popularite = new_var;
	}

	/**
	 * Get the value of _popularite
	 * @return the value of _popularite
	 */
	int get_popularite ()	 {
		return _popularite;
	}

	/**
	 * Set the value of _charisme
	 * @param new_var the new value of _charisme
	 */
	void set_charisme (int new_var)	 {
			_charisme = new_var;
	}

	/**
	 * Get the value of _charisme
	 * @return the value of _charisme
	 */
	int get_charisme ()	 {
		return _charisme;
	}
private:


	void initAttributes () ; // hein ??

};

#endif // CANDIDAT_H
