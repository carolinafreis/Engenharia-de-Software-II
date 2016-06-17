/*

    Autor: Carolina Fernandes dos Reis
    RA: 149132
    Descri��o: Sistema destinado a calcular o �ndice de Massa Corporal do usu�rio e estabelecer em qual faixa de intervalo seu IMC se encontra.
    Mudan�as Realizadas:
                         - Restri��es de intervalos de n�meros
                         - Melhoramento da Interface;
                         - Otimiza��o do C�digo;
                         - Melhoramento Transi��o de Telas (Utiliza��o de Fun��es)
    Vers�o: 1.2
    Data: 21/05/2016


*/

// Bibliotecas utilizadas no C�digo
#include<stdio.h>
#include<stdlib.h> // Biblioteca para apagar tela no windows - system("cls");

// FUN��ES
void interface_home(){
    printf("\n\t========================================================  ");
    printf("\n\t||       Bem-Vindo ao Sistema Calculo de IMC          ||	");
    printf("\n\t======================================================== ");
    printf("\n\t||                                                    ||");
    printf("\n\t||           Calculo do IMC para pessoas              ||");
    printf("\n\t||              acima de 15 anos                      ||");
    printf("\n\t||                  (homens e mulheres)               ||");
    printf("\n\t||                                                    ||");
    printf("\n\t========================================================\n\t  ");
}

void interf_resultado(){
    printf("\n\t========================================================  ");
    printf("\n\t||       Bem-Vindo ao Sistema Calculo de IMC          ||	");
    printf("\n\t======================================================== ");
    printf("\n\t||                                                    ||");
    printf("\n\t||                                                    ||");
    printf("\n\t||             Resultado do Calculo do IMC            ||");
    printf("\n\t||                                                    ||");
    printf("\n\t||                                                    ||");
    printf("\n\t========================================================\n\t  ");
}

void erro(){
    printf("\n\t========================================================  ");
    printf("\n\t||       Bem-Vindo ao Sistema Calculo de IMC          ||	");
    printf("\n\t======================================================== ");
    printf("\n\t||                                                    ||");
    printf("\n\t||        Entre com um dos numeros: 1 ou 2            ||");
    printf("\n\t||                                                    ||");
    printf("\n\t||                                                    ||");
    printf("\n\t========================================================\n\t  ");
}

void finalizando(){
    printf("\n\t========================================================  ");
    printf("\n\t||                 FINALIZANDO O SISTEMA ...          ||	");
    printf("\n\t======================================================== ");
    printf("\n\t||                                                    ||");
    printf("\n\t||                                                    ||");
    printf("\n\t||                         FIM                        ||");
    printf("\n\t||                                                    ||");
    printf("\n\t||                                                    ||");
    printf("\n\t========================================================\n\t  ");
}
// FUN��O PRINCIPAL

int main(){

// �rea de Designa��o de vari�veis
    float peso = 0.0, altura = 0.0, imc = 0.0;
    int opc = 0, selecao = 0;

    do{
        // Corpo

        interface_home();
        printf("\n\t\t\t\tPeso : ");
        scanf("%f",&peso);                                      // Entrada de peso
        printf("\n\t\t\t\tAltura : ");
        scanf("%f",&altura);                                   // Entrada de dado altura

        printf("\n\t 1 - Efetuar Calculo e 2 - Digitar Peso/Altura novamente\n");
        printf("\t\t\t\t3 - Sair\n\n\t\t\t\t");                 // Bot�o
        scanf("%d",&selecao);
        system("cls");

        if(((peso == 0) && (altura == 0)) || (altura <= 0) || (peso <= 0)){
            printf("\n\t\tValores de peso ou/e altura INVALIDOS!\n");
        }else{

            if(selecao == 1){

                imc = (peso)/(altura*altura);                           // C�lculo IMC

             // Condi��es


                if(imc < 17){
                    interf_resultado();
                    printf("\n\t\t\t\t%0.2f",imc);
                    printf("\n\t\t\t   Muito abaixo do peso\n");
                }

                if(imc >= 17 && imc <= 18.49){
                    interf_resultado();
                    printf("\n\t\t\t\t%0.2f",imc);
                    printf("\n\t\t\t   Abaixo do peso\n");
                }

                if(imc >= 18.50 && imc <= 24.99){
                    interf_resultado();
                    printf("\n\t\t\t\t%0.2f",imc);
                    printf("\n\t\t\t   Peso normal\n");
                }

                if(imc >= 25.00 && imc <= 29.99){
                    interf_resultado();
                    printf("\n\t\t\t\t%0.2f",imc);
                    printf("\n\t\t\t   Acima do peso\n");
                }

                if(imc >= 30.00 && imc <= 34.99){
                    interf_resultado();
                    printf("\n\t\t\t\t%0.2f",imc);
                    printf("\n\t\t\t   Obesidade I\n");
                }

                if(imc >= 35.00 && imc <= 39.99){
                    interf_resultado();
                    printf("\n\t\t\t\t%0.2f",imc);
                    printf("\n\t\t\t   Obesidade II (Severa)\n");
                }

                if(imc >= 40.00){
                    interf_resultado();
                    printf("\n\t\t\t\t%0.2f",imc);
                    printf("\n\t\t\t   Obesidade III (Morbida)\n");
                }
            }

            // CONDI��O PARA ALTERAR ENTRADA
            if(selecao == 2){
                opc = 1;
            }

            // CONDI��O PARA FINALIZAR O SISTEMA
            if(selecao == 3){
                finalizando();
                system("pause");
                system("cls");
                return 0;
            }

            // CONDI��O PARA ENTRADA INV�LIDA
            if(selecao > 3 || selecao <= 0){
                erro();
                system("pause");
                system("cls");
            }
        }
        // CONDI��O PARA EXECUTAR NOVAMENTE
        printf("\n");
        printf("\n\t\tDeseja efetuar nova conversao?");
        printf("\n\t\t1 SIM ou Qualquer outro numero para NAO \n\t\t");   // Condi��o para executar novamente
        scanf("%d",&opc);
        system("cls");
        if(opc != 1){
            finalizando();
            system("pause");
            system("cls");
        }


    }while(opc == 1);

}
