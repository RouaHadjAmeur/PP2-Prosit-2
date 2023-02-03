#include<stdlib.h>
#include<stdio.h>
#include"test.h"
void enregistrer ( char *fich){
FILE *f=NULL;
employe e;
int i,n;
f=fopen(fich,"wb");
if(f!=NULL){

printf("donner n svp");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("donner le nom\n");
    scanf("%s",e.nom);
    printf("donner le prenom\n");
    scanf("%s",e.prenom);
    printf("donner le nbr enfant\n");
    scanf("%d",&e.nbenfant);
   fwrite(&e,sizeof(employe),1,f);
}
fclose(f);
}else{
printf("erruer le f est null");

}
}void chercher(char *fich,char nom[]){
employe e;
int test=1;
FILE *f=NULL;
f=fopen(fich,"r");
if(f!=NULL){
while(fread(&e,sizeof(employe),1,f)!=0&&(test==1)){
    if(strcmp(e.prenom,nom)==0)
        test=0;

}
if(test==0){
    printf("%s \n ",e.nom);
}else{
printf("n existe pas");
}
fclose(f);
}else{
printf("erruerle f est null");

}
}
void affiche(char *fich,int n){
FILE *f=NULL;
employe e;
f=fopen(fich,"r");
if(f!=NULL){
 while(fread(&e,sizeof(employe),1,f)!=0){
    printf("%s%s%d",e.nom,e.prenom,e.nbenfant);
 }

fclose(f);
}else{
printf("ereur le f est null");

}
}
void suprission(char *fich ,char *fich1){
employe e;
FILE *f=NULL;
FILE *f1=NULL;
f=fopen(fich,"r");
f1=fopen(fich1,"w");
if(f!=NULL){
    while(fread(&e,sizeof(employe),1,f)!=0){
        if(e.nbenfant!=0){
            fwrite(&e,sizeof(employe),1,f1);
        }
    }
}
else
{
    printf("erreur ");
}
}
