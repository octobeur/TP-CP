#include <stdio.h>
#include <stdlib.h>

void somme_diag1(int mat[N][N])
{
    int i,s = 0;

    for(i = 0; i < N; i++){
                s += mat[i][i];
    }
}

void somme_diag2(int mat[N][N]);
{
    int i,s = 0;
     for(i = 0; i < N; i++){
                s += mat[i][N-1-i];
    }
}

void somme_ligne()
{
int i,j,somme3 = 0;

 for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
                somme3 += mat[i][j];
        }
        printf("La somme de ligne %i est de %i.", i + 1, somme3);
        somme = 0;
    }
}

void somme_colonne()
{
    int i,j,somme4 = 0;

    for(j = 0; j < N; j++){
        for(i = 0; i < N; i++){
                somme4 += mat[i][j];
        }
        printf("La somme de colonne %i est de %i.", j + 1, somme4);
        somme = 0;
    }
}


int main()
{
    int i, j, entier, N, somme;
    int mat[N][N];

    printf("Donnez la valeur de N: ");
    scanf("%d", &N);

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
              mat[i][j] = 0;
        }
    }

     for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
               printf("Donnez un entier: ");
               scanf("%d", &entier);
        }
    }



}
