#include<stdio.h>

void saisirA(int n,int m,int A[n][m]){
    printf("Saisir la matrice");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("M[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }
 
}
void affichervecteur(int n, int v[n]){
    printf("\nvecteur V=[");
    for(int i=0;i<n;i++){
    printf("%d ",v[i]);
    }
    printf("]\n");


}
void saisirvecteur(int n,int v[n]){
    for(int i=0;i<n;i++){
      printf("V[%d]=",i);
      scanf("%d",&v[i]);
    }

}
void affichermatrice(int n,int m,int  M[n][m]){
    for(int i=0;i<n;i++){
        printf("[");
        for(int j=0;j<m;j++){
            printf("%d ",M[i][j]);
        }
        printf("]\n");
    }

}
void result(int m, int r[m]){
    printf("Resultat =[ ");
    for(int j=0;j<m;j++)
    printf("%d ",r[j]);
    printf("]\n");

}
// complexite en temps:2(n*m)
//memoire:n+(n*m)+m+4
int main(){
    int n,m,i,j;
    printf("Entre la dimension des vecteue(s):");
    scanf("%d",&n);
    printf("Le nombre de colonne de la matrice:");
    scanf("%d",&m);
    int v[n],M[n][m],r[m];
    printf("Saisir du vecteur V");
    saisirvecteur(n,v);

    saisirA(n,m,M);

    for(j=0;j<m;j++){
        r[j]=0;
        for(i=0;i<n;i++){
            r[j] +=v[i]*M[i][j];// 2 operations
        }
    }
    affichervecteur(n,v);


    printf("Matrice M\n");
    affichermatrice(n,m,M);
    
    result(m,r);
    return 0;
}