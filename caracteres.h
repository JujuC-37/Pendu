#ifndef CARACTERES_H_INCLUDED
#define CARACTERES_H_INCLUDED

char lireCaractere();
char saisie(int nombreToursTotal,char* lettreUtilisee);
int remplacement(char lettre, char* motIncomplet, char* motSecret);
void initialisation(char* motSecret,char* motIncomplet,char* lettresUtilisees);

#endif // CARACTERES_H_INCLUDED
