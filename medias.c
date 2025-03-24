#include <stdio.h>

float media(float x,float y,float z){

return x*0.3+y*0.3+z*0.4;

}

int main()
{

float n1,n2,n3;
float resultado;

printf("Digite a primeira nota: ");
scanf("%f",&n1);
printf("Digite a segunda nota: ");
scanf("%f",&n2);
printf("Digite a terceira nota: ");
scanf("%f",&n3);

resultado=media(n1,n2,n3);

printf("Média ponderada = %.2f",resultado);

return 0;

}