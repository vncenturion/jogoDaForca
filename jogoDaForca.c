#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


void flush_in()
{ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}

int imprimeCranio (void)
{
	printf("         .--------------.         \n");
	printf("        /                \\      \n");
	printf("       /                  \\    \n");
	printf("      |  \\\\ //    \\\\ //   |     \n");
	printf("      |    /        /     |      \n");
	printf("      |  // \\\\    // \\\\   |      \n");
	printf("      |                   |      \n");
	printf("      \\__      XXX      __/     \n");
	printf("        |\\     XXX     /|       \n");
	printf("        | |           | |        \n");
	printf("        | |[][][][][][] |        \n");
	printf("         \\ [][][][][][]_/       \n");
	printf("          \\___________/         \n");
	return 0;
}

int imprimeTrofeu (void)
{
	printf("          ___________      \n");
	printf("         '.=========.'     \n");
	printf("         .-\\:      /-.    \n");
	printf("        |( |:.     | )|    \n");
	printf("         '-|:.     |-'     \n");
	printf("           \\::.    /      \n");
	printf("            '::. .'        \n");
	printf("              ) (          \n");
	printf("            _.' '._        \n");
	printf("           '======='       \n");

	return 1;
}

int imprimeForca (int nivel)
{
	switch (nivel)
	{
		case 7:
			puts("");
			puts("");
			printf("     xxxxxxxxxxxx\n");
			printf("     ||  //     |\n");
			printf("     || //     ( )\n");
			printf("     ||//      _|_\n");
			printf("     ||/      /[X]\\\n");
			printf("     ||      / [X] \\\n");
			printf("     ||        ( )\n");
			printf("     ||       /   \\\n");
			printf("     ||      /     \\\n");
			printf("     ||              \n");
			printf("     ||_______________.\n");
			printf("     || 1 2 3 4 5 6 7 |\n");
			printf("     ||XXXXXXXXXXXXXXX|\n");
			puts("");
			puts("");
		break;
		case 6:
			puts("");
			puts("");
			printf("     xxxxxxxxxxxx\n");
			printf("     ||  //     |\n");
			printf("     || //     ( )\n");
			printf("     ||//      _|_\n");
			printf("     ||/      /[X]\\\n");
			printf("     ||      / [X] \\\n");
			printf("     ||        ( )\n");
			printf("     ||       /   \n");
			printf("     ||      /    \n");
			printf("     ||           \n");
			printf("     ||_______________.\n");
			printf("     || 1 2 3 4 5 6   |\n");
			printf("     ||XXXXXXXXXXXXXXX|\n");
			puts("");
			puts("");
		break;
		case 5:
			puts("");
			puts("");
			printf("     xxxxxxxxxxxx\n");
			printf("     ||  //     |\n");
			printf("     || //     ( )\n");
			printf("     ||//      _|_\n");
			printf("     ||/      /[X]\\\n");
			printf("     ||      / [X] \\\n");
			printf("     ||        ( )\n");
			printf("     ||        \n");
			printf("     ||        \n");
			printf("     ||        \n");
			printf("     ||_______________.\n");
			printf("     || 1 2 3 4 5     |\n");
			printf("     ||XXXXXXXXXXXXXXX|\n");
			puts("");
			puts("");
		break;
		case 4:
			puts("");
			puts("");
			printf("     xxxxxxxxxxxx\n");
			printf("     ||  //     |\n");
			printf("     || //     ( )\n");
			printf("     ||//      _|_\n");
			printf("     ||/      /[X]\\\n");
			printf("     ||      / [X] \\\n");
			printf("     ||        \n");
			printf("     ||        \n");
			printf("     ||        \n");
			printf("     ||        \n");
			printf("     ||_______________.\n");
			printf("     || 1 2 3 4       |\n");
			printf("     ||XXXXXXXXXXXXXXX|\n");
			puts("");
			puts("");
		break;
		case 3:
			puts("");
			puts("");
			printf("     xxxxxxxxxxxx\n");
			printf("     ||  //     |\n");
			printf("     || //     ( )\n");
			printf("     ||//      _|_\n");
			printf("     ||/      /[X]\n");
			printf("     ||      / [X]\n");
			printf("     ||        \n");
			printf("     ||        \n");
			printf("     ||        \n");
			printf("     ||        \n");
			printf("     ||_______________.\n");
			printf("     || 1 2 3         |\n");
			printf("     ||XXXXXXXXXXXXXXX|\n");
			puts("");
			puts("");
		break;
		case 2:
			puts("");
			puts("");
			printf("     xxxxxxxxxxxx\n");
			printf("     ||  //     |\n");
			printf("     || //     ( )\n");
			printf("     ||//      _|_\n");
			printf("     ||/       [X]\n");
			printf("     ||        [X]\n");
			printf("     ||        \n");
			printf("     ||        \n");
			printf("     ||        \n");
			printf("     ||        \n");
			printf("     ||_______________.\n");
			printf("     || 1 2           |\n");
			printf("     ||XXXXXXXXXXXXXXX|\n");
			puts("");
			puts("");
		break;
		case 1:
			puts("");
			puts("");
			printf("     xxxxxxxxxxxx\n");
			printf("     ||  //     |\n");
			printf("     || //     ( )\n");
			printf("     ||//        \n");
			printf("     ||/       \n");
			printf("     ||        \n");
			printf("     ||        \n");
			printf("     ||        \n");
			printf("     ||        \n");
			printf("     ||        \n");
			printf("     ||_______________.\n");
			printf("     || 1             |\n");
			printf("     ||XXXXXXXXXXXXXXX|\n");
			puts("");
			puts("");
		break;
		case 0:
			puts("");
			puts("");
			printf("     xxxxxxxxxxxx\n");
			printf("     ||  //     |\n");
			printf("     || //       \n");
			printf("     ||//        \n");
			printf("     ||/       \n");
			printf("     ||        \n");
			printf("     ||        \n");
			printf("     ||        \n");
			printf("     ||        \n");
			printf("     ||        \n");
			printf("     ||_______________.\n");
			printf("     ||               |\n");
			printf("     ||XXXXXXXXXXXXXXX|\n");
			puts("");
			puts("");
		break;
		default:
			printf("--- nivel invalido ---\n");
		break;


	}
    return 1;
}

