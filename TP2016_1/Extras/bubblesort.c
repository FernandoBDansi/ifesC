#include <stdio.h>
#include <stdlib.h>
// Bubble Sort
void ordenaVetor(float v[], int n ) {
    int i,j,z;
    float tmp;
    for (i=0; i < n-1; i++)
        for (j=0; j < n-i-1;j++)
            if (v[j] > v[j+1]){
                tmp = v[j];
                v[j] = v[j+1];
                v[j+1] = tmp;
            }
}
int main() {
    float Vetor[60];
    int n, i, j;
    printf("No. elementos de v: ");
    scanf("%d",&n);
    printf("Digite elementos de v:");
    for (i=0; i < n; i++)
        scanf("%f",&Vetor[i]);
    ordenaVetor(Vetor, n);
    printf("Vetor Ordenado\n");
    for (i=0; i < n; i++)
        printf("%.1f\n",Vetor[i]);
    system("sleep 10");
}
