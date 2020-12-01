#ifndef figurasForca_h
#define figurasForca_h

int nivel;

int imprimeCranio (void)
{
	printf("              .--------------.\n");
	printf("             /                \\\n");
	printf("            /                  \\\n");
	printf("           |  \\\\ //    \\\\ //   |\n");
	printf("           |    /        /     |\n");
	printf("           |  // \\\\    // \\\\   |\n");
	printf("           |                   |\n");
	printf("           \\__      XXX      __/\n");
	printf("             |\\     XXX     /|\n");
	printf("             | |           | |\n");
	printf("             | |[][][][][][] |\n");
	printf("              \\ [][][][][][]_/\n");
	printf("               \\___________/\n");
	return 0;
}

int imprimeTrofeu (void)
{
	printf("               ___________\n");
	printf("              '.=========.'\n");
	printf("              .-\\:      /-.\n");
	printf("             |( |:.     | )|\n");
	printf("              '-|:.     |-'\n");
	printf("                \\::.    /\n");
	printf("                 '::. .' \n");
	printf("                   ) (   \n");
	printf("                 _.' '._ \n");
	printf("                '======='\n");
	return 1;
}

int imprimeFogos (void)
{
	printf("                                        .''.\n");
	printf("            .''.      .        *''*    :_\\/_:     .\n");
	printf("           :_\\/_:   _\\(/_  .:.*_\\/_*   : /\\ :  .'.:.'.\n");
	printf("       .''.: /\\ :   ./)\\   ':'* /\\ * :  '..'.  -=:o:=-\n");
	printf("      :_\\/_:'.:::.    ' *''*    * '.\\'/.' _\\(/_'.':'.'\n");
	printf("      : /\\ : :::::     *_\\/_*     -= o =-  /)\\    '  *\n");
	printf("       '..'  ':::'     * /\\ *     .'/.\\'.   '\n");
	printf("           *            *..*         :\n");
	printf("            *            *\n");
	printf("             *           *\n");
	return 1;
}

int imprimeRanking ()
{
	puts("");
	puts("");
	puts("                                                 \\0/");
	puts("                                       \\0         |");
	puts("                                        |-       / \\        0");
	puts("                                       / \\    %%%%%%%%%    -|-");
	puts("                                    %%%%%%%%% %% #1 %%%    / \\");
	puts("                                    %%%%%%%%% %%%%%%%%% %%%%%%%%% ");
	puts("");	
	puts("             @@@@@@@@      @@@@     @@@     @@@ @@@   @@@@  @@@ @@@@    @@@   @@@@@@@@@" );
	puts("             @@@   @@@    @@@@@@    @@@@@   @@@ @@@ @@@@    @@@ @@@@@   @@@ @@@@        ");
	puts("             @@@@@@@@@   @@@  @@@   @@@*@@@ @@@ @@@@@@      @@@ @@@ @@@ @@@ @@@   @@@@@@");
	puts("             @@@ @@@,   @@@@@@@@@@  @@@  @@@@@@ @@@ @@@@    @@@ @@@  @@@@@@ @@@@     @@@");
	puts("             @@@   @@@ @@@      @@@ @@@    @@@@ @@@   @@@@  @@@ @@@    @@@@   @@@@@@@@@" );
	puts("");
	puts("");
	return 0;
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
	puts("                    1 - JOGO INDIVIDUAL ( 1 VS. PC )");
	puts("                    2 - JOGO MULTI JOGADOR ( 1 VS. 1 )");
	puts("                    3 - PONTUAÇÕES");
	puts("                    4 - SAIR");
	puts("");
	puts("");
	puts("");
	puts("");
	puts("");
	puts("                              UNIPE, 2020.");
	puts("");
    return 1;
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

#endif 
