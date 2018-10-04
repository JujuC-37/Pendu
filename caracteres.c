#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char lireCaractere()
{
    char caractere=0;

    caractere=getchar(); //lire 1er caractere
    caractere=toupper(caractere); //mettre en majuscule

    while(getchar() != '\n');// On lit les autres caractères mémorisés un à un jusqu'au \n (pour les effacer)

    return caractere;
}

char saisie(int nombreToursTotal,char* lettreUtilisee)
{
    char lettreSaisie;
    do
    {
        printf("Tapez une lettre : ");
        lettreSaisie=lireCaractere();
    }while (lettreSaisie<65 || lettreSaisie>90);

    lettreUtilisee[nombreToursTotal-1]=lettreSaisie;
    return lettreSaisie;
}

int remplacement(char lettre, char* motIncomplet, char* motSecret)
{
    int lettreTrouveeBool=0, i;

    for (i=0;i<strlen(motSecret);i++)
    {
        if(lettre==motSecret[i])
        {
            motIncomplet[i]=lettre;
            lettreTrouveeBool=1;
        }
    }

    return lettreTrouveeBool;
}

void initialisation(char* motSecret,char* motIncomplet,char* lettresUtilisees)
{
    int i;

    //motIncomplet
    if (motIncomplet == NULL)
        exit(0);

    for(i=0;i<strlen(motSecret);i++)
    {
        motIncomplet[i]='*';
    }
    motIncomplet[i]='\0';

    //lettresUtilisees
    for (i=0;i<strlen(lettresUtilisees);i++)
    {
        lettresUtilisees[i]=' ';
    }
}

