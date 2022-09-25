#include <stdio.h> // Стандарный ввод-вывод
#include <stdlib.h>
#include <time.h>  // Управление временем

struct game{
	int range_left;
	int range_right;
	int tries;
	bool win;
};

void game_start(struct game game){};
void game_init(){};

void output_menu(){
	char input;
	printf ("Hello! \n Do you wanna play the game? (y/n)\t");
	scanf("%c", &input);
	switch (input){
		case 'y': {
			game new_game;
			game_init();
			game_start(new_game);
		};
	}
}

int main()
{
	srand(time(NULL));
	int left, right;
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
	return 0;
}









