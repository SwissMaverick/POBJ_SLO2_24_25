// Caneva Ex1 SL228_POBJ language C++ 
// Visual Studio 2015
// 11.11.2016 C. Huber

#include <stdio.h>

int main (void)
{
	char UserAnswer;
	int ValA, ValB;
	// Variables pour test A et B
	short i;
	short ValB1;
	double  ValB2;

	printf("Exercice 1 : Huber Christian \n");
	printf("Solution en C a trandformer en C++ \n");


	do {
		printf("Test A ou B, Q pour Quitter \n");
		scanf_s("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				printf("TestA: entrez un nombre entre 1 et 9 \n");
				scanf_s("%d%*c", &ValA);

				if (ValA > 9)
				{
					ValA = 9;
					printf("TestA: ValA limitee a 9 \n");
				}
				if (ValA == 0)
				{
					ValA = 1;
					printf("TestA: ValA forcee a 1 \n");
				}
				if (ValA > 0 )  
				{
					printf("%d ", ValA);
					for (i=0; i < ValA ; i++)
					{
						printf ("*");
					}
					printf("\n"); // saut de ligne
				}
				else 
				{
					printf("TestA: ValA est negatif ! \n");
				}
			break;

			case 'B':
			case 'b':
				printf("TestB: entrez une valeur entre 0 et 9 \n");
				scanf_s("%d%*c", &ValB);
				
				if (ValB >= 0 && ValB <=9 )
				{
					for (i=0; i < ValB; i++) { 
						ValB1 = 100 + (10 * i);
						ValB2 = ValB1 / 10000.0;
						printf("TestB: i= %d ValB1 = %d ValB2 = %lf \n", i, ValB1, ValB2);
					}
				}
				else
				{
					printf("TestB: ValB n'est pas entre 0 et 9 ! \n");
				}
		break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}