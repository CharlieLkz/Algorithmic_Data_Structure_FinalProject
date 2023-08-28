#include <stdio.h>		//PROYECTO FINAL DE C
#include <stdlib.h>
#include <string.h>
typedef struct store
{
	int ID;
	char tittle[20];
	int device;
	char developer [20];
	char prestado;	//int
	struct store *next;
}nodeGame;
typedef struct pointers
{
	nodeGame *first;
	int A;
	char nombre[10];
}Lists;

#include "Compatibility.c"
#include "PrestarGame.c"
#include "DeleteGame.c"
#include "GameList.c"
#include "AddGame.c"
#include "menu.c"			