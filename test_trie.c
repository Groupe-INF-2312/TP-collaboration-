#include<stdio.h>

void saisirtableau(int n,int v[n]){
    printf("\n---Saisir tableau---\n");
    for(int i=0;i<n;i++){
      printf("V[%d]=",i);
      scanf("%d",&v[i]);
    }
}
int main(){
    int n,i,tmp;
    printf("Enter la dimension du tableau:");
    scanf("%d",&n);
    printf("Entre les elements du tableau\n");
    int tab[n];
    saisirtableau(n,tab);
    for(i=0;i<n-1;i++){
    if(tab[i]>tab[i+1])
    tmp=1;
    else 
    tmp=0;
    }
    if(tmp==1) printf("Tableau non trie\n");
    else printf("Tableau trie!\n");
    return 0;
}
