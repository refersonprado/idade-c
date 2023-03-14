//adcionando uma biblioteca
#include<stdio.h> //print(), scanf()
// #include<math.h> //pow(), sqrt()
// #include<conio.h> //getchar(), getche()
// #include<string.h> //strlen(), strcpy()
// #include<stdlib.h> //sytem()

int main(){ //inicio do programa
    //declaração das variáveis, que são dados.
    int anoNasc, anoAtual; //variaveis de entrada
    //variaveis de processamento/intermediárias
    int idade;//variaveis de saída

    printf("Digite seu ano de nascimento! ");
    scanf("%d",&anoNasc); 
    //%d significa que está escaneando um número inteiro
    printf("Digite o ano atual!");
    scanf("%d",&anoAtual);
    
    idade = anoAtual - anoNasc;
    printf("A idade é: %d anos", idade);
} //fim do programa