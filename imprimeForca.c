#include <stdio.h>
#include <stdlib.h>

int imprimeForca (nivel)
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
}

int main(void) {
  	
	char controle='n';
  	int nivel=0;

 	while (controle!='s')
  	{
		system("clear");
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