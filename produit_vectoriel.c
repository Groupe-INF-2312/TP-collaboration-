#include<stdio.h>

void saisirvecteur(int n,int v[n]){
    for(int i=0;i<n;i++){
      printf("V[%d]=",i);
      scanf("%d",&v[i]);
    }
}
void affichervecteur(int n, int v[n]){
    printf("\nvecteur V=[");
    for(int i=0;i<n;i++){
    printf("%d ",v[i]);
    }
    printf("]\n");

}

//complexite en temps:9
//complexite en memoire:2n+2
int main(){
    int n,i;//2
    printf("Entre la dimension des vecteue(s):");
    scanf("%d",&n);
    int v[n],u[n];//2n
    printf("Saisir le vecteur V\n");
    saisirvecteur(n,v);
    printf("Saisir le vecteur U\n");
    saisirvecteur(n,u);
    if(n==3){
        affichervecteur(n,v);
        affichervecteur(n,u);
        //r[0]=v[1]*u[2]-v[2]*u[1];//3 oper
        //r[1]=v[2]*u[0]-v[0]*u[2]// 3 opera
        //r[2]=v[0]*u[1]-v[1]*u[0];//3 opera
        printf("V x U=[ %d ,%d ,%d]\n",v[1]*u[2]-v[2]*u[1],v[2]*u[0]-v[0]*u[2],v[0]*u[1]-v[1]*u[0]);
    }else{
        printf("Le produit vectoriel est defini seulement en 3D\n");
    }
    return 0;
}