#include<stdio.h>
void affichermatrice(int n,int m ,int M[n][m]){
    for(int i=0;i<n;i++){
        printf("[");
        for(int j=0;j<m;j++){
            printf("%d ",M[i][j]);
        }
        printf("]\n");
    }
}
void saisirA(int n,int m,int A[n][m]){
    printf("\n---Saisir de la matrice A---\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }
}

void saisirB(int n,int m,int B[n][m]){
    printf("\n---Saisir de la matrice B---\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
    }
}
//complexite en temps:n*m
//memoire:3(n*m)+4
int main(){
    int n,m,i,j;//4
    printf("Donnerle nombre de lignes(n):");
    scanf("%d",&n);
    printf("Donner le nombre de de colonnrs(m):");
    scanf("%d",&m);

    int A[n][m],B[n][m],C[n][m];
    saisirA(n,m,A);
    affichermatrice(n,m,A);
    saisirB(n,m,B);
    affichermatrice(n,m,B);

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            C[i][j]=A[i][j]+B[i][j];// n*m operations
        }
    }
    printf("\nA+B=\n");
    affichermatrice(n,m,C);
    return 0;

}