#include <stdio.h>
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

int main(void) {
  	
	char controle='n';
  	int nivel=0;

 	while (controle!='s')
  	{
		system("clear");
		imprimeCranio();
		printf("\nDeseja sair? ");
		scanf(" %c", &controle);
		setbuf(stdin, NULL);
  	}

  	return 0;
}