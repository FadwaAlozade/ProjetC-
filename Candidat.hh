
#ifndef CANDIDAT_H
#define CANDIDAT_H

#include <string>
class Candidat
{
public:

	// Constructors/Destructors

	Candidat ();

	virtual ~Candidat ();

	Gouvernement constructionProgramme (Pays* paysActuel); // peut être mise en privé

	void afficheProgramme(); // Affiche le programme de ce candidat

protected:

	virtual int calculPopularite (); // Une côte de popularite qui se calcule différemment selon si le candidat a déjà été président ou non 

private:

	// Private attributes
	string _nom;
	//unsigned int _numeroCandidat;
	Gouvernement _programme;
	int _popularite;
	int _charisme;


public:


	// Private attribute accessor methods
	// Setters et getters

	string get_nom ()	 {
		return _nom;
	}

	unsigned int get_numeroCandidat ()	 {
		return _numeroCandidat;
	}

	Gouvernement get_programme ()	 {
		return _programme;
	}


	int get_popularite ()	 {
		return _popularite;
	}


	void set_charisme (int new_var)	 {
			_charisme = new_var;
	}

	int get_charisme ()	 {
		return _charisme;
	}
	
private : 
	string barresdevie(int champ);


};

#endif // CANDIDAT_H
