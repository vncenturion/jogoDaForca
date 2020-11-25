#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
	system("clear");
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
	system("clear");
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
	puts("               MENU (SELECIONE O TIPO DE JOGO)");
    puts("");
    puts("                    1 - JOGO MULTI JOGADOR ( 1 VS 1 )");
    puts("                    2 - JOGO INDIVIDUAL");
    puts("");
	puts("                    3 - PONTUACOES");
	puts("");
	puts("                    4 - SAIR");
	puts("");
	puts("");
	puts("");
	puts("                    CARAÚBAS; CASTRO; CENTURION; FRANCA.");
	puts("                    UNIPE, 2020.");
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
		printf("%c , ", palavra[i]);
		
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

int jogoMultiplayer ()
{
	int acertoTotal[30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int * nAcertos;
	int i, erros=0, totalPontos = 0, maxPontos = 0, tamPalavra=0, controle=0, venceu=0;
	char letraErrada[7] = "\0";
	char letra=' ';
	char palavra[30]="\0";
	char letraCerta[30] = "\0";
	
	printf("Digite a palavra a ser adivinhada: ");
	scanf("%[ -~]", palavra);
	tamPalavra = strlen (palavra);
	maxPontos = tamPalavra * 10;

	do
	{
		
		system("clear");
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
	
	system("clear");
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



int main(void) 
{
  	int selecionaMenu=0, sair=0;
	char confirma='n';
	telaInical();

	do
	{
		system("clear");
		telaMenu();
		
		printf("\n\n\n     Selecione o modo de jogo: ");
		scanf("%d", &selecionaMenu);

		switch (selecionaMenu)
		{

			case 1:
				system("clear");
				getchar();
				printf("\n     MULTI JOGADOR ( 1 VS 1 )");
				puts("");
				imprimeForca(0);
				puts("");
				jogoMultiplayer ();

			break;
			case 2:
			break;
			case 3:
			break;
			case 4:
				printf("\n     Deseja sair? (s ou n): ");
				scanf(" %c", &confirma);
				if (confirma=='s')
				{
					sair=1;
				}
				else
				{
					sair=0;
				}
			break;
			default:
				printf("\n     Opcao invalida!");
				getchar();
				getchar();
			break;
		}

	} while (sair==0);
	
	system("clear");
	printf("\n\n\n\n\n     OBRIGADO POR JOGAR!");	

  	return 0;

}