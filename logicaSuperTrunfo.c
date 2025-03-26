#include <stdio.h>

int main () {
    
   char estado1 , estado2 ;
   char cidade1 [20], cidade2 [20];
   char codigo1 [20] , codigo2 [20];
   int populacao1 , populacao2;
   float areaemkm1 , areaemkm2;
   float PIB1 ,  PIB2;
   int pontoturistico1 , pontoturistico2;
   float dencidadepopulacional1 ,  dencidadepopulacional2;
   float pibpercapital1 , pibpercapital2;
   

   //etrado com os dados carta 1

  printf("carta1 \n"); 
   
   printf("digite letra do estado: \n");
   scanf("%c" , &estado1 );

   printf("digite a cidade: \n");
   scanf("%s" , &cidade1);

   printf("codigo da crata; \n");
   scanf("%s" , &codigo1);

   printf("populacao: \n");
   scanf("%d" , &populacao1);

   printf("area em km: \n");
   scanf("%f" , &areaemkm1);

   printf("PIB: \n");
   scanf("%f" , &PIB1);

   printf("ponto turistico: \n");
   scanf ("%i", &pontoturistico1);

   //calculo da carta 1
   
   dencidadepopulacional1= (float) populacao1 / areaemkm1 ;
   pibpercapital1= (float) PIB1 * (10000000) / populacao1; 

   // dados da carta 2

   printf("carta2 \n"); 

   printf("digite letra do estado: \n");
   scanf(" %c" , &estado2 );

   printf("digite a cidade: \n");
   scanf("%s" , &cidade2);

   printf("codigo da crata; \n");
   scanf("%s" , &codigo2);

   printf("populacao: \n");
   scanf("%d" , &populacao2);

   printf("area em km: \n");
   scanf("%f" , &areaemkm2);

   printf("PIB: \n");
   scanf("%f" , &PIB2);

   printf("ponto turistico: \n");
   scanf ("%i", &pontoturistico2);
   
//cauculos da carta 2

   dencidadepopulacional2= (float) populacao2 / areaemkm2 ;
   pibpercapital2= (float) PIB2 *(10000000) / populacao2; 

   printf("### CARTAS ###\n");

   printf("### carta1 ### \n ");
   printf("estado: %c \n", estado1);
   printf("cidade: %s \n", cidade1);
   printf("codigo: %s \n ", codigo1);
   printf("populacao: %d  \n" , populacao1);
   printf("area em km: %f \n" , areaemkm1);
   printf("PIB: %f \n" , PIB1);
   printf("pontos turisticos: %i \n" , pontoturistico1); 
   printf("A dencidade populacional é: %.2f\n" , dencidadepopulacional1);
   printf("O PIB pre capital é: %.2f\n" , pibpercapital1);

   printf("### carta2 ### \n ");
   printf("estado: %c \n", estado2);
   printf("cidade: %s \n", cidade2);
   printf("codigo: %s \n ", codigo2);
   printf("populacao: %d  \n" , populacao2);
   printf("area em km: %f \n" , areaemkm2);
   printf("PIB: %f \n" , PIB2);
   printf("pontos turisticos: %i \n" , pontoturistico2); 
   printf("A dencidade populacional é: %.2f\n" , dencidadepopulacional2);
   printf("O PIB pre capital é: %.2f\n" , pibpercapital2);

   int carta1, carta2; 
   int ataque1 , ataque2;  

// escolha 1
   
   printf("escolha a comparacao carta 1");
   printf("Escolha uma opcao\n ");
   printf("1 populacao\n ");
   printf("2 area em km\n ");
   printf("3 PIB\n ");
   printf("4  pontos turisticos\n ");
   printf("5 dencidade populacional\n ");
   printf("6  PIB pre capital\n ");
   scanf("%d" , &carta1);

   switch(ataque1)
{
 case 1:
   printf("Jogador 1: populacao \n", populacao1 );
     break;
 case 2:
   printf("Jogador 1: area em km \n", areaemkm1);
      break;
 case 3:
   printf("Jogador 1: PIB \n", PIB1 );
      break;
 case 4:
   printf("Jogador 1: pontos turisticos  \n", pontoturistico1);
      break;
 case 5:
      printf("Jogador 1: dencidade populacional  \n", dencidadepopulacional1);
      break;  
 case 6:
      printf("Jogador 1: PIB pre capital  \n",pibpercapital1 );
      break; 
 default:
      printf("operacao invalida\n");
}
// escolha 2
      printf("escolha de comparação crata 2");
      printf("Escolha uma opcao\n ");
      printf("1 populacao\n ");
      printf("2 area em km\n ");
      printf("3 PIB\n ");
      printf("4  pontos turisticos\n ");
      printf("5 dencidade populacional\n ");
      printf("6  PIB pre capital\n ");
      scanf("%d" , &carta2);

   switch (ataque2)
   {
      case 1:
   printf("Jogador 2: populacao \n", populacao2);
     break;
 case 2:
   printf("Jogador 2: area em km \n", areaemkm2);
      break;
 case 3:
   printf("Jogador 2: PIB \n", PIB2);
      break;
 case 4:
   printf("Jogador 2: pontos turisticos  \n", pontoturistico2 );
      break;
 case 5:
      printf("Jogador 2: dencidade populacional  \n", dencidadepopulacional2);
      break;  
 case 6:
      printf("Jogador 2: PIB pre capital  \n",pibpercapital2 );
      break; 
   
   default:
      break;
   }
 // comparacao
if( (carta1 == 1) && (carta2 == 1 , 2 , 3 , 4 ,5 ,6)) {
   ataque1 = populacao1 > populacao2 ||
             populacao1 > areaemkm2 ||
             populacao1 > PIB2 ||
             populacao1 > pontoturistico2 ||
             populacao1 > dencidadepopulacional2 ||
             populacao1 > pibpercapital2;

   printf(" o ganhador é: %d\n " , ataque1 );
}
else if ( (carta1 == 2) && (carta2 ==  1 , 2 , 3 , 4 ,5 ,6)) {
   ataque1 = areaemkm1 > populacao2 ||
             areaemkm1 > areaemkm2 ||
             areaemkm1 > PIB2 ||
             areaemkm1 > pontoturistico2 ||
             areaemkm1 > dencidadepopulacional2 ||
             areaemkm1 > pibpercapital2;

   printf(" o ganhador é: %d\n " , ataque1 );
   
}else if ( (carta1 == 3) && (carta2 ==  1 , 2 , 3 , 4 ,5 ,6)) {
   ataque1 = PIB1 > populacao2 ||
             PIB1 > areaemkm2 ||
             PIB1 > PIB2 ||
             PIB1 > pontoturistico2 ||
             PIB1 > dencidadepopulacional2 ||
             PIB1 > pibpercapital2;
            
   printf(" o ganhador é: %d\n " , ataque1  );

}else if ( (carta1 == 4) && (carta2 ==  1 , 2 , 3 , 4 ,5 ,6)) {
   ataque1 = pontoturistico1 > populacao2 ||
   pontoturistico1  > areaemkm2 ||
   pontoturistico1  > PIB2 ||
   pontoturistico1  > pontoturistico2 ||
   pontoturistico1  > dencidadepopulacional2 ||
   pontoturistico1  > pibpercapital2;
   printf(" o ganhador é: %d\n " ,  ataque1  );

}else if ( (carta1 == 5) && (carta2 ==  1 , 2 , 3 , 4 ,5 ,6)) {
   ataque1 = dencidadepopulacional1 > populacao2 ||
   dencidadepopulacional1  > areaemkm2 ||
   dencidadepopulacional1  > PIB2 ||
   dencidadepopulacional1  > pontoturistico2 ||
   dencidadepopulacional1  > dencidadepopulacional2 ||
   dencidadepopulacional1  > pibpercapital2;
   printf(" o ganhador é: %d\n " , ataque1 );

}else if ( (carta1 == 6) && (carta2 ==  1 , 2 , 3 , 4 ,5 ,6)) {
   ataque1 = pibpercapital1 > populacao2 ||
   pibpercapital1  > areaemkm2 ||
   pibpercapital1  > PIB2 ||
   pibpercapital1  > pontoturistico2 ||
   pibpercapital1  > dencidadepopulacional2 ||
   pibpercapital1  > pibpercapital2;
   printf(" o ganhador é: %d\n ", ataque1 );
//enpate 

} else if ( 
   populacao1 == populacao2 ||
   pibpercapital1  == pibpercapital2 ||
   pontoturistico1  == pontoturistico2 ||
   PIB1 == PIB2 ||
   dencidadepopulacional1  == dencidadepopulacional2 ||
   areaemkm1 == areaemkm2
){
   printf (" empate\n");
} 
//resultado final 

else if ( ataque1 = 1 ? printf("carta um ganhou!!\n") : printf("carta 2 ganhou\n")){
   printf("fim");
}









return 0;

   }

