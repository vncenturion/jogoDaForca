#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int imprimeCranio (void)
{
	
	printf("    .--------------.         \n");
	printf("   /                \\      \n");
	printf("  /                  \\    \n");
	printf(" |  \\\\ //    \\\\ //   |     \n");
	printf(" |    /        /     |      \n");
	printf(" |  // \\\\    // \\\\   |      \n");
	printf(" |                   |      \n");
	printf(" \\__      XXX      __/     \n");
	printf("   |\\     XXX     /|       \n");
	printf("   | |           | |        \n");
	printf("   | |[][][][][][] |        \n");
	printf("    \\             _/       \n");
	printf("     \\___________/         \n");

	return 0;
}

int imprimeTrofeu (void)
{
	printf("       ___________      \n");
	printf("      '.=========.'     \n");
	printf("      .-\\:      /-.    \n");
	printf("     |( |:.     | )|    \n");
	printf("      '-|:.     |-'     \n");
	printf("        \\::.    /      \n");
	printf("         '::. .'        \n");
	printf("           ) (          \n");
	printf("         _.' '._        \n");
	printf("        '======='       \n");

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
	puts("     @@         @@@@@@@@    @@@   @@@    @@@@@@@@@  @@@     /@@");
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
	puts("     @@         @@@@@@@@    @@@   @@@    @@@@@@@@@  @@@     /@@");
	puts("");
	puts("");
	puts("");
	puts("");
	puts("               MENU (SELECIONE O TIPO DE JOGO)");
    puts("");
    puts("                    1 - JOGO MULTI JOGADOR");
    puts("                    2 - JOGO INDIVIDUAL");
    puts("");
	puts("                    3 - PONTUACOES");
	puts("");
	puts("");
	puts("");
	puts("");
	puts("                    CARAÚBAS; CENTURION; FRANCA.");
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
		printf("%c.\n", palavra[i]);
	}
	puts("");

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




int main(void) 
{
  	
	char controle='n';
  	int nivel=0;

 	/*while (controle!='s')
  	{
		system("clear");
		imprimeTrofeu();
        puts("\n");
        imprimeCranio();
        puts("\n");
		printf("nivel da forca: ");
		scanf(" %d", &nivel);
		setbuf(stdin, NULL);

		imprimeForca(nivel);
        
		printf("\nDeseja sair? ");
		scanf(" %c", &controle);
		setbuf(stdin, NULL);
  	}*/
	
	/*
	telaInical();
	getchar();
	telaMenu();
	*/
	
	int acertoTotal[30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int * nAcertos;
	int i, erros=0;
	char letraErrada[7] = "\0";
	char letra='b';
	char palavra[30]="constituicao";
	
	
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

	imprimeForca(erros);
	imprimeLetraErrada(letraErrada);
	imprimePalavra(palavra, acertoTotal);
	
	puts("");

  	return 0;
}