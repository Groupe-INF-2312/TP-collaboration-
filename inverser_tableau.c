#include<stdio.h>

void saisirtableau(int n,int v[n]){
    printf("\n---Saisir tableau---\n");
    for(int i=0;i<n;i++){
      printf("V[%d]=",i);
      scanf("%d",&v[i]);
    }
}
void affichertab(int n, int t[n]){
    printf("[");
    for(int i=0;i<n;i++){
    printf("%d ",t[i]);
    }
    printf("] ");

}

int main(){
    int n,i,tmp;
    printf("Enter la dimension du tableau:");
    scanf("%d",&n);
    printf("Entre les elements du tableau\n");
    int tab[n];
    saisirtableau(n,tab);

    printf("L'inverse du tableau est:\n");
    for(i=0;i<n/2;i++){
        tmp=tab[i];
        tab[i]=tab[n-i-1];
        tab[n-i-1]=tmp;
    }
    for(i=0;i<n;i++){
        printf("tab[%d]=%d\n",i,tab[i]);
    }
    affichertab(n,tab);
    
    return 0;
}
