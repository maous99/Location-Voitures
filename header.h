#ifndef _HEADER_H_
#define _HEADER_H_
//declare and defining structures ;
 // CODER PAR : MHAND MAOUS
// we have to declare and define struct date which we'll use in most of the time;
typedef struct
{
	int j; // JOUR
	int m; // MOIS 
	int a; // ANNEE
}date;    

    // First of all, struct Voiture which define every 'voiture' object and its specifics ;  
typedef struct
	{ 
	int idVoiture; 
	char marque[15]; 
	char nomVoiture[15]; 
	char couleur[7]; 
	int nbPlaces; 
	int prixJour; 
	char enLocation[4]; 
}voiture;

    //second struct : contrat ;
typedef struct  
{ 
	float numContrat; 
	int idVoiture; 
	int idClient; 
	date debut; 
	date fin; 
	int cout; 
}contrat; 
    //last one: struct client .
typedef struct 
{ 
	int idClient; 
	char nom[20]; 
	char prenom[20]; 
	int cin; 
	char adresse[15]; 
	int telephone; 
 } client;
//declare fonctions ;
    //fonctions principal ;
    int locationVoiture();
    int gestionDesVoitures();
    int menuPrincipal();
    int gestionDesClients();    
    //gestion des clients
   	int clientSearch(int);
	void listeDesClients();
   	void ajouterClients(int );
  	void modifierClient();
	void supprimerClient();
    //gestion des voitures
	int carSearch(int);
	void listeDesVoitures();
   	void ajouterVoitures();
  	void modifierVoiture();
	void supprimerVoiture();
	//Location d'une voiture
	int contratSearch(float);
	void visualiserContrat();
	void louerVoiture();
	void retournerVoiture();
	void modifierContrat();
	// extra!!
    int Quitter();
    void invalidOption();
    int validDate(date);
    int days(date,date);
    void changeStatus(char* ,int );
    int exist(int* ,int ,int );
    int retour();
    int available(int);
    int Cavailable(float);
    void skip();
//    int exist(int,int,int);
	
#endif




 // CODER PAR : MHAND MAOUS