int telaInical()
{
	system("cls");
	puts("");
	puts("");
	puts("         @@    @@@@@@@@     @@@@@@@@@    @@@@@@@@         @@@@@@@@       @@@@");
	puts("         @@   @@      @@   @@           @@      @@,       @@     @@@    .@@ @@");
	puts("         @@  .@@      @@# .@@    @@@@   @       &@@       @@      @@    @@  /@@");
	puts("         @@   @@      @@   @@       @   @@      @@        @@      @@   @@@@@@@@@");
	puts("     /@@@@@   ,@@@@@@@/     @@@@@@@@/    @@@@@@@/         @@&&@@@@@   @@      @@.");
    puts("");
	puts("");
	puts("     @@@@@@@@   @@@@@@@@    @@@@@@@@@    /@@@@@@@@      @@@.");
	puts("     @@        @@#     @@@  @@@    @@&  @@@            @@ @@");
	puts("     @@@@@@@   @@      .@@  @@@@@@@@@   @@            @@   @@");
	puts("     @@        @@      .@@  @@@  @@*    @@           @@@@@@@@@");
	puts("     @@         @@@@@@@@    @@@   @@@@   @@@@@@@@@  @@@     /@@");
	puts("");
	puts("");
	puts("                              xxxxxxxxxxxx");
	puts("                              ||  //     |");
	puts("                              || //     ( )");
	puts("                              ||//      _|_");
	puts("                              ||/      /[X]\\");
	puts("                              ||      / [X] \\");
	puts("                              ||        ( )");
	puts("                              ||       /   \\");
	puts("                              ||      /     \\");
	puts("                              ||              ");
	puts("                              ||_______________.");
	puts("                              || 1 2 3 4 5 6 7 |");
	puts("                              ||XXXXXXXXXXXXXXX|");
	puts("");
	puts("");
	puts("");
	puts("");
	puts("                              <PRESSIONE ENTER>");
	getchar();
    return 0;
}

