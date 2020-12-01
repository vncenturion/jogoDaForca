#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "figurasForca.h"


void flush_in()
{ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}

int * buscaAcertos(char palavra[30], char letra, int acertos[30])
{
	int nAcertos[30];
	int *pAcertos = nAcertos;
	int i=0;
	
	for (i=0; i<30; i++)
	{
		nAcertos[i]=acertos[i];
	}
	
	for (i=0; i<30; i++)
	{
		if (palavra[i]==letra)
		{
			nAcertos[i]=1;
		}
	}
	
	return pAcertos;
}

int buscaPontos(char palavra[30], char letra)
{
	int i; 
	int contaPonto=0;
	for (i=0; i<strlen(palavra); i++)
	{
		if (palavra[i]==letra)
		{
			contaPonto+=10;
		}
	}
	
	return contaPonto;
}

int buscaErro(char palavra[30], char letra)
{
	int i; 
	int contaErro=0;
	int nLetra = strlen(palavra); 

	for (i=0; i<nLetra; i++)
	{
		
		if (palavra[i]!=letra)
		{
			contaErro +=1;
		}

	}
	
	if (contaErro==nLetra)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}

int imprimeLetraErrada (char palavra[7])
{
	int nLetras = strlen(palavra);
	int i;

	printf("     Letras erradas: ");

	for (i=0; i<(nLetras-1);i++)
	{
		printf("%c, ", palavra[i]);
		
	}
	
	if (nLetras>0)
	{
		printf("%c.", palavra[i]);
	}
	puts(" ");
	puts(" ");

	return 1;
}

int imprimePalavra (char palavra[30], int acertos[30])
{
	int nLetras = strlen(palavra);
	int i;

	printf("     ");

	for (i=0; i<nLetras;i++)
	{
		if (acertos[i]==1)
		{
			printf("[%c] ", palavra[i]);
		}
		else
		{
			printf("[_] ");
		}
	}
	puts("");
	return 1;
}

char * sorteiaPalavra()
{
	//leitura de arquivo de palavras para sorteio
	FILE * arquivo = NULL;
	char palavras[30][30]={};
	char texto[30]="\0";
	int i=0, j=0;
	
	arquivo = fopen("listaPalavras.txt", "r");
	if ((arquivo = fopen("listaPalavras.txt", "r"))==NULL)
	{
		puts("arquivo não pode ser aberto\n");
	} else 
	{
		for (i=0; i<30; i++)
		{
			fscanf (arquivo, "%s", texto);
			strcpy (palavras[i], texto);
			//puts(palavras[i]);
		}
	}
	
	fclose(arquivo);
	//chave para sorteio de 0 a 29
	srand(time(0));
	int sorteio = rand() % 30;
	char palavraSorteada[30]="\0";
	char *palavra = palavraSorteada;
	strcpy (palavraSorteada, palavras[sorteio]);
	return palavra;
}

