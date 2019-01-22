/*hacer un programa que borre la pantalla al presionar el numero 1*/
#include<stdio.h>
#include<stdlib.h>

int main(){
char tecla;

printf("Programa de borrado de pantalla, unicamente pretende enseñar un ejemplo de como borra la pantalla, y la neta me dio flojera descartgar un lorem ipsuim dsolo");
printf("\n_________________________________________________________________\n");
printf("\n_________________________________________________________________\n");
printf("\n_________________________________________________________________\n");
printf("\n_________________________________________________________________\n");
printf("\n_________________________________________________________________\n");
printf("\n_________________________________________________________________\n");
printf("\n_________________________________________________________________\n");
printf("Digite el numero 1 para borrar");
scanf("%c",&tecla);
if(tecla=='1'){
    system("cls");
    printf("ha funcionado esta onda");
}else{

printf("No ha funcionado");

}
return 0;
}
