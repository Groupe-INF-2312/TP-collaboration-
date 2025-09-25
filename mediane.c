#include<stdio.h>
void trie(int n, int tab[n]){
    int tmp;
      for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
           if (tab[j]>tab[j+1]){
               tmp=tab[j];
               tab[j]=tab[j+1];
               tab[j+1]=tmp;
           }
        }
    }
}
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
//complexite en temps:n^2
//memoir:n+2
int main(){
    int n,i;//2
    printf("Enter la dimension du tableau:");
    scanf("%d",&n);
    printf("Entre les elements du tableau\n");
    int tab[n];
    saisirtableau(n,tab);
    trie(n,tab);
  
    printf("Le mediane de ");
    affichertab(n,tab);
    if(n%2==0)
    printf("est: %d\n ",(tab[(n/2)+1]+ tab[(n/2)-1])/2); 
    else 
    printf("est: %d\n ",tab[n/2]); 
    return 0;
}
