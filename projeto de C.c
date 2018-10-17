#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void menu();
void con();
void comparar();
void copia();
void tamanho();

void menu();
int main() {
    menu();
    return 0;
}
void menu() {
	int n = 1;
    while(n!=0) {
        printf("\nDigite de 1 a 4, 0 para sair: ");
        scanf("%d", &n);
        switch(n) {
            case 0:
                return;
            case 1:
                printf("concatenar palavras");
                con();
                break;
            case 2:
                printf("comparar palavras\n");
                comparar();
                break;
            case 3:
                printf("copiar palavra\n");
                copia();
                break;
            case 4:
                printf("tamanho\n");
                tamanho();
                break;
            default:
                printf("Opcao invalida.\n");
        }
        printf("\nNumero digitado: %d \n", n);
    }
}


void con()
{

  char palavra[45];
  char palavra2[45];
  char palavra3[45];
  char palavra4[45];

  printf("\ndigite qualquer palavra\n");
  scanf(" %[^\n]c", palavra);

  printf("digite a segunda palavra\n");
  scanf(" %[^\n]c", palavra2);

  printf(strcat(palavra, palavra2));

  printf("\ndigite a terceira palavra\n");
  scanf(" %[^\n]c", palavra3);

  printf("digite a quarta palavra\n");
  scanf(" %[^\n]c", palavra4);

  printf(strcat(palavra3,palavra4));
}

void comparar(){
  char palavra[35]; 
	char palavra2[35];
	
	printf("Digite uma palavra \n");
	scanf(" %[^\n]c", palavra);
	
	printf("Digite outra palavra \n");
	scanf(" %[^\n]c", palavra2);

if (strcmp(palavra, palavra2) == 0) 
	{
    printf("\nSao iguais!\n");
		printf("%s e %s",palavra, palavra2);
	}
	else if (strcmp(palavra, palavra2) < 0)
	{
		printf("\nSao diferentes: %s eh menor que %s\n", palavra, palavra2);
		printf("%s e %s",palavra, palavra2);
	}
	else if (strcmp(palavra, palavra2) > 0)
	{
		printf("\nSao diferentes: %s eh maior que %s\n", palavra, palavra2);
		printf("%s e %s",palavra, palavra2);
	}
}
void copia(){
char palavra[30];
  char palavra2[30];

  printf("digite uma palavra qualquer");
  scanf(" %[^\n]c",palavra);

  strcpy(palavra2,palavra);

  printf(palavra2); 
}

void tamanho()
{
  char palavra[80];
  int len;

  printf("Digite uma palavra \n");
	scanf(" %[^\t\n]c", palavra);
	
	system("cls");

   	len = strlen(palavra);
   	printf("\nTamanho da string |%s| : |%d|\n", palavra, len);
}