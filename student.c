#include <stdio.h>
#include <student.h>


int addStudent(student* s,int* nbeleve)
{
   printf("Saisir le nom de l etudiant : \n");
   fflush(stdin);
   gets(s[*nbeleve].nom);
   printf("\n");
   printf("Saisir le prenom de l etudiant : \n");
   fflush(stdin);
   gets(s[*nbeleve].prenom);
   printf("\n");
   printf("Saisir l adresse de ce dernier : \n");
   fflush(stdin);
   gets(s[*nbeleve].adresse);
   printf("\n");
   printf("Saisir sa classe : \n");
   fflush(stdin);
   gets(s[*nbeleve].classe);

   (*nbeleve)++;

   return *nbeleve;
}

void displayStudent(student* s,int nbeleve)
{
	int indice;

	for(indice=0;indice<nbeleve;indice++)  //boucle sur les eleves de la structure
	{

		printf("nom : %s",s[indice].nom);
		printf("\n");

		printf("prenom: %s",s[indice].prenom);
		printf("\n");

		printf("adresse: %s",s[indice].adresse);
		printf("\n");

		printf("classe: %s",s[indice].classe);
        printf("\n");
	}
}

void saveStudent(char* nom,student* s,int nbeleve)
{
	 FILE* fichier;
	 fichier = fopen(nom,"r+");

	 fread(s,sizeof(student),100,fichier);
	 fwrite(s,sizeof(student),100,fichier);


}
