
# 📚 INF231 – Structures de Données II (Groupe TP) .

This repository contains 9 C programs developed as part of the course **INF231_EC2: Structure de Données II**.  
Each program corresponds to one exercise on arrays, matrices, and vectors, with complexity analysis.

---

## 📝 Exercises & Programs

1. **Somme de matrices** → `somme_matrices.c`  
   - Computes the sum of two matrices.  
   - Complexity: O(n·m).  

2. **Produit de matrices** → `multi_matrice.c`  
   - Computes the product of two matrices.  
   - Complexity: O(n·m·p).  

3. **Recherche séquentielle** → `rechercher_sequential.c`  
   - Finds an element in an array using sequential search.  
   - Complexity: O(n).  

4. **Produit a × b (using only +1)** → `produit_ab.c`  
   - Computes multiplication of two integers using repeated addition.  
   - Complexity: O(b).  

5. **Tester si un tableau est trié** → `test_trie.c`  
   - Verifies if an array is sorted (ascending).  
   - Complexity: O(n).  

6. **Médiane d’un tableau** → `mediane.c`  
   - Finds the median of an array after sorting.  
   - Complexity: O(n²) with bubble sort.  

7. **Inverser un tableau** → `inverse_tableau.c`  
   - Reverses the order of elements in an array.  
   - Complexity: O(n).  

8. **Produit vectoriel** → `produit_vectoriel.c`  
   - Computes the cross product of two 3D vectors.  
   - Complexity: O(1).  

9. **Produit vecteur × matrice** → `vecteur_xmatrice.c`  
   - Computes the multiplication of a vector by a matrix.  
   - Complexity: O(n·m).  

---

## ⚙️ Compilation & Execution

Each program is independent. Compile with `gcc`:

```bash
gcc <program.c> -o <program>
./<program>