int telaMenu()
{
	system("cls");
	puts("");
	puts("");
	puts("         @@    @@@@@@@@     @@@@@@@@@    @@@@@@@@         @@@@@@@@       @@@@");
	puts("         @@   @@      @@   @@           @@      @@,       @@     @@@    .@@ @@");
	puts("         @@  .@@      @@# .@@    @@@@   @       &@@       @@      @@    @@  /@@");
	puts("         @@   @@      @@   @@       @   @@      @@        @@      @@   @@@@@@@@@");
	puts("     /@@@@@   ,@@@@@@@/     @@@@@@@@/    @@@@@@@/         @@&&@@@@@   @@      @@.");
    puts("");
	puts("");
	puts("     @@@@@@@@   @@@@@@@@    @@@@@@@@@    /@@@@@@@@      @@@.");
	puts("     @@        @@#     @@@  @@@    @@&  @@@            @@ @@");
	puts("     @@@@@@@   @@      .@@  @@@@@@@@@   @@            @@   @@");
	puts("     @@        @@      .@@  @@@  @@*    @@           @@@@@@@@@");
	puts("     @@         @@@@@@@@    @@@   @@@@   @@@@@@@@@  @@@     /@@");
	puts("");
	puts("");
	puts("");
	puts("");
	puts("                      MENU (SELECIONE O TIPO DE JOGO)");
    puts("");
	puts("");
    puts("                     1 - JOGO INDIVIDUAL ( 1 VS. PC )");
    puts("                    2 - JOGO MULTI JOGADOR ( 1 VS. 1 )");
    puts("");
	puts("                              4 - PONTUACOES");
	puts("");
	puts("");
	puts("                                5 - SAIR");
	puts("");
	puts("");
	puts("");
	puts("");
	puts("");
	puts("                              UNIPE, 2020.");
	puts("");
    return 1;
}

int * buscaAcertos(char palavra[30], char letra, int acertos[30])
{
	static int nAcertos[30];
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
	
	return nAcertos;
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
	srand(time(0));
	int nivel = rand() % 3;
	int sorteio = rand() % 10;
	char palavraSorteada[30];
	char *palavra = palavraSorteada;
	
	char *palavraFacil[10];
	
	palavraFacil[0] = "matriz";
	palavraFacil[1] = "vetor";
	palavraFacil[2] = "malloc";
	palavraFacil[3] = "strpuct";
	palavraFacil[4] = "lwan";
	palavraFacil[5] = "pascal";
	palavraFacil[6] = "enigma";
	palavraFacil[7] = "turing";
	palavraFacil[8] = "edsac";
	palavraFacil[9] = "moore";
	
	char *palavraNormal[10];
	
	palavraNormal[0] = "compilador";
	palavraNormal[1] = "montadores";
	palavraNormal[2] = "linguagem";
	palavraNormal[3] = "neumann";
	palavraNormal[4] = "processador";
	palavraNormal[5] = "barramento";
	palavraNormal[6] = "benchmarks";
	palavraNormal[7] = "transistor";
	palavraNormal[8] = "inversor";
	palavraNormal[9] = "programa";
	
	char *palavraDificil[10];
	
	palavraDificil[0]= "registradores";
	palavraDificil[1]= "interpretadores";
	palavraDificil[2]= "processamento";
	palavraDificil[3]= "microarquitetura";
	palavraDificil[4]= "codificadores";
	palavraDificil[5]= "decodificadores";
	palavraDificil[6]= "demultiplexadores";
	palavraDificil[7]= "multiplexadores";
	palavraDificil[8]= "encapsulamento";
	palavraDificil[9]= "transceptores";
	
	switch (nivel)
	{
		case 0:
			strcpy (palavraSorteada, palavraFacil[sorteio]);
		break;
		case 1:
			strcpy (palavraSorteada, palavraNormal[sorteio]);
		break;
		case 2:
			strcpy (palavraSorteada, palavraDificil[sorteio]);
		break;
	}
	/*
	puts(palavra);
	printf("nivel: %d; sorteio: %d\n", nivel, sorteio);
	*/

	return palavra;
}

