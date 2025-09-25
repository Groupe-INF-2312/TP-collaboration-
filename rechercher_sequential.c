#include<stdio.h>
int main(){
    int n,i,val,tmp;
    printf("Enter la dimension du tableau:");
    scanf("%d",&n);
    printf("Entre les elements du tableau\n");
    int tab[n];
    for(i=0;i<n;i++){
        printf("tab[%d]=",i);
        scanf("%d",&tab[i]);
    }
    printf("Entre la valeur a recherche:");
    scanf("%d",&val);
    for(i=0;i<n;i++){
    if(tab[i]==val){
    printf("Valeur trouve a l'indice %d\n",i);
    tmp=1;
    break;
    }else{ 
    tmp=0;
    }
    }
    if(tmp==0) printf("%d non trouve\n",val);
    return 0;
}
