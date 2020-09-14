#ifndef STUDENT_H
#define STUDENT_H

typedef struct
{
	char nom[10];
	char prenom[10];
	char adresse[20];
    char classe[10];
}student;

int addStudent(student* s,int* nbeleve);
void displayStudent(student* s,int nbeleve);
void saveStudent(char* nom_fichier,student* s,int nbeleve);


#endif
