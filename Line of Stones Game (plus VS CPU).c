#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h> 
#include <time.h> 

// Nama Kelompok :
// Muhammad Ilham Akbar / 1706042970
// Muhammad Hamzah / 1706043065


// structure of line of stones
struct LineStone {   
  char* unit_stone;
  struct LineStone *next; 
  char mode[100];
};

typedef struct LineStone Stack;
typedef Stack *StackNodePtr;

// function prototypes
void push(StackNodePtr *top, char stone_type[100]);
char* pop(StackNodePtr *top);
char* popB(StackNodePtr *top);
char Empty(StackNodePtr top);
void printd(char* x, int y);
void show_current_line(StackNodePtr current);
void menu(void);
void Game_header(struct LineStone *game ,int stone_amount);
void GameA_playerturn(int player, char player_name[100]);
void GameB_playerturn(int player, char player_name[100]);
void WinnerA(char stone15[100], int player);
void option();
int GameA(); //modular mode game A
int GameB(); //modular mode game B
int GameC(); //modular mode game C
int GameD(); //modular mode game D
void help(); //modular menu help
int x=0;
 
void menu(void) {
	printf("\n\t\t\t\t LINE OF STONES GAME\n\n"
	"\t\t\t\t\tMENU\n\n"
	"\t\t\t1 Game A (add to 15)\n"
	"\t\t\t2 Game B (remove from 15)\n"
	"\t\t\t3 Game C (Game A, VS CPU)\n"
	"\t\t\t4 Game D (Game B, VS CPU)\n"
	"\t\t\t9 Help & Instructions\n"
	"\t\t\t0 Exit\n"
	"\n\t\t\tPress the key number of\n"
	"\t\t\tthe Game you want : ");
}

void option() {
	char node;
	switch(getch()) {
		case '1' :
			GameA();
			main();
		case '2' :
			GameB();
			main();
		case '3' :
			GameC();
			main();
		case '4' :
			GameD();
			main();
		case '9' :
			help();
			main();
		case '0' :
			printf("\n\n\t\t\t\tGoodbye.\n\t\t\t");
			system("pause");
			exit(0);
		default :
			printf(" Wrong. ");
			system("pause");
			main();
	}
}

void Game_header(struct LineStone *game ,int stone_amount) {
	printf("\n\t\t\t\t LINE OF STONES GAME\n\n"
		   "\t\t\t\t\t%s\n\n"
		   "\t\t\tStone(s) in Line : %d\n\n\t\t\t", game->mode, stone_amount);
}

void GameA_playerturn(int player, char player_name[100]) {
	printf("\t\t\tPlayer %d : %s's turn\n"
		   "\t\t\tAdd between 1 to 3 stone(s) : ", player, player_name);
}

void GameB_playerturn(int player, char player_name[100]) {
	printf("\t\t\tPlayer %d : %s's turn\n"
		   "\t\t\tRemove between 1 to 3 stone(s) : ", player, player_name);
}

void WinnerA(char stone15[100], int player){
 	printf("\t\t\t\t 15th stone is %s\n", stone15);
 	printf("\t\t\t\t  Player %d WIN\n\n\t\t\t", player);
}

int GameA() {
	int value = 0, last_played, add1, add2, adder, winner;
	char player1[100], player2[100];
	Stack Stack1;
	strcpy (Stack1.mode, "Game A");
	StackNodePtr pStack = NULL;
   	char stone1[100] = {'O'};
   	char stone2[100] = {'[',']'};
   	printf ("GAME A"
	   "\n\n\t\t\tEnter Name Player 1 : ");
   	scanf ("%s", &player1);
   	printf ("\n\t\t\tEnter Name Player 2 : ");
   	scanf ("%s", &player2);
   	while(value < 15) {
   		system("cls");
   		Game_header(&Stack1, value);
   		show_current_line(pStack);
   		last_played = 1;
   		GameA_playerturn(last_played, player1);
		scanf("%d",&add1);
			while(add1 > 3) {
				printf("\n\t\t\tToo much. Add between 1 to 3.\n\t\t\t");
				system("pause");
				system("cls");
				Game_header(&Stack1, value);
				show_current_line(pStack);
   				GameA_playerturn(last_played, player1);
				scanf("%d", &add1);
			}
			for(adder = 0; adder < add1; adder ++) {
				push(&pStack, stone1);
			}
		value = value + add1;
		system("cls");
		Game_header(&Stack1, value);
		show_current_line(pStack);
			if(value >= 15) {
				break;
			}
		last_played = 2;
   		GameA_playerturn(last_played, player2);
		scanf("%d",&add2);
			while(add2 > 3) {
				printf("\n\t\t\tToo much. Add between 1 to 3.\n\t\t\t");
				system("pause");
				system("cls");
				Game_header(&Stack1, value);
				show_current_line(pStack);
				GameA_playerturn(last_played, player2);
				scanf("%d", &add2);
			}
			for(adder = 0; adder < add2; adder ++) {
				push(&pStack, stone2);
			}
		value = value + add2;
		system("cls");
		Game_header(&Stack1, value);
		show_current_line(pStack);
			if(value >= 15) {
				break;
			}
	}
	pop(&pStack);
	WinnerA(pop(&pStack), last_played);
   	system("pause");
}

int GameB()
{
	int value = 15, last_played, stone_remove, cc;
	char player1[100], player2[100];
   	char stone[100] = {'x'};
   	Stack Stack2;
	strcpy (Stack2.mode, "Game B");
   	StackNodePtr pStack = NULL;
   	printf ("GAME B"
	   "\n\n\t\t\tEnter Name Player 1 : ");
   	scanf ("%s", &player1);
   	printf ("\n\t\t\tEnter Name Player 2 : ");
   	scanf ("%s", &player2);
   		for(cc = 0; cc < value; cc ++) {
			push(&pStack, stone);
		}
   	while(value > 0) {
   		system("cls");
   		Game_header(&Stack2, value); 
   		show_current_line(pStack);
   		last_played = 1;
   		GameB_playerturn(last_played, player1);
   		scanf ("%d", &stone_remove);
   		while (stone_remove>3){
   			printf("\n\t\t\tToo much. Add between 1 to 3.\n\t\t\t");
			system("pause");
			system("cls");
			Game_header(&Stack2, value);
			show_current_line(pStack);
   			GameB_playerturn(last_played, player1);
			scanf("%d", &stone_remove);
		}
		if (value<=3){
			if(stone_remove > value){
				stone_remove = value;
			}
		}
		for( cc= 0; cc < stone_remove; cc ++) {
			pop (&pStack);
		}
		value = value - stone_remove;
		system("cls");
		Game_header(&Stack2, value);
		show_current_line(pStack);
			if(value <= 0) {
				break;
			}
		last_played = 2;
   		GameB_playerturn(last_played, player2);
		scanf("%d",&stone_remove);
		while(stone_remove > 3) {
			printf("\n\t\t\tToo much. Add between 1 to 3.\n\t\t\t");
			system("pause");
			system("cls");
			Game_header(&Stack2, value);
			show_current_line(pStack);
			GameB_playerturn(last_played, player2);
			scanf("%d", &stone_remove);
		}
		if (value<=3){
			if(stone_remove > value){
				stone_remove = value;
			}
		}
		for(cc = 0; cc < stone_remove; cc ++) {
			pop(&pStack);
		}
		value = value - stone_remove;
		system("cls");
		Game_header(&Stack2, value);
		show_current_line(pStack);
			if(value <= 0) {
				break;
			}
	}
	printf ( "\t\t\t\t Player %d WIN \n\n\t\t\t ", last_played);
  	system("pause");
}

int GameC() {
	int value = 0, last_played, add1, add2, adder, winner;
	char player1[100], player2[100];
	srand(time(NULL));
	Stack Stack1;
	strcpy (Stack1.mode, "Game C");
	StackNodePtr pStack = NULL;
   	char stone1[100] = {'O'};
   	char stone2[100] = {'[',']'};
   	printf ("GAME C"
	   "\n\n\t\t\tEnter Name Player 1 : ");
   	scanf ("%s", &player1);
   	strcpy(player2, "CPU");
   	while(value < 15) {
   		system("cls");
   		Game_header(&Stack1, value);
   		show_current_line(pStack);
   		last_played = 1;
   		GameA_playerturn(last_played, player1);
		scanf("%d",&add1);
			while(add1 > 3) {
				printf("\n\t\t\tToo much. Add between 1 to 3.\n\t\t\t");
				system("pause");
				system("cls");
				Game_header(&Stack1, value);
				show_current_line(pStack);
   				GameA_playerturn(last_played, player1);
				scanf("%d", &add1);
			}
			for(adder = 0; adder < add1; adder ++) {
				push(&pStack, stone1);
			}
		value = value + add1;
		system("cls");
		Game_header(&Stack1, value);
		show_current_line(pStack);
			if(value >= 15) {
				break;
			}
		last_played = 2;
   		GameA_playerturn(last_played, player2);
   		printd(". . . ", 150);
   		add2 = rand() % 3 + 1;
			for(adder = 0; adder < add2; adder ++) {
				push(&pStack, stone2);
			}
		value = value + add2;
		system("cls");
		Game_header(&Stack1, value);
		show_current_line(pStack);
			if(value >= 15) {
				break;
			}
	}
	pop(&pStack);
	WinnerA(pop(&pStack), last_played);
   	system("pause");
}

