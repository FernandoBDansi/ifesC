/*
    Lista 01 - Tecnicas de Programacao
    Nome: Rafael S. Guimaraes
    E-Mail: rafaelg@ifes.edu.br

    IFES - Campus Cachoeiro de Itapemirim
*/
#include <stdio.h>
#include <stdlib.h>

void triangulo(int x, int y, int z){
    if(x < (y+z) && y < (z+x) && z < (x+y)){
        // Verificar o tipo do triangulo
        if(x==y && y==z){
            printf("Triangulo Equilatero\n");
        }else if(x==y||y==z||x==z){
            printf("Triangulo Isosceles\n");
        }else if(x!=y && y!=z && x!=z){
            printf("Triangulo Escaleno\n");
        }
    }else{
        printf("Nao eh um triangulo!\n");
    }
}
int main(){
    // Declaracao das variaveis
    int x,y,z;

    printf("Informe o lado X: ");
    scanf("%d",&x);
    printf("Informe o lado Y: ");
    scanf("%d",&y);
    printf("Informe o lado Z: ");
    scanf("%d",&z);

    triangulo(x,y,z);
}