int jogoMultiplayer ()
{
	int acertoTotal[30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int * nAcertos;
	int i, erros=0, totalPontos = 0, maxPontos = 0, tamPalavra=0, controle=0, venceu=0;
	char letraErrada[7] = "\0";
	char letra=' ';
	char palavra[30]="\0";
	char letraCerta[30] = "\0";
	
	printf("     Digite a palavra a ser adivinhada: ");
	scanf("%[ -~]", palavra);
	flush_in();
	tamPalavra = strlen (palavra);
	maxPontos = tamPalavra * 10;

	do
	{
		system("cls");
		printf("     max pontos: %d\n", maxPontos);
		printf("     total de pontos: %d\n", totalPontos);
		imprimeForca(erros);
		imprimeLetraErrada(letraErrada);
		imprimePalavra(palavra, acertoTotal);
		puts("");
		
		do 
		{
			printf("     Digite uma letra da palavra: ");
			scanf(" %c", &letra);
			flush_in();
		
			for (i=0, controle=0; i<tamPalavra; i++)
			{
				if (letraCerta[i]==letra)
				{
					controle+=1;
				}
			}
			printf("     Letra já digitada!\n");
		} while (controle!=0);

		strcat(letraCerta, &letra);
		

		nAcertos = buscaAcertos(palavra, letra, acertoTotal);
		

		for (i=0; i<30; i++)
		{
			acertoTotal[i]=nAcertos[i];
		}

		if (buscaErro(palavra, letra)==1)
		{
			letraErrada[erros] = letra;
		}
		
		erros += buscaErro(palavra, letra);
		totalPontos += buscaPontos(palavra, letra);

	} while ((erros<7)&&(totalPontos<maxPontos));
	
	system("cls");
	printf("     max pontos: %d\n", maxPontos);
	printf("     total de pontos: %d\n", totalPontos);
	imprimeForca(erros);
	imprimeLetraErrada(letraErrada);
	imprimePalavra(palavra, acertoTotal);
	puts("");
	puts("\n     FIM DO JOGO!");
	puts("");
	puts("");
	puts("");

	if (erros>=7)
	{
		venceu=0;
		puts("");
		imprimeCranio();
		puts("");
		puts("           VOCÊ PERDEU!");
		puts("");
	}
	if (totalPontos>=maxPontos)
	{
		venceu=1;
		imprimeTrofeu();
		puts("");
		puts("     PARABENS, VOCÊ VENCEU!");
		puts("");
	}
	
	puts("     <PRESSIONE ENTER PARA VOLTAR AO MENU>");
	getchar();
	getchar();
	
  	return 0;
}

int jogoIndividual ()
{
	int pontosJogador = 0, venceu=1;
	
	do
	{
		int acertoTotal[30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		int * nAcertos;
		int i, erros=0, totalPontos = 0, maxPontos = 0, tamPalavra=0, controle=0; 
		char letraErrada[7] = "\0";
		char letra=' ';
		char palavra[30]="\0";
		char letraCerta[30] = "\0";
		
		
		strcpy(palavra, sorteiaPalavra());
		tamPalavra = strlen (palavra);
		maxPontos = tamPalavra * 10;

		do
		{
			
			system("cls");
			printf("     max pontos da palavra: %d\n", maxPontos);
			printf("     total de pontos obtidos: %d\n", totalPontos);
			imprimeForca(erros);
			imprimeLetraErrada(letraErrada);
			imprimePalavra(palavra, acertoTotal);
			puts("");
			
			do 
			{

				printf("     Digite uma letra da palavra: ");
				scanf(" %c", &letra);
				flush_in();
			
				for (i=0, controle=0; i<tamPalavra; i++)
				{
					if (letraCerta[i]==letra)
					{
						controle+=1;
					}
				}
				printf("     Letra já digitada!\n");

			} while (controle!=0);

			strcat(letraCerta, &letra);
			

			nAcertos = buscaAcertos(palavra, letra, acertoTotal);
			

			for (i=0; i<30; i++)
			{
				acertoTotal[i]=nAcertos[i];
			}

			if (buscaErro(palavra, letra)==1)
			{
				letraErrada[erros] = letra;
			}
			
			erros += buscaErro(palavra, letra);
			totalPontos += buscaPontos(palavra, letra);

		} while ((erros<7)&&(totalPontos<maxPontos));
		
		system("cls");
		printf("     max pontos: %d\n", maxPontos);
		printf("     total de pontos: %d\n", totalPontos);
		imprimeForca(erros);
		imprimeLetraErrada(letraErrada);
		imprimePalavra(palavra, acertoTotal);
		puts("");
		puts("\n     FIM DO JOGO!");
		puts("");
		puts("");
		puts("");
		pontosJogador+=totalPontos;

		if (erros>=7)
		{
			venceu=0;
			puts("");
			imprimeCranio();
			puts("");
			puts("           VOCÊ PERDEU!");
			printf("TOTAL DE PONTOS OBTIDOS: %d\n", pontosJogador);
			puts("");
			puts("     <PRESSIONE ENTER PARA VOLTAR AO MENU>");
			getchar();	
		}

		if (totalPontos>=maxPontos)
		{
			venceu=1;
			imprimeTrofeu();
			puts("");
			puts("          PARABENS, VOCÊ VENCEU!");
			printf("        TOTAL DE PONTOS OBTIDOS: %d\n", pontosJogador);
			puts("");
			puts("     <PRESSIONE ENTER PARA CONTINUAR>");
			getchar();
		}

	} while (venceu==1);

	return pontosJogador;
}

int selecionaJogo (int jogo)
{
	int sair=0;
	char confirma='n';
	char nomeJogador[30]="\0";
	int pontoJogador=0;
	char *jogadorVencedor = nomeJogador;
	
	struct pontuacao
	{
		char nomeRanking[30];
		int pontosRanking;
	} resPontuacao;

	switch (jogo)
	{

		case 1:
			system("cls");
			getchar();
			puts("");
			printf("\n     JOGO INDIVIDUAL ( 1 VS AI )");
			puts("");
			imprimeForca(0);
			puts("");
			printf("     Digite seu nome: ");
			scanf("%[ -~]", nomeJogador);
			flush_in();
			resPontuacao.pontosRanking=jogoIndividual();
			strcpy (resPontuacao.nomeRanking, nomeJogador);
			printf("JOGADOR: %s fez %d PONTOS!",resPontuacao.nomeRanking,resPontuacao.pontosRanking);
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
			jogoMultiplayer ();
			sair=0;
			return sair;
		break;
		case 3:
		case 4:
			sair = 0;
			return sair;

		break;
		case 5:
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

int imprimeCreditos ()
{
	puts("");
	puts("");
	puts("                                           xxxxxxxx");
    puts("                                           ||     |");
    puts("                                           ||     0");
    puts("                                           ||    -|-");
    puts("                                           ||    / \\");
    puts("                                           ||");
	puts("                                           XXXXXXXXXXXX");
	puts("");	
	puts("             *@@@@@@@@ @@@@@@@@  @@@@@@@@ @@@@@@@@   @@@ @@@@@@@@@@  s@@@@@@@   @@@@@@@@");
	puts("           @@@@        @@@  *@@@ @@@      @@@   @@@@ @@@    @@@     @@@    @@@ @@@");
	puts("           @@@         @@@@@@@@  @@@@@@@@ @@@    @@@ @@@    @@@    @@@     @@@  @@@@@@@");
	puts("           @@@@        @@@ @@@   @@@      @@@   @@@@ @@@    @@@    @@@     @@@       @@@");
	puts("             @@@@@@@@@ @@@  @@@@ @@@@@@@@ @@@@@@@@   @@@    @@@     @@@@@@@@@  @@@@@@@@");
	puts("");
	puts("");
	puts("");
	puts("                                    EQUIPE DE DESENVOLVIMENTO");
	puts("");
	puts("                                 Lucas Vinicius Pessoa de Franca");
	puts("                                Sérgio Marcelino Nóbrega de Castro");
	puts("                                Victor Henrique de Amorim Caraubas");
	puts("                               Vinicius Bezerra Cavalcanti Centurion");
	puts("");
	puts("");
	puts("");
	puts("                                       OBRIGADO POR JOGAR!!!");
	puts("");
	return 0;
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