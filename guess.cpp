#include <stdio.h> // Стандарный ввод-вывод
#include <stdlib.h>
#include <time.h>  // Управление временем

struct game{
	int range_left;
	int range_right;
	int tries;
	bool win;
};

void game_start(struct game game);
game game_init();
void output_menu();

int main()
{
	srand(time(NULL));
	output_menu();
	return 0;
}

void game_start(){

	int a, b;
	bool flag = false;
	a = rand() % 10;
	for (int i = 5; i > 0; i--) 
	{
		printf("You have %d tries \nGuess the number: ", i);
		scanf("%d", &b);
		if (a > b) printf("Bigger!\n");
		else 
		{
			if (a < b) printf("Lesser! \n");
			else
			{
				flag = true;
				break;
			}
		}
	}
	if (flag == true) printf ("Bingo! \nYou won! \n");
	else printf("Sorry! \nYou lose!\n");
}

void output_menu(){
	char input;
	bool isExit = false;
	printf ("Hello! \n");
	while (isExit == false){
	printf ("Do you wanna play the game? (y/n)\t");
	scanf("%c", &input);
		switch (input){
			case 'y': {
				game_start(game_init());
				break;
			};
			case 'n':{
				printf ("\nGoodbye! \n");
				isExit = true;
				break;
			};
			default: {
				printf ("\nI don't understand! Let's try again! \n");
				break;
			};
		}
	}
}

game game_init(){
	game new_game;
	new_game.range_left = 0;
	new_game.range_right = 10;
	new_game.tries = 5;
	new_game.win = false;

	return new_game;
}




