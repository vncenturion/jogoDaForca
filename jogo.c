#include <stdio.h>
#include <string.h>


// Projeto 2 estágio - Professor Leandro.
// Jogo da Forca

//criei essa função com 6 estados
/*PAra a documentação 
0 - mostra a forca
1 - adiciona a cabeça
2 - adiciona o corpo
3- braço direito 
4 - braço esquerdo
5- perna esq
6 - perdeu */
void forca(int estado){
  if(estado==0){
    printf("\n------------");
    printf("\n|          |");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n-");
  } else if(estado==1){
    printf("\n------------");
    printf("\n|          |");
    printf("\n|          0");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n-");
  } else if(estado==2){
    printf("\n------------");
    printf("\n|          |");
    printf("\n|          0");
    printf("\n|          |");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n-");
  } else if(estado==3){
    printf("\n------------");
    printf("\n|          |");
    printf("\n|          0");
    printf("\n|         -|");
    printf("\n|           ");
    printf("\n|");
    printf("\n|");
    printf("\n-");
  } else if(estado==4){
    printf("\n------------");
    printf("\n|          |");
    printf("\n|          0");
    printf("\n|         -|-");
    printf("\n|           ");
    printf("\n|");
    printf("\n|");
    printf("\n-");
  } else if(estado==5){
    printf("\n------------");
    printf("\n|          |");
    printf("\n|          0");
    printf("\n|         -|-");
    printf("\n|         /  ");
    printf("\n|");
    printf("\n|");
    printf("\n-");
  } else if(estado==6){
    printf("\n------------");
    printf("\n|          |");
    printf("\n|          0");
    printf("\n|         -|-");
    printf("\n|         / \\ ");
    printf("\n|");
    printf("\n|    Voce perdeu!");
    printf("\n-");
  }
}
void limpa_tela(){
  for(int i=0;i<30;i++){
    printf("\n");
  }
}
int main(void) {
	
	//poderia ter usado alocação, mas fiz assim
	//podem fazer melhorias - Lucas
  char palavra_Secreta[30];//palavra secreta
  printf("JOGADOR 1:\n"); 
  printf("Qual eh a Palavra secreta que voce escolheu?:\n");
  fgets(palavra_Secreta,30, stdin);
  printf("A palavra secreta é: %s", palavra_Secreta);
  //  o %i tava dando bug, assim como o %d. usei %lu e pegou.
  printf("A palavra tem %lu letras", strlen(palavra_Secreta)-1);
  limpa_tela();
  
  //retira o ultimo caracter de palavra_Secreta que esta a mais devido a captura ser com fgets()
  palavra_Secreta[strlen(palavra_Secreta)-1]='\0';
  char palavra_Tela[30];//palavra para tela
  strcpy(palavra_Tela, palavra_Secreta);//copia de palavra_Secreta 
  //substitui letras por '_' - Underline
  for(int i=0;i<strlen(palavra_Tela);i++){
    palavra_Tela[i]='_';
  }
  
  int erros = 0;
  while(1){
    //imprimir a forca
    limpa_tela();
    forca(erros);
    //imprimir os underline/ '_' para cada letra da palavra secreta, ou seja, imprimir palavra_Tela
    printf("\nAdivinhe a Palavra : ");
    for(int i=0;i<strlen(palavra_Tela);i++){
      printf("%c ", palavra_Tela[i]);
    }
    //recebe a letra
    printf("\nLetra: ");
    char letra;
    scanf(" %c", &letra);
    //se letra correta atualiza palavra na tela 
    //verifica se a letra esta correta
    int sera_que_errou=1;//1=sim 0=nao
    for(int i=0;i<strlen(palavra_Tela); i++){
      if(letra==palavra_Secreta[i]){//certo
        palavra_Tela[i]=letra;
        sera_que_errou=0;
      } 
    }
    //senao, incrementa erros
    if(sera_que_errou==1){
      erros++;
    }
    //verifica se o jogo acabou
    //verifica se ganhou
    //verifica se palavra_Secreta é igual a palavra_Tela
    if(strcmp(palavra_Tela,palavra_Secreta)==0){
      //ENTAO ganhou
      printf("\nAcertou: ");
      for(int i=0;i<strlen(palavra_Tela);i++){
        printf("%c ", palavra_Tela[i]);
      }
      printf("\n Voce Venceu! Parabens!!!");
      printf("\n ");
      break;
    }
    //verifica se perdeu
    if(erros==6){
    	
      //perdeu
      forca(erros);
      break;
    }
  }

 





  return 0;
}
