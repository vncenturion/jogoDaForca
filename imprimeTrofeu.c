#include <stdio.h>
#include <stdlib.h>

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
	return 0;
}

int main(void) {
  	
	char controle='n';
  	int nivel=0;

 	while (controle!='s')
  	{
		system("clear");
		imprimeTrofeu();
		printf("\nDeseja sair? ");
		scanf(" %c", &controle);
		setbuf(stdin, NULL);
  	}

  	return 0;
}