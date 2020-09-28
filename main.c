#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include "header.h"
#include <conio.h>
#include <Windows.h>
#include <locale.h>

         //to include defined fonctions and structs;
//#include"source.c"

int main()
 {
    int c,m,Q,n;
	
	printf("\n              \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	printf("\n              \xb3 \xb3 mettre en plein ecran pour une meilleure experience ! \xb3 \xb3");
	printf("\n              \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
	debut:
//		do{
//			skip();
		    c=menuPrincipal();	    
		    skip();	    	    
//	   }while (c<1 || c>4);

//    switchAgain(a);
    switch(c)
    {
    	case 1:
		lc: 
    	    skip();
		    m=locationVoiture();
		    switch(m)
		    {
		    
		    	case 1:
			        skip();
					visualiserContrat();
					n=retour(); 
					if(n)
				   		goto lc;
					goto debut;
	    			break;
			    case 2:
			        skip();
			    	louerVoiture();
					n=retour(); 
					if(n)
				   		goto lc;
					goto debut;
		    		break;   
				case 3:
					skip();
					retournerVoiture();
					n=retour(); 
					if(n)
				   		goto lc;
					goto debut;		    		
					break;
		    	case 4:
		    		skip();
		    		modifierContrat();
					n=retour(); 
					if(n)
				   		goto lc;
					goto debut;		    		
					break; 	
				case 5:
					skip();
				    goto debut;	
					break;	
				default:
				    invalidOption();
					goto debut;		
			}
		    break;
		case 2:
			gv:
			skip();
			m=gestionDesVoitures();
			switch(m)
			{
				case 1:
					
					skip();
		    		listeDesVoitures();
		    		n=retour(); 
		    		if(n)
		    			goto gv;
		    		goto debut;
		    		break;
			    case 2:
			    	skip();
		    		ajouterVoitures();
		    		n=retour(); 
			  		if(n)
				   		goto gv;
				   	goto debut;
					break;   
				case 3:
					skip();
					modifierVoiture();
					n=retour(); 
			   		if(n)
				 		goto gv;
				   	goto debut;
		    		break;
		    	case 4:
		    		skip();
					supprimerVoiture();
					n=retour(); 
			 		if(n)
			    		goto gv;
			   		goto debut;
		    		break; 	
		    	case 5:
		   			skip();
				    goto debut;	
					break;
				default:
				    invalidOption();
				    goto gv;
			}
			break;
		case 3:
//		 // CODER PAR : MHAND MAOUS	skip();
			gc:
			skip();
		    m=gestionDesClients();
		   	switch(m)
				{
				case 1:
					skip();
			   		listeDesClients();
			   		n=retour(); 
		    		if(n)
		    			goto gc;
			    	goto debut;
			    	break;
				case 2:
				    skip();
					printf("\n\n                                  *** Combien de Clients voulez-vous ajouter?  : ");
					scanf("%d",&n);
			   		ajouterClients(n);
			   		n=retour(); 
			   		if(n)
				    	goto gc;
				   	goto debut;
					break;   
				case 3:
					skip();
					modifierClient();
					n=retour(); 
			  		if(n)
				 		goto gc;
				   	goto debut;
		    		break;
			    case 4:
				    skip();
					supprimerClient();
					n=retour(); 
				 	if(n)
				   		goto gc;
			   		goto debut;
		    		break;  		
				case 5:
					skip();
				    goto debut;	
					break;	
				default:
				    invalidOption();
				    goto gc;
				}
			break;
		case 4:
			Q=Quitter();
            if(Q)
			{
               	skip();
                goto debut;
	        }
               else
               exit(1);
               skip();
			break;	
		default: 
		    invalidOption();
		    goto debut;
		   		
	}

    return 0;
}




 // CODER PAR : MHAND MAOUS
