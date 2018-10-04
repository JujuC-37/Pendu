#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "affichage.h"
#include "caracteres.h"
#include "dico.h"

int main()
{
    char motSecret[]="SECRET",lettresUtilisees[26];
    int nombreToursTotal=0,nombreToursRates=0,motTrouveBool,lettreTrouveeBool;
    char lettreProposee;

    if (!piocherMot(motSecret))
    {
        exit(0);
    }

    char *motIncomplet=malloc(strlen(motSecret)*sizeof(char));
    initialisation(motSecret,motIncomplet,lettresUtilisees);

//Jeu
    do
    {
        presentation(nombreToursRates,lettresUtilisees,nombreToursTotal);
        //Si réussite
        if (strcmp(motIncomplet,motSecret)==0)
            motTrouveBool=1;
        else
            {
                nombreToursTotal++;
                motTrouveBool=0;
                lettreTrouveeBool=0;

                //Question
                question(motIncomplet);

                //Caractere
                lettreProposee=saisie(nombreToursTotal,lettresUtilisees);
                lettreTrouveeBool=remplacement(lettreProposee,motIncomplet,motSecret);

                //Tours
                if (lettreTrouveeBool==0)
                {
                    nombreToursRates++;
                }
            }

    }while( (nombreToursRates<10)&&(motTrouveBool==0) );

//Fin du jeu
    if (motTrouveBool==1)
        printf("Bravo ! Le mot secret est bien : ");
        for (i=0;i<strlen(motSecret);i++)
        {
            printf("%c",motSecret[i]);
        }
    else
    {
        int i=0;
        printf("Dommage... Le mot secret etait : ");
        for (i=0;i<strlen(motSecret);i++)
        {
            printf("%c",motSecret[i]);
        }
    }



    return 0;
}
