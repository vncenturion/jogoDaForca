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
			printf("xxxxxxxxxxxx\n");
			printf("||  //     |\n");
			printf("|| //     ( )\n");
			printf("||//      _|_\n");
			printf("||/      /[X]\\\n");
			printf("||      / [X] \\\n");
			printf("||        ( )\n");
			printf("||       /   \\\n");
			printf("||      /     \\\n");
			printf("||              \n");
			printf("||_______________.\n");
			printf("|| 1 2 3 4 5 6 7 |\n");
			printf("||XXXXXXXXXXXXXXX|\n");
		break;
		case 6:
			printf("xxxxxxxxxxxx\n");
			printf("||  //     |\n");
			printf("|| //     ( )\n");
			printf("||//      _|_\n");
			printf("||/      /[X]\\\n");
			printf("||      / [X] \\\n");
			printf("||        ( )\n");
			printf("||       /   \n");
			printf("||      /    \n");
			printf("||           \n");
			printf("||_______________.\n");
			printf("|| 1 2 3 4 5 6   |\n");
			printf("||XXXXXXXXXXXXXXX|\n");
		break;
		case 5:
			printf("xxxxxxxxxxxx\n");
			printf("||  //     |\n");
			printf("|| //     ( )\n");
			printf("||//      _|_\n");
			printf("||/      /[X]\\\n");
			printf("||      / [X] \\\n");
			printf("||        ( )\n");
			printf("||        \n");
			printf("||        \n");
			printf("||        \n");
			printf("||_______________.\n");
			printf("|| 1 2 3 4 5     |\n");
			printf("||XXXXXXXXXXXXXXX|\n");
		break;
		case 4:
			printf("xxxxxxxxxxxx\n");
			printf("||  //     |\n");
			printf("|| //     ( )\n");
			printf("||//      _|_\n");
			printf("||/      /[X]\\\n");
			printf("||      / [X] \\\n");
			printf("||        \n");
			printf("||        \n");
			printf("||        \n");
			printf("||        \n");
			printf("||_______________.\n");
			printf("|| 1 2 3 4       |\n");
			printf("||XXXXXXXXXXXXXXX|\n");
		break;
		case 3:
			printf("xxxxxxxxxxxx\n");
			printf("||  //     |\n");
			printf("|| //     ( )\n");
			printf("||//      _|_\n");
			printf("||/      /[X]\n");
			printf("||      / [X]\n");
			printf("||        \n");
			printf("||        \n");
			printf("||        \n");
			printf("||        \n");
			printf("||_______________.\n");
			printf("|| 1 2 3         |\n");
			printf("||XXXXXXXXXXXXXXX|\n");
		break;
		case 2:
			printf("xxxxxxxxxxxx\n");
			printf("||  //     |\n");
			printf("|| //     ( )\n");
			printf("||//      _|_\n");
			printf("||/       [X]\n");
			printf("||        [X]\n");
			printf("||        \n");
			printf("||        \n");
			printf("||        \n");
			printf("||        \n");
			printf("||_______________.\n");
			printf("|| 1 2           |\n");
			printf("||XXXXXXXXXXXXXXX|\n");
		break;
		case 1:
			printf("xxxxxxxxxxxx\n");
			printf("||  //     |\n");
			printf("|| //     ( )\n");
			printf("||//        \n");
			printf("||/       \n");
			printf("||        \n");
			printf("||        \n");
			printf("||        \n");
			printf("||        \n");
			printf("||        \n");
			printf("||_______________.\n");
			printf("|| 1             |\n");
			printf("||XXXXXXXXXXXXXXX|\n");
		break;
		case 0:
			printf("xxxxxxxxxxxx\n");
			printf("||  //     |\n");
			printf("|| //       \n");
			printf("||//        \n");
			printf("||/       \n");
			printf("||        \n");
			printf("||        \n");
			printf("||        \n");
			printf("||        \n");
			printf("||        \n");
			printf("||_______________.\n");
			printf("||               |\n");
			printf("||XXXXXXXXXXXXXXX|\n");
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
    puts("            @@@@@     @@@@@@@@@@@(        @@@@@@@@@@@        @@@@@@@@@@@");
    puts("            @@@@@   @@@@@@    @@@@@@    @@@@@@    @@@*     @@@@@@   @@@@@@/");
    puts("            @@@@@  @@@@@        @@@@@  @@@@              @@@@@         @@@@@");
    puts("            @@@@@ @@@@@          @@@@ @@@@@    @@@@@@@@@ @@@@@         @@@@@");
    puts("            @@@@@  @@@@         @@@@@ &@@@@         @@@@ @@@@@         @@@@@");
    puts("            @@@@@  @@@@@@      @@@@@   @@@@@@      @@@@   @@@@@@     @@@@@@");
    puts("       @@@@@@@@@     @@@@@@@@@@@@@       @@@@@@@@@@@@@      @@@@@@@@@@@@@");
    puts("");
    puts("");
    puts("         %%%%%/                %%%%");
    puts("         @@@@@@@@@@@.         @@@@@@");
    puts("         @@@@    @@@@@       @@@@@@@@");
    puts("         @@@@      @@@@     @@@@  @@@@");
    puts("         @@@@      @@@@    @@@@   &@@@@");
    puts("         @@@@     @@@@@   @@@@@@@@@@@@@@");
    puts("         @@@@@@@@@@@@@   @@@@       @@@@@");
    puts("         @@@@@@@@@@     @@@@         @@@@@");
    puts("");
    puts("");
    puts("         @@@@@@@@@@      @@@@@@@@@@      @@@@@@@@@@@          @@@@@@@@@@        @@@@@");
    puts("         @@@@@@@@@@   #@@@@@@@@@@@@@@@   @@@@@ @@@@@@@     @@@@@@@@@@@@@       @@@@@@@");
    puts("         @@@@        @@@@@        @@@@@  @@@@@    @@@@   @@@@@@               @@@@@@@@@");
    puts("         @@@@@@@@@@  @@@@          @@@@  @@@@@@@@@@@@    @@@@                @@@@  @@@@@");
    puts("         @@@@@@@@@@  @@@@          @@@@  @@@@@@@@@       @@@@@              @@@@    @@@@@");
    puts("         @@@@        @@@@@(      (@@@@@  @@@@@ @@@@@      @@@@@            @@@@@@@@@@@@@@@");
    puts("         @@@@          @@@@@@@@@@@@@@    @@@@@   @@@@@     *@@@@@@@@@@@@  @@@@        @@@@@");
    puts("         @@@@             %@@@@@@/       @@@@@     @@@@@(      @@@@@@@@  @@@@          @@@@@");
    puts("");
    puts("");
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
    puts("     MENU (SELECIONE O TIPO DE JOGO)");
    puts("");
    puts("          1 - JOGO MULTI JOGADOR");
    puts("          2 - JOGO INDIVIDUAL");
    puts("");
    puts("          3 - PONTUACOES");
    puts("");
    puts("");
    puts("");
    puts("");
    puts("          CARAÚBAS; CENTURION; FRANCA.");
    puts("          UNIPE, 2020.");
    puts("");
    return 1;
}

int main(void) 
{
  	
	char controle='n';
  	int nivel=0;

 	while (controle!='s')
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
  	}

  	return 0;
}