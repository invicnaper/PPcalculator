#ifndef CALC_H
#define CALC_H
#include <stdio.h>
#ifdef __win32__
#include <conio.h>
#endif
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <errno.h>
#include <limits.h>
#define  cte 310
#define  expr 96100
#ifdef __linux__
#define stricmp strcmp
#define getch getchar
#endif

typedef enum {t=1,f=0} boolean;
typedef struct liste
{
    char   membre[7];
    struct liste *suivant;
    struct liste *tete;
    struct liste *queue;
    int nbrelem;
}liste;
int lire(char *chaine, int longueur);
void viderBuffer();
char *space(char *chaine);
char *plusoumoins(char *chaine);
int verification(char *chaine);
double *addition(double x, double y);
double *soustraction(double a,double b);
double *multiplication(double x, double y);
double *division(double x, double y);
double *puissance(double x, double y);
double *factorielle(double x);
int priority(char op);
void vidertmpstring(char *tmpstring);
void videroperateur(char tmp[cte][cte]);
liste *creer_liste();
boolean liste_vide(liste* l);
void ajouter_en_queue(liste *l,char *membre);
char *retirer_en_queue(liste *l);
void empiler(char expression[cte][cte],int *k,char *membre,liste *lst);
double * maPile(char* chaine,liste *lst);
double* evaluer(char expression[cte][cte]);
void decallage_binaire(char expression[cte][cte],int *i);
void decallage_unaire(char expression[cte][cte],int *i);
double * calc(char * string);

#endif // CALC_H
