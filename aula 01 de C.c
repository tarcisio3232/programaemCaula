#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void menu();
int main() {
    menu();
    return 0;
}
void menu() {
int n = 1;
    while(n!=0) {
        printf("Digite de 1 a 8, 0 para sair: ");
        scanf("%d", &n);
        switch(n) {
            case 0:
            printf("fim do programa");
                return;
            case 1:
                fatorial();
                break;
            case 2:
                primo();
                break;
            case 3:
                elevado();
                break;
            case 4:
                raiz();
                break;
            case 5:
                bissexto();
                break;
            case 6:
                nota();
                break;
            case 7:
                media();
                break;
            case 8:
                matricula();
                break;
            default:
                printf("Opcao invalida.\n");
        }
        printf("\nNumero digitado: %d \n", n);
    }
}
void fatorial(){

    int i,far;
    printf("digite um Numero");
    scanf("%d",&i);
    for(far = 1;i>1;i = i - 1 )
        far = far * i;
    printf("o fatorial do numero digitado é:\n %d",far);

   
}
void primo(){
  
  int i, x; 
  int div = 0;
  
  do {
    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &x);
  } while (x <= 0);
  
  for (i = 1; i <= x; i++) {
    if (x % i == 0) { 
     div++;
    }
  }
    
  if (div == 2)
    printf("O número %d é primo!", x);
  else
    printf("O número %d não é primo!", x);

}

void elevado (){
    
int a;
    float b;
        printf("digite um numero inteiro\n");
            scanf("%d" ,&a);
        printf("agora digite um numero quebrado ex:2.5\n");
            scanf("%f" ,&b);
        printf("A elevado B: %.3f\n",pow(a,b));
        printf("A elevado B: %.3E\n",pow(a,b));

    
}
void raiz(){
    int b;
    float a,elev;
        printf("digite um numero inteiro\n");
            scanf("%d" ,&b);
        printf("agora digite um numero quebrado ex:2.5\n");
            scanf("%f" ,&a);
        printf("A elevado B: %.3f\n",pow(a,b));
        elev = pow(a,b);
        printf("\nRaiz quadradada B: %.2E\n",sqrt(elev));
    
}

void bissexto(){
int ano;
    printf("digite o ano:\n");
    scanf("%d",&ano);
  if (ano % 4 == 0)
   printf("\nAno bissexto.\n");
  else 
    printf("\nAno nao bissexto.\n");    
    
    
}

void nota(){
    float a,b;
    printf("digite a primeira nota:\n");
    scanf("%f",&a);
  if (a  >= 0.0 && a <= 10.00)
   printf("\nnota valida.\n");
  else 
    printf("\nnota não valida.\n");
    printf("digite a segunda nota nota:\n");
    scanf("%f",&b);
  if (b  >= 0.0 && b <= 10.0)
   printf("\nnota valida.\n");
  else 
    printf("\nnota não valida.\n");

}

void media(){
    float a,b,c,nota;
    printf("digite a primeira nota:\n");
    scanf("%f",&a);
  if (a  >= 0.0 && a <= 10.00)
   printf("\nnota valida.\n");
  else 
    printf("\nnota não valida.\n");
    printf("digite a segunda nota:\n");
    scanf("%f",&b);
  if (b  >= 0.0 && b <= 10.0)
   printf("\nnota valida.\n");
  else 
    printf("\nnota não valida.\n");
    printf("digite a terceira nota:\n");
     scanf("%f",&c);
    if (c  >= 0.0 && c <= 10.00)
   printf("\nnota valida.\n");
   else 
    printf("\nnota não valida.\n");
    
    nota = (a + b + c) /3;
    printf("a nota é:%3f",nota);
    
}
void matricula(){
    
    int m,x;
     x = 1810022571;
    printf("criador deste pequeno programa:Tarcisio Henrique Gonçalves de Araújo\n");
    printf("verificação de credencial digite o final de sua matricula 1810022***\n");
    scanf("%d",&m);
    if (m == 571)
        printf("Credencial valida. Bem vindo meu criador");
    else
        printf("Credencial não valida. erro invasor detectado. ligando para policia.");
    printf("\nsua matricula em hexadecimal é: %X",x);
    printf("\nsua matricula em octal é: %o",x);
}