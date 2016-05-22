/*

    Autor: Carolina Fernandes dos Reis
    RA: 149132
    Descrição: Sistema destinado a calcular o Índice de Massa Corporal do usuário e estabelecer em qual faixa de intervalo seu IMC se encontra.
    Versão: 0.1
    Data: 09/04/2016


*/

#include<stdio.h>
#include<stdlib.h> // Biblioteca para apagar tela no windows - system("cls");

int main(){

    // Área de Designação de variáveis
        float peso = 0.0, altura = 0.0, imc = 0.0;
        int opc = 0, selecao = 0;

    // Corpo do Código
    do{                 // Layout
        printf("\n\t========================================================  ");
        printf("\n\t||          Bem-Vindo ao Sistema Calculo IMC          ||	");
        printf("\n\t======================================================== ");
        printf("\n\t||                                                    ||");
        printf("\n\t||           Calculo do IMC para pessoas              ||");
        printf("\n\t||              acima de 15 anos                      ||");
        printf("\n\t||                  (homens e mulheres)               ||");
        printf("\n\t||                                                    ||");
        printf("\n\t========================================================\n\t  ");

        printf("\n\t\t\t\tPeso : ");
        scanf("%f",&peso);                                      // Entrada de peso
        printf("\n\t\t\t\tAltura : ");
        scanf("%f",&altura);                                   // Entrada de dado altura

        printf("\n\t 1 - Efetuar Calculo e 2 - Digitar Peso/Altura novamente\n\n\t\t\t\t");    // Botão
        scanf("%d",&selecao);

        system("cls");                                          // Limpa Tela

        if(selecao == 1){

            imc = (peso)/(altura*altura);                           // Cálculo IMC

            printf("\n\t========================================================  ");
            printf("\n\t||          Bem-Vindo ao Sistema Calculo IMC          ||	");
            printf("\n\t======================================================== ");
            printf("\n\t||                                                    ||");
            printf("\n\t||                                                    ||");
            printf("\n\t||             Resultado do Calculo do IMC            ||");
            printf("\n\t||                                                    ||");
            printf("\n\t||                                                    ||");
            printf("\n\t========================================================\n\t  ");

            // Condições

            if(imc < 17){
                printf("\n\t\t\t\t%0.2f",imc);
                printf("\n\t\t\t\tMuito abaixo do peso");
            }

            if(imc >= 17 && imc <= 18.49){
                printf("\n\t\t\t\t%0.2f",imc);
                printf("\n\t\t\t\tAbaixo do peso");
            }

            if(imc >= 18.50 && imc <= 24.99){
                printf("\n\t\t\t\t%0.2f",imc);
                printf("\n\t\t\t\tPeso normal");
            }

            if(imc >= 25.00 && imc <= 29.99){
                printf("\n\t\t\t\t%0.2f",imc);
                printf("\n\t\t\t\tAcima do peso");
            }

            if(imc >= 30.00 && imc <= 34.99){
                printf("\n\t\t\t\t%0.2f",imc);
                printf("\n\t\t\t\tObesidade I");
            }

            if(imc >= 35.00 && imc <= 39.99){
                printf("\n\t\t\t\t%0.2f",imc);
                printf("\n\t\t\t\tObesidade II (severa)");
            }

            if(imc >= 40.00){
                printf("\n\t\t\t\t%0.2f",imc);
                printf("\n\t\t\t\tObesidade III (morbida)");
            }
        }

        printf("\n\n\tDeseja efetuar novo calculo? (1)SIM ou Qualquer outro numero para NAO \n\n\t\t\t\t");   // Condição para executar novamente
        scanf("%d",&opc);
        system("cls");
    }while(opc == 1);
    return 0;
}
