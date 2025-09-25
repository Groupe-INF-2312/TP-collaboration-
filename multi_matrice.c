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
    printf("\n---Saisir de la matrice A(%dx%d)---\n",n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }
}

void saisirB(int n,int m,int B[n][m]){
    printf("\n---Saisir de la matrice B(%dx%d)---\n",n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
    }
}
int main(){
    int n,m,p,i,j,k;
    printf("Donnerle nombre de lignes(n) de A:");
    scanf("%d",&n);
    printf("Donner le nombre de de colonnrs(m) de A:");
    scanf("%d",&m);
    printf("Donner le nombre de de colonnrs(p) de B:");
    scanf("%d",&p);

    int A[n][m],B[m][p],C[n][p];
    saisirA(n,m,A);
    affichermatrice(n,m,A);
    saisirB(m,p,B);
    affichermatrice(m,p,B);

    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            C[i][j]=0;
            for(k=0;k<m;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }

    printf("\nProduit de A x B=\n");
    affichermatrice(n,p,C);
    return 0;
}