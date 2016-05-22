/*

    Autor: Carolina Fernandes dos Reis
    RA: 149132
    Descrição: Sistema destinado a calcular o Índice de Massa Corporal do usuário e estabelecer em qual faixa de intervalo seu IMC se encontra.
    Mudanças Realizadas:
                         - Criação do "botão" Sair;
                         - Melhoramento da Interface;
                         - Melhoramento Transição de Telas.
    Versão: 0.2
    Data: 23/04/2016


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

        printf("\n\t 1 - Efetuar Calculo e 2 - Digitar Peso/Altura novamente\n");
        printf("\t\t\t\t3 - Sair\n\n\t\t\t\t");    // Botão
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
                printf("\n\t\t\t   Muito abaixo do peso");
            }

            if(imc >= 17 && imc <= 18.49){
                printf("\n\t\t\t\t%0.2f",imc);
                printf("\n\t\t\t   Abaixo do peso");
            }

            if(imc >= 18.50 && imc <= 24.99){
                printf("\n\t\t\t\t%0.2f",imc);
                printf("\n\t\t\t   Peso normal");
            }

            if(imc >= 25.00 && imc <= 29.99){
                printf("\n\t\t\t\t%0.2f",imc);
                printf("\n\t\t\t   Acima do peso");
            }

            if(imc >= 30.00 && imc <= 34.99){
                printf("\n\t\t\t\t%0.2f",imc);
                printf("\n\t\t\t   Obesidade I");
            }

            if(imc >= 35.00 && imc <= 39.99){
                printf("\n\t\t\t\t%0.2f",imc);
                printf("\n\t\t\t   Obesidade II (Severa)");
            }

            if(imc >= 40.00){
                printf("\n\t\t\t\t%0.2f",imc);
                printf("\n\t\t\t   Obesidade III (Morbida)");
            }

            // Condição para executar novamente
            printf("\n\n\tDeseja efetuar novo calculo? (1)SIM ou Qualquer outro numero para NAO \n\n\t\t\t\t");
            scanf("%d",&opc);
            system("cls");
        }
        if(selecao == 2){
             opc = 1;
        }

        if(selecao > 2){
            printf("\n\t========================================================  ");
            printf("\n\t||                 FINALIZANDO O SISTEMA ...          ||	");
            printf("\n\t======================================================== ");
            printf("\n\t||                                                    ||");
            printf("\n\t||                                                    ||");
            printf("\n\t||                         FIM                        ||");
            printf("\n\t||                                                    ||");
            printf("\n\t||                                                    ||");
            printf("\n\t========================================================\n\t  ");
            return 0;
        }
    }while(opc == 1);
    return 0;
}
