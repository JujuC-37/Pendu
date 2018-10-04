#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void question(char *motIncomplet)
{
    int i;

    printf("Quel est le mot secret ? ");

    for (i=0;i<strlen(motIncomplet);i++)
    {
        printf("%c",motIncomplet[i]);
    }
    printf("\n");
}

void presentation(int nombreToursRates,char* lettresUtilisees,int nombreToursTotal)
{
    int i;

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    printf("                              Le pendu\n\n\n");
    switch (nombreToursRates)
    {
    case 10 :
        printf("________\n");
        printf("  |    |\n");
        printf("  |    O\n");
        printf("  |   /|\\\n");
        printf("  |   / \\\n");
        printf("_____\n\n");
        break;
    case 9 :
        printf("_________\n");
        printf("  |    |\n");
        printf("  |    O\n");
        printf("  |   /|\\\n");
        printf("  |   /\n");
        printf("_____\n\n");
        break;
    case 8 :
        printf("_________\n");
        printf("  |    |\n");
        printf("  |    O\n");
        printf("  |   /|\\\n");
        printf("  |\n");
        printf("_____\n\n");
        break;
    case 7 :
        printf("_________\n");
        printf("  |    |\n");
        printf("  |    O\n");
        printf("  |   /|\n");
        printf("  |\n");
        printf("_____\n\n");
        break;
    case 6 :
        printf("_________\n");
        printf("  |    |\n");
        printf("  |    O\n");
        printf("  |    |\n");
        printf("  |\n");
        printf("_____\n\n");
        break;
    case 5 :
        printf("_________\n");
        printf("  |    |\n");
        printf("  |    O\n");
        printf("  |\n");
        printf("  |\n");
        printf("_____\n\n");
        break;
    case 4 :
        printf("_________\n");
        printf("  |    |\n");
        printf("  |\n");
        printf("  |\n");
        printf("  |\n");
        printf("_____\n\n");
        break;
    case 3 :
        printf("_________\n");
        printf("  |\n");
        printf("  |\n");
        printf("  |\n");
        printf("  |\n");
        printf("_____\n\n");
        break;
    case 2 :
        printf("\n");
        printf("  |\n");
        printf("  |\n");
        printf("  |\n");
        printf("  |\n");
        printf("_____\n\n");
        break;
    case 1 :
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("_____\n\n");
        break;
    case 0 :
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n\n");
        break;
    }

    printf("Lettres proposees : ");
    for (i=0;i<nombreToursTotal+1;i++)
    {
        printf("%c ",lettresUtilisees[i]);
    }

    printf("\n\n");
}
