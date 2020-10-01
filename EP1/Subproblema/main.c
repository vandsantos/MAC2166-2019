#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int c; //quantidade de cores diferentes
    int k; // numero de casas do numero
    int senha;
    int palpite;
    int v; // copia de palpite
    int w;// copia da senha
    int a; // descascador senha
    int b; // descascador palpite
    int pinos=0; //pinos petros
    int Npalpites; // contador de palpites

    printf("\nDigite quantos numeros tera sua senha: \t ");
    scanf("%d", &k);
    printf("Digite quantas cores tera sua senha:\t");
    scanf("%d", &c);
    printf("Digite quantos palpites tera a partida:\t ");
    scanf("%d", &Npalpites);
    printf("\n Digite uma senha de \"%d\" digitos de (1-%d):\t", k, c);
    scanf("%d", &senha);

    while(Npalpites !=0){
    printf("Digite um palpite de %d digitos  de (1-%d):\t", k, c);
    scanf("%d", &palpite);
    v=palpite;
    w=senha;
    pinos=0;
    do{
        a=v%10;
        b=w%10;
        if(a==b){
            pinos= pinos+1;
            v=v/10;
            w=w/10;}
        else{
            v=v/10;
            w=w/10;}
            //printf("\n a= %d \t b=%d \t v=%d \t w=%d \n", a, b, v, w);
        }while((a>0)||(b>0));
    printf(" \n a sua senha eh: %d \n", senha);
    printf(" o seu palpite eh: %d \n", palpite);
    printf(" pinos pretos: %d \n\n ", pinos-1);
    //printf("\n a= %d \t b=%d \t v=%d \t w=%d \n", a, b, v, w);
    Npalpites= Npalpites-1;}
return(0);
}
