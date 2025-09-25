#include<stdio.h>

//complexite en temps:a*b
//complexite en memoire:5
int main(){
    int a,b,i,r,j;//5
    r=0;
    printf("Enter a et b(a,b>0)");
    scanf("%d%d",&a,&b);
    /*for(i=0;i<b;i++){
        r +=a;
    }*/
   for(i=0;i<b;i++){
    for(j=0;j<a;j++){
            r+=1;// 1 operation   
    }
   }
    printf("%d * %d = %d\n",a,b,r);
    return 0;
}