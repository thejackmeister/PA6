#include "PA6.h"





//void welcome_screen(void)
//{
//	printf("***BATTLESHIP***\n");
//	printf("Battleship is a two player Navy game.\n");
//	printf("The objective of the game is to sink all ships in your enemy's fleet.\n");
//	printf("The Player to sink his/her enemy's fleet first wins.\n");
//	printf("Both players' fleets consist of 5 ships, the carrier(5), battleship(4), cruiser(3), submaine(3), and destroyer(2).\n");
//	printf("Place your ships on the board.\n");
//	printf("Call coordinates of where you think the opponents ships are, if you hit all of the segments of their ship, you sunk thier battlship.\n");
//	printf("The player to shink all of the");
//	printf("***GOOD LUck****\n\n");
//
//	return;
//}


void manually_place_ships_on_board(char board[][10], char *battleshipsChosen[5], int ships_placed)
{
	 int row = 0, column = 0, i = 0;
	 bool selectionValid = false; 
	 char type_of_ship ='\0';

	printf("Enter the coordinates of your ship in the form X Y from 0 to 9.\n");
	scanf("%d%d",&row, &column);

	
	printf("Enter the type of ship as a Carrier(c), Battleship(b), Cruiser(r), Submarine(s) or Destroyer(d).\n");
	scanf("%c", &type_of_ship);
	while (!selectionValid) {
		for(i = 0; i<ships_placed; i++){
			if (*battleshipsChosen[i] == type_of_ship ) {
				printf("its wrong try again \n");
				scanf("%c", &type_of_ship);
				continue;
			}
		selectionValid = true;
		*battleshipsChosen[ships_placed] = type_of_ship;
		}
	}
	//if(type_of_ship 

	//printf("Enter the direction you want your ship to be placed as either Verticle (v), 






//int generate_direction (void)
//{
//	direction = 0;
//
//	direction = rand() % 2 + 1;
//
//	if( direction == 1) // horizontal
//	{
//		return direction;
//	}
//	else // verticle 
//	{