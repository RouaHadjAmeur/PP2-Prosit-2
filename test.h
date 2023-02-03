#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED
typedef struct
{
    char nom[30];
    char prenom [30];
    int nbenfant;
}employe;
void enregistrer ( char *fich);
void chercher(char *fich,char nom[]);
void affiche(char *fich ,int n);
void suprission(char *fich,char *fich1);


#endif // TEST_H_INCLUDED
