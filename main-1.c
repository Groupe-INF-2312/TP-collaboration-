#include <stdio.h>

// ===== 1. Somme de matrices =====
void sommeMatrices() {
    int n, m;
    printf("Dimensions n m : ");
    scanf("%d %d", &n, &m);

    int A[n][m], B[n][m], C[n][m];
    printf("Matrice A :\n");
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) scanf("%d",&A[i][j]);
    printf("Matrice B :\n");
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) scanf("%d",&B[i][j]);

    for(int i=0;i<n;i++) for(int j=0;j<m;j++) C[i][j] = A[i][j] + B[i][j];

    printf("Somme :\n");
    for(int i=0;i<n;i++){ for(int j=0;j<m;j++) printf("%d ",C[i][j]); printf("\n"); }
}

// ===== 2. Produit de matrices =====
void produitMatrices() {
    int n,p,m;
    printf("Entrez n p m : ");
    scanf("%d %d %d", &n, &p, &m);

    int A[n][p], B[p][m], C[n][m];
    printf("Matrice A :\n");
    for(int i=0;i<n;i++) for(int j=0;j<p;j++) scanf("%d",&A[i][j]);
    printf("Matrice B :\n");
    for(int i=0;i<p;i++) for(int j=0;j<m;j++) scanf("%d",&B[i][j]);

    for(int i=0;i<n;i++) for(int j=0;j<m;j++){
        C[i][j]=0;
        for(int k=0;k<p;k++) C[i][j]+=A[i][k]*B[k][j];
    }

    printf("Produit :\n");
    for(int i=0;i<n;i++){ for(int j=0;j<m;j++) printf("%d ",C[i][j]); printf("\n"); }
}

// ===== 3. Recherche séquentielle =====
void rechercheSequentielle() {
    int n,x,trouve=0;
    printf("Taille tableau : ");
    scanf("%d",&n);
    int T[n];
    for(int i=0;i<n;i++) scanf("%d",&T[i]);
    printf("Element a rechercher : ");
    scanf("%d",&x);
    for(int i=0;i<n;i++) if(T[i]==x){ printf("Trouve a la position %d\n",i); trouve=1; break; }
    if(!trouve) printf("Non trouve.\n");
}

// ===== 4. Multiplication par +1 =====
void multiplicationPlusUn() {
    int a,b,produit=0;
    printf("Entrez a et b : ");
    scanf("%d %d",&a,&b);
    for(int i=0;i<b;i++){
        int sommeTemp=0;
        for(int j=0;j<a;j++) sommeTemp=sommeTemp+1;
        produit=produit+sommeTemp;
    }
    printf("Produit = %d\n",produit);
}

// ===== 5. Tester si tableau est trié =====
void testerTrie() {
    int n,trie=1;
    printf("Taille : ");
    scanf("%d",&n);
    int T[n];
    for(int i=0;i<n;i++) scanf("%d",&T[i]);
    for(int i=0;i<n-1;i++) if(T[i]>T[i+1]){ trie=0; break; }
    if(trie) printf("Trie\n"); else printf("Non trie\n");
}

// ===== 6. Médian =====
void medianTableau() {
    int n;
    printf("Taille : ");
    scanf("%d",&n);
    int T[n];
    for(int i=0;i<n;i++) scanf("%d",&T[i]);

    // Tri à bulles
    for(int i=0;i<n-1;i++) for(int j=0;j<n-i-1;j++)
        if(T[j]>T[j+1]){ int tmp=T[j];T[j]=T[j+1];T[j+1]=tmp; }

    if(n%2==1) printf("Median = %d\n",T[n/2]);
    else printf("Median = %.2f\n",(T[n/2-1]+T[n/2])/2.0);
}

// ===== 7. Inverser tableau =====
void inverserTableau() {
    int n;
    printf("Taille : ");
    scanf("%d",&n);
    int T[n];
    for(int i=0;i<n;i++) scanf("%d",&T[i]);
    for(int i=0;i<n/2;i++){ int tmp=T[i]; T[i]=T[n-1-i]; T[n-1-i]=tmp; }
    printf("Tableau inverse :\n");
    for(int i=0;i<n;i++) printf("%d ",T[i]); printf("\n");
}

// ===== 8. Produit vectoriel =====
void produitVectoriel() {
    int u[3],v[3],w[3];
    printf("Vecteur u : "); for(int i=0;i<3;i++) scanf("%d",&u[i]);
    printf("Vecteur v : "); for(int i=0;i<3;i++) scanf("%d",&v[i]);
    w[0]=u[1]*v[2]-u[2]*v[1];
    w[1]=u[2]*v[0]-u[0]*v[2];
    w[2]=u[0]*v[1]-u[1]*v[0];
    printf("u × v = (%d,%d,%d)\n",w[0],w[1],w[2]);
}

// ===== 9. Produit vecteur × matrice =====
void produitVecteurMatrice() {
    int n,m;
    printf("n (taille vecteur) et m (colonnes matrice) : ");
    scanf("%d %d",&n,&m);
    int V[n],M[n][m],R[m];
    printf("Vecteur V :\n"); for(int i=0;i<n;i++) scanf("%d",&V[i]);
    printf("Matrice M :\n");
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) scanf("%d",&M[i][j]);
    for(int j=0;j<m;j++){ R[j]=0; for(int i=0;i<n;i++) R[j]+=V[i]*M[i][j]; }
    printf("Resultat :\n"); for(int j=0;j<m;j++) printf("%d ",R[j]); printf("\n");
}

// ===== Menu principal =====
int main() {
    int choix;
    do {
        printf("\n=== MENU ===\n");
        printf("1. Somme de matrices\n");
        printf("2. Produit de matrices\n");
        printf("3. Recherche sequentielle\n");
        printf("4. Multiplication par +1\n");
        printf("5. Tester si tableau est trie\n");
        printf("6. Median d'un tableau\n");
        printf("7. Inverser un tableau\n");
        printf("8. Produit vectoriel\n");
        printf("9. Produit vecteur × matrice\n");
        printf("0. Quitter\n");
        printf("Choix : ");
        scanf("%d",&choix);

        switch(choix) {
            case 1: sommeMatrices(); break;
            case 2: produitMatrices(); break;
            case 3: rechercheSequentielle(); break;
            case 4: multiplicationPlusUn(); break;
            case 5: testerTrie(); break;
            case 6: medianTableau(); break;
            case 7: inverserTableau(); break;
            case 8: produitVectoriel(); break;
            case 9: produitVecteurMatrice(); break;
            case 0: printf("Au revoir !\n"); break;
            default: printf("Choix invalide.\n");
        }
    } while(choix != 0);

    return 0;
}
