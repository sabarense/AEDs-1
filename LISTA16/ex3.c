#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/*
Implemente e teste uma função recursiva para calcular o k-ésimo termo Fibonacci. 
*/

//prototipos
int leiaNumero();
int fibonacci(int numero);


 int main(){
    int leNumero = leiaNumero();
    int fibonacciResultado = fibonacci(leNumero);
    printf("O %i termo fibonnaci e = %i",leNumero,fibonacciResultado);
 }

 int leiaNumero(){
    int numero;
    printf("Digite o termo:\n");
    scanf("%i",&numero);
    return numero;
 }

 int fibonacci(int numero){
    int resultado;
    if(numero <= 1){
        resultado = numero;
    }else{
        resultado = (fibonacci(numero-1) + fibonacci(numero-2));
    }
    return resultado;
 }