int jogoMultiplayer (char jogadorPalavra[30])
{
	int acertoTotal[30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int * nAcertos;
	int i, erros=0, totalPontos = 0, maxPontos = 0, parcial = 0,tamPalavra=0, controle=0, pontosJogador = 0;
	char letrasErradas[7] = "\0";
	char letra=' ';
	char texto[30]="\0";
	char letrasDigitadas[30] = "\0";
	int contadorLetras = 0;

	/*
	char *pNomeJogador = (char*) calloc(1,sizeof(strlen(jogadorPalavra)));
	
	puts("entrou na funcao!");
	puts(pNomeJogador);
	strcpy(pNomeJogador, jogadorPalavra);
	puts(pNomeJogador);
	printf("string de pNomeJogador: %s\nstrlen de pNomeJogador: %lu\nsizeOf pNomeJogador: %lu\nsizeOf *pNomeJogador: %lu\nsizeOf &pNomeJogador: %lu\n\n", pNomeJogador, strlen(pNomeJogador), (sizeof(pNomeJogador)),(sizeof(*pNomeJogador)),(sizeof(&pNomeJogador)));

	for (i = 0; i < strlen(jogadorPalavra); i++)
	{
		printf("Endereco de p%i = %p = %p | valor de p%i = %c\n", i, (pNomeJogador+i), &pNomeJogador[i], i, *(pNomeJogador+i));
	}
	*/

	printf("     %s, digite a palavra a ser adivinhada: ", jogadorPalavra);
	scanf("%[ -~]", texto);
	flush_in();
	char *palavra = (char*) calloc(1,sizeof(strlen(texto)));
	if (palavra == NULL)//verifica se alocacao funcionou
	{
		printf("\nErro de alocacao de memoria\n");
	}
	strcpy(palavra, texto);
	tamPalavra = strlen (palavra);
	maxPontos = tamPalavra * 10;

	do
	{
		system("cls");
		printf("     Palavra criada por: %s\n", jogadorPalavra);
		printf("     max pontos da palavra: %d\n", maxPontos);
		printf("     total de pontos obtidos: %d\n", totalPontos);
		//printf("     %s", palavra);
		imprimeForca(erros);
		imprimeLetraErrada(letrasErradas);
		imprimePalavra(palavra, acertoTotal);
		puts("");
		
		do 
		{
			printf("     Digite uma letra da palavra: ");
			scanf(" %c", &letra);
			flush_in();
		
			for (i=0, controle=0; i<strlen(letrasDigitadas); i++)
			{
				if (letrasDigitadas[i]==letra)
				{
					controle+=1;
				}
			}
			
			if (controle>=1)
			{
				printf("     Letra ja digitada!\n");
			}

		} while (controle!=0);
		//correcao de codigo anterior com strcat
		letrasDigitadas[contadorLetras] = letra;
		contadorLetras++;
		nAcertos = buscaAcertos(palavra, letra, acertoTotal);
		
		for (i=0; i<30; i++)
		{
			acertoTotal[i]=nAcertos[i];
		}	
		
		if (buscaErro(palavra, letra)==1)
		{
			letrasErradas[erros] = letra;
			erros += 1;
		}
		
		//erros += buscaErro(palavra, letra);
		totalPontos += buscaPontos(palavra, letra);

	} while ((erros<7)&&(totalPontos<maxPontos));
	
	system("cls");
	printf("     max pontos: %d\n", maxPontos);
	printf("     total de pontos: %d\n", totalPontos);
	imprimeForca(erros);
	imprimeLetraErrada(letrasErradas);
	imprimePalavra(palavra, acertoTotal);
	puts("");
	puts("\n     FIM DO JOGO!");
	puts("");
	puts("");
	puts("");

	parcial = totalPontos-(erros*10);
	if (parcial<=0)
	{
		parcial=0;
	}
	pontosJogador+=parcial;
	
	if (erros>=7)
	{
		puts("");
		imprimeCranio();
		puts("");
		puts("                 VOCE PERDEU!");
	  printf("        TOTAL DE PONTOS OBTIDOS: %d\n", totalPontos);
	  printf("        TOTAL DE PONTOS PERDIDOS: %d\n", (erros*10));
		puts("");
		puts("      <PRESSIONE ENTER PARA CONTINUAR>");
		getchar();	
	}

	if (totalPontos>=maxPontos)
	{
		imprimeTrofeu();
		puts("");
		puts("          PARABENS, VOCE VENCEU!");
	  printf("        TOTAL DE PONTOS OBTIDOS: %d\n", totalPontos);
	  printf("        TOTAL DE PONTOS PERDIDOS: %d\n", (erros*10));
		puts("");
		puts("      <PRESSIONE ENTER PARA CONTINUAR>");
		getchar();
	}
	
  	return pontosJogador;
}

int jogoIndividual ()
{
	int pontosJogador = 0, venceu=1;
	
	do
	{
		int acertoTotal[30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		int * nAcertos;
		int i, erros=0, totalPontos = 0, maxPontos = 0, parcial = 0,tamPalavra=0, controle=0; 
		char letrasErradas[7] = "\0";
		char letra=' ';
		char palavra[30]="\0";
		char letrasDigitadas[30] = "\0";
		int contadorLetras = 0;
		
		strcpy(palavra, sorteiaPalavra());
		tamPalavra = strlen (palavra);
		maxPontos = tamPalavra * 10;

		do
		{
			
			system("cls");
			printf("     max pontos da palavra: %d\n", maxPontos);
			printf("     total de pontos obtidos: %d\n", totalPontos);
			//printf("     %s", palavra);
			imprimeForca(erros);
			imprimeLetraErrada(letrasErradas);
			imprimePalavra(palavra, acertoTotal);
			puts("");
			
			do 
			{

				printf("     Digite uma letra da palavra: ");
				scanf(" %c", &letra);
				flush_in();
				
				//verifica se a letra foi digitada anteriormente
				for (i=0, controle=0; i<strlen(letrasDigitadas); i++)
				{
					if (letrasDigitadas[i]==letra)
					{
						controle+=1;
					}
				}
				
				if (controle>=1)
				{
					printf("     letra ja digitada!\n");
				}

			} while (controle!=0);
			//correcao de codigo anterior com strcat
			letrasDigitadas[contadorLetras] = letra;
			contadorLetras++;
			
			nAcertos = buscaAcertos(palavra, letra, acertoTotal);
			
			for (i=0; i<30; i++)
			{
				acertoTotal[i]=nAcertos[i];
			}	
			if (buscaErro(palavra, letra)==1)
			{
				letrasErradas[erros] = letra;
				erros += 1;
			}
			
			//erros += buscaErro(palavra, letra);
			totalPontos += buscaPontos(palavra, letra);

		} while ((erros<7)&&(totalPontos<maxPontos));
		
		system("cls");
		printf("     max pontos: %d\n", maxPontos);
		printf("     total de pontos: %d\n", totalPontos);
		imprimeForca(erros);
		imprimeLetraErrada(letrasErradas);
		imprimePalavra(palavra, acertoTotal);
		puts("");
		puts("\n     FIM DO JOGO!");
		puts("");
		puts("");
		puts("");

		parcial = totalPontos-(erros*10);
		if (parcial<=0)
		{
			parcial=0;
		}
		pontosJogador+=parcial;

		if (erros>=7)
		{
			venceu=0;
			puts("");
			imprimeCranio();
			puts("");
			puts("                VOCE PERDEU!");
			printf("        TOTAL DE PONTOS OBTIDOS: %d\n", pontosJogador);
			puts("");
			puts("     <PRESSIONE ENTER PARA VOLTAR AO MENU>");
			getchar();	
		}

		if (totalPontos>=maxPontos)
		{
			venceu=1;
			imprimeTrofeu();
			puts("");
			puts("          PARABENS, VOCE VENCEU!");
			printf("        TOTAL DE PONTOS OBTIDOS: %d\n", pontosJogador);
			puts("");
			puts("     <PRESSIONE ENTER PARA CONTINUAR>");
			getchar();
		}

	} while (venceu==1);

	return pontosJogador;
}

struct Recordes{
 
   char nome1[20];
   int pontuacao1;

   char nome2[20];
   int pontuacao2;

   char nome3[20];
   int pontuacao3;
 
};

void gravarPontuacao(char novoNome[30], int novaPontuacao){
	
	FILE *Novo_Recorde; //ponteiro para o arquivo
	
	struct Recordes novo;
	
	if ((Novo_Recorde = fopen("Recordes", "r+")) == NULL){ //Tenta abrir um arquivo para ler e atualizar os recordes (modo "r+")
 
        Novo_Recorde = fopen("Recordes", "w"); //Se não houver, abre um novo arquivo para gravação (modo "w")
 
       
 
        strcpy(novo.nome1, novoNome); // atribui a primeira pontuacao do jogo
 
        novo.pontuacao1 = novaPontuacao; //inicializa com zero o recorde
 
       
 
        strcpy(novo.nome2, "*****"); // inicializa os demais nomes com asteriscos
 
        novo.pontuacao2 = 0; // inicializa os demais recordes com zero
 
       
 
        strcpy(novo.nome3, "*****"); // inicializa os demais nomes com asteriscos
 
        novo.pontuacao3 = 0; // os demais recordes com zero
        
 
    } else{ //Caso já exista o arquivo
 
        fseek(Novo_Recorde, 0, SEEK_SET); //posiciona no início
 
        fread(&novo, sizeof(struct Recordes), 1, Novo_Recorde); //lê o arquivo
 
      	
		if(novaPontuacao > novo.pontuacao1){
			
			// passando pontuacao do 2 lugar para o 3 lugar
			strcpy(novo.nome3, novo.nome2);
			novo.pontuacao3 = novo.pontuacao2;
			
			// passando pontuacao do 1 lugar para o 2 lugar
			strcpy(novo.nome2, novo.nome1);
			novo.pontuacao2 = novo.pontuacao1;

        	strcpy(novo.nome1, novoNome);
         	novo.pontuacao1 = novaPontuacao;

      	}else if(novaPontuacao > novo.pontuacao2){
      		
      		// passando pontuacao do 2 lugar para o 3 lugar
      		strcpy(novo.nome3, novo.nome2);
			novo.pontuacao3 = novo.pontuacao2;

         	strcpy(novo.nome2, novoNome);
        	novo.pontuacao2 = novaPontuacao;

      	} else if (novaPontuacao > novo.pontuacao3){

         	strcpy(novo.nome3, novoNome);
         	novo.pontuacao3 = novaPontuacao;

      	}
 
    }
 
    fseek(Novo_Recorde, 0, SEEK_SET); //Posiciona no início do arquivo

    fwrite(&novo, sizeof(struct Recordes), 1, Novo_Recorde); //faz a gravação do novo recorde

    fclose(Novo_Recorde); //fecha o arquivo
 
       
}

void mostrarRanking(){
 
	FILE *Novo_Recorde;
 
    struct Recordes novo;
 
 	system("cls");	
    imprimeRanking ();    
 
	if((Novo_Recorde = fopen("Recordes", "r")) == NULL){ //Tenta abrir o arquivo "Recordes" para ler os recordes (modo "r")
 
		printf("\n\n\t\t       NENHUM RECORDE! SEJA O PRIMEIRO! ");
 
	} else
	{
    	fseek(Novo_Recorde, 0, SEEK_SET);
    	fread(&novo, sizeof(struct Recordes), 1, Novo_Recorde);

    	printf("\n\n\n\n\n\t\t\t     #1 LUGAR : ");
    	printf("  %s", novo.nome1);
    	printf("\t  %d", novo.pontuacao1);
 
    	printf("\n\n\n\t\t\t     #2 LUGAR : ");
    	printf("  %s", novo.nome2);
    	printf("\t  %d", novo.pontuacao2);

    	printf("\n\n\n\t\t\t     #3 LUGAR : ");
    	printf("  %s", novo.nome3);
    	printf("\t  %d", novo.pontuacao3);

        fclose(Novo_Recorde);
	}
 
    getchar();
 
}

int selecionaJogo (int jogo)
{
	int sair=0;
	char confirma='n';
	char nomeJogador[30]="\0";
	char nomeJogador1[30]="\0";
	char nomeJogador2[30]="\0";
	int pontoJogador1=0, pontoJogador2=0;	
	int pontoJogador=0;
	char *jogadorVencedor = nomeJogador;
	
	struct pontuacao
	{
		char nomeRanking[30];
		int pontosRanking;
	} resPontuacao, resSingle, resMultiplayer1, resMultiplayer2;

	switch (jogo)
	{

		case 1:
			system("cls");
			puts("");
			printf("\n     JOGO INDIVIDUAL ( 1 VS AI )");
			puts("");
			imprimeForca(0);
			puts("");
			printf("     Digite seu nome: ");
			scanf("%[ -~]", resSingle.nomeRanking);
			flush_in();
			if (strlen(resSingle.nomeRanking)==0)//verifica se o jogador inseriu nome
			{
				strcpy(resSingle.nomeRanking, "Jogador Individual");
			}
			resSingle.pontosRanking=jogoIndividual();
			printf("     JOGADOR: %s fez %d PONTOS!",resSingle.nomeRanking,resSingle.pontosRanking);
			
			gravarPontuacao(resSingle.nomeRanking, resSingle.pontosRanking);
			getchar();
			sair=0;
			return sair;
		break;
		case 2:

			system("cls");
			getchar();
			puts("");
			printf("\n     MULTI JOGADOR ( 1 VS 1 )");
			puts("");
			imprimeForca(0);
			puts("");
			printf("     Jogador n.1, digite seu nome: ");
			scanf("%[ -~]", resMultiplayer1.nomeRanking);
			flush_in();
			if (strlen(resMultiplayer1.nomeRanking)==0)//verifica se o jogador inseriu nome
			{
				strcpy(resMultiplayer1.nomeRanking, "Jogador #1");
			}
			puts("");
			resMultiplayer1.pontosRanking=jogoMultiplayer(resMultiplayer1.nomeRanking);
			//segundapartida
			system("cls");
			getchar();
			puts("");
			printf("\n     MULTI JOGADOR ( 1 VS 1 )");
			puts("");
			imprimeForca(0);
			puts("");
			printf("     Jogador n.2, digite seu nome: ");
			scanf("%[ -~]", resMultiplayer2.nomeRanking);
			flush_in();
			if (strlen(resMultiplayer2.nomeRanking)==0)//verifica se o jogador inseriu nome
			{
				strcpy(resMultiplayer2.nomeRanking, "Jogador #2");
			}
			puts("");
			resMultiplayer2.pontosRanking=jogoMultiplayer (resMultiplayer2.nomeRanking);
			
			if (resMultiplayer1.pontosRanking<resMultiplayer2.pontosRanking)
			{
				system("cls");
				puts("");
				printf("\n     MULTI JOGADOR ( 1 VS 1 )");
				puts("");
				puts("");
				imprimeFogos();
				puts("");
				printf("\n     %s VENCEU %s EM ( 1 VS 1 )\n     por %d a %d PONTOS",resMultiplayer2.nomeRanking, resMultiplayer1.nomeRanking,resMultiplayer2.pontosRanking, resMultiplayer1.pontosRanking);
				puts("");
				getchar();

			} else if (resMultiplayer1.pontosRanking>resMultiplayer2.pontosRanking)
			{
				system("cls");
				puts("");
				printf("\n     MULTI JOGADOR ( 1 VS 1 )");
				puts("");
				puts("");
				imprimeFogos();
				puts("");
				printf("\n     %s VENCEU %s EM ( 1 VS 1 )\n     por %d a %d PONTOS",resMultiplayer1.nomeRanking, resMultiplayer2.nomeRanking,resMultiplayer1.pontosRanking, resMultiplayer2.pontosRanking);
				puts("");
				getchar();

			} else if (resMultiplayer1.pontosRanking==resMultiplayer2.pontosRanking)
			{
				system("cls");
				puts("");
				printf("\n     MULTI JOGADOR ( 1 VS 1 )");
				puts("");
				puts("");
				imprimeFogos();
				puts("");
				printf("\n     EMPATE de %s e %s\n     por %d e %d PONTOS",resMultiplayer1.nomeRanking, resMultiplayer2.nomeRanking,resMultiplayer1.pontosRanking, resMultiplayer2.pontosRanking);
				puts("");
				getchar();

			}
			puts("     <PRESSIONE ENTER PARA VOLTAR AO MENU DE SELECAO>");
			getchar();
			sair=0;
			return sair;
			
		break;
		case 3:
			mostrarRanking();
			sair=0;
			return sair;

		break;
		case 4:
			printf("\n     Deseja sair? (s ou n): ");
			scanf(" %c", &confirma);
			flush_in();

			if (confirma=='s')
			{
				sair=1;
			}
			else
			{
				sair=0;
			}
			return sair;
			break;
		default:
			printf("\n     Opção inválida!");
			getchar();
			getchar();
			sair=0;
			return sair;
		break;
	}
	
}

int main(void) 
{
  	setlocale(LC_ALL,"Portuguese");
	int tipoJogo=0, sair=0;
	telaInical();

	do
	{
		system("cls");
		telaMenu();
		
		printf("\n\n\n     Selecione o modo de jogo: ");
		scanf("%d", &tipoJogo);
		flush_in();

		sair=selecionaJogo(tipoJogo);

	} while (sair==0);
	
	system("cls");
	imprimeCreditos();	

  	return 0;
}
