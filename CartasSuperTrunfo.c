#include <stdio.h>

int main (){
 //variavel para carta 1
char estado1[50];
char codico1[4];
char nome_cidade1[50];
int populacao1;
float area1;
float pib1;
int pontos_turisticos1;
float densidade_populacional1;
float pib_per_capita1;



//variaveis para a carta 2
char estado2[50];
char codico2[4];
char nome_cidade2[50];
int populacao2;
float area2;
float pib2;
int pontos_turisticos2;
float densidade_populacional2;
float pib_per_capita2;



//entrada de dados da carta 1
printf(" carta 1\n");
printf("digite o estado da cidade 1:\n");
scanf ("%s", estado1);
printf("digite o codico da cidade 1:\n");
scanf ("%s", codico1);
printf("digite o nome da cidade 1: \n");
scanf ("%s" , nome_cidade1);
printf("digite a populacao da cidade 1:\n");
scanf ("%d", &populacao1);
printf("digite a area da cidade 1:\n");
scanf ("%f" , &area1);
printf("digite o pib da cidade 1:\n");
scanf ("%f", &pib1);
printf("digite os pontos turisticos da cidade 1:\n");
scanf ("%d" , &pontos_turisticos1);

//calculo da densidade populacional e pib per capital da carta 1
densidade_populacional1 = populacao1 / area1;
pib_per_capita1 = pib1 / populacao1;
  
      



//entrada de dados da carta 2 
printf("carta 2\n");
printf("digite o estado da cidade 2:\n");
scanf ("%s", estado2);
printf("digite o codico da cidade 2:\n");
scanf ("%s", codico2);
printf("digite o nome da cidade 2:\n");
scanf ("%s" , nome_cidade2);
printf("digite a populacao da cidade 2:\n");
scanf ("%d", &populacao2);
printf("digite a area da cidade 2:\n");
scanf ("%f" , &area2);
printf("digite o pib da cidade 2:\n");
scanf("%f", &pib2);
printf("digite os pontos turisticos da cidade 2:\n");
scanf ("%d" , &pontos_turisticos2);



//calculo da densidade populacional e pib per capital da carta 2
densidade_populacional2 = populacao2 / area2;
pib_per_capita2 = pib2 / populacao2;                     





//exibiçao de dados da carta 1
printf("### exibindo dados da carta 1###\n");
printf("estado da cidade 1: %s\n", estado1);
printf("codico da cidade 1: %s\n", codico1);
printf("nome da cidade 1: %s\n", nome_cidade1);
printf("populacao da cidade 1: %d\n", populacao1);
printf("area da cidade 1: %f\n", area1);
printf("pib da cidade 1 : %f\n", pib1);
printf("pontos turisticos da cidade 1: %d\n", pontos_turisticos1);
printf("densidade pupulacional da cidade 1: %f\n" , densidade_populacional1);
printf("pib per capita da cidade 1: %f\n" , pib_per_capita1);


 
//exibiçao de dados da carta 2 
printf("### exibindo dados da carta 2 ###\n");
printf("estado da cidade 2: %s\n", estado2);
printf("codico da cidade 2: %s\n", codico2);
printf("nome da cidade 2: %s\n", nome_cidade2);
printf("populacao da cidada 2: %d\n", populacao2);
printf("area da cidade 2: %f\n", area2);
printf("pib da cidade 2: %f\n", pib2);
printf("pontos turisticos da cidade 2: %d\n", pontos_turisticos2);
printf("densidade pupulacional da cidade 2: %f\n" , densidade_populacional2);
printf("pib per capita da cidade 2: %f\n", pib_per_capita2);




return 0;


}





