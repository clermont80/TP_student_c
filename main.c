#pragma hdrstop
#pragma argsused

#include <stdio.h>
#include <student.h>

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

int _tmain(int argc, _TCHAR* argv[]) 
{
	 int choix;
	 int nbeleve=0; //par defaut aucun eleve dans le tableau
	 student eleves[100];
	 char nom_fichier[15];
	 int stoploop = 0;

while(stoploop==0)
{
	 do
	 {
		  printf("Bonjour, veuillez choisir une action : \n");
		  printf("1 -> ajouter un eleve \n");
		  printf("2 -> afficher les informations de tous les eleves\n");
		  printf("3 -> sauvegarder les eleves dnas un fichier \n");
          printf("4 -> sortir de la boucle de saisie \n");
		  scanf("%d",&choix);
	 }
	while(choix != 1 && choix !=  2 && choix != 3 && choix!=4);

	switch (choix)
	{
	  case 1 : addStudent(eleves,&nbeleve);
	  break;

	  case 2 : displayStudent(eleves,nbeleve);
	  break;

	  case 3 :
		  printf("Saisir le nom du fichier voulu : \n");
		  gets(nom_fichier);
		  printf("\n");
		  saveStudent(nom_fichier,eleves,nbeleve);
	  break;

	  case 4 : stoploop=1;
      printf("\n");
      break;
	}
}

printf("bye !");
	return 0;
}
