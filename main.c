#include<stdio.h>
//in tabe nobat ra avaz karde va rang har bazikon ra change mikonad

    void next_turn (int &turn){
	if(turn == 1){
		turn = 2;
		system("COLOR 0B");
        printf("player B");

	}else{
		turn = 1;
		system("COLOR 0C");
        printf("player A");

	}
}