int GameD()
{
	int value = 15, last_played, stone_remove, cc;
	char player1[100], player2[100];
   	char stone[100] = {'x'};
   	srand(time(NULL));
   	Stack Stack2;
	strcpy (Stack2.mode, "Game D");
   	StackNodePtr pStack = NULL;
   	printf ("GAME D"
	   "\n\n\t\t\tEnter Name Player 1 : ");
   	scanf ("%s", &player1);
   	strcpy(player2, "CPU");
   		for(cc = 0; cc < value; cc ++) {
			push(&pStack, stone);
		}
   	while(value > 0) {
   		system("cls");
   		Game_header(&Stack2, value); 
   		show_current_line(pStack);
   		last_played = 1;
   		GameB_playerturn(last_played, player1);
   		scanf ("%d", &stone_remove);
   		while (stone_remove>3){
   			printf("\n\t\t\tToo much. Add between 1 to 3.\n\t\t\t");
			system("pause");
			system("cls");
			Game_header(&Stack2, value);
			show_current_line(pStack);
   			GameB_playerturn(last_played, player1);
			scanf("%d", &stone_remove);
		}
		if (value<=3){
			if(stone_remove > value){
				stone_remove = value;
			}
		}
		for( cc= 0; cc < stone_remove; cc ++) {
			pop (&pStack);
		}
		value = value - stone_remove;
		system("cls");
		Game_header(&Stack2, value);
		show_current_line(pStack);
			if(value <= 0) {
				break;
			}
		last_played = 2;
   		GameB_playerturn(last_played, player2);
   		printd(". . . ", 150);
   		stone_remove = rand() % 3 + 1;
		if (value<=3){
			if(stone_remove > value){
				stone_remove = value;
			}
		}
		for(cc = 0; cc < stone_remove; cc ++) {
			pop(&pStack);
		}
		value = value - stone_remove;
		system("cls");
		Game_header(&Stack2, value);
		show_current_line(pStack);
			if(value <= 0) {
				break;
			}
	}
	printf ( "\t\t\t\t Player %d WIN \n\n\t\t\t ", last_played);
  	system("pause");
}

void help() {
	system("cls");
	printf("\n\t\t\t\t LINE OF STONES GAME\n\n"
		"\t\t\t\t\tHELP\n\n"
		"\t\t\tGame A :\n"
		"\t\t\tTwo players just add betweeen 1 to 3 stone(s)\n"
		"\t\t\tto get that their stone becomes 15th stone to win.\n\n"
		"\t\t\t\tLine of stone(s) (example) : [] O [] O [] \n"
		"\t\t\t\tO\tPlayer 1 stone\n"
		"\t\t\t\t[]\tPlayer 2 stone\n\n"
		"\t\t\tGame B :\n"
		"\t\t\tTwo players just remove betweeen 1 to 3 stone(s)\n"
		"\t\t\teach turn until no stones to win.\n\n"
		"\t\t\t\tLine of stone(s) (example) : X X X X \n\n\n\t\t\t"
		);
	system("pause");
	main();
}

void push(StackNodePtr *top, char stone_type[100]) {
	StackNodePtr pNew;
   	pNew = malloc(sizeof(Stack));
   	if (pNew != NULL) {  
      	pNew->unit_stone = stone_type;
      	pNew->next = *top; // insert at top of stack
      	*top = pNew;
   	}
  	else {
		printf("Not available.\n");
	}
} 
 
char* pop(StackNodePtr *top) {
   	StackNodePtr temp;
   	char *popStone = {0};
   	temp = *top; // attach a pointer to element to be removed
   	popStone = (*top)->unit_stone; 
   	*top = (*top)->next; // remove the latest stone added
   	free(temp); // release the popped stone and set it free!
   	return popStone;
   		if(*top == NULL) {
       		printf("Line : Empty");
   		}
}

void show_current_line(StackNodePtr current) { 
   if (current == NULL) {
      printf("Line : Empty\n\n");
   }
   else { 
      printf("Line : LATEST \t");
      while (current != NULL) { 
         printf("%s ", current->unit_stone);
         current = current->next; // move to next element
      }
      printf("\tFIRST\n\n");
   }
}

char Empty(StackNodePtr top) { 
   return top == NULL;
}

void printd(char* x, int y)
{
	int i;
	for(i=0;i<strlen(x);i++)
	{
		printf("%c",x[i]);
		Sleep(y);
	}
}

int main() {
	if (x==0)
	{
		printf("\n\n\n\n\n\n");
		printf("                        ");
		printd("     WELCOME TO LINE OF STONES GAME",45);
		Sleep(500);
		printf("\n\n\t\t\t\t ");
    	system("pause");
	};
	
	x=x+1;
	int opt;
	system("cls");
	menu();
	option();
    return 0;
}
