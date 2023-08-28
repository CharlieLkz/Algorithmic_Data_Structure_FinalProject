typedef struct store
{
	int ID;
	char tittle[20];
	int device;
	char developer[20];
	int prestado;	//int
	struct store *next;
}nodeGame;

typedef struct pointers
{
	nodeGame *first;
}Lists;

#include <stdio.h>		//PROYECTO FINAL DE C
#include <stdlib.h>
#include <string.h>
#include "verificar.c"
#include "Compatibility.c"
#include "PrestarGame.c"
#include "DeleteGame.c"
#include "GameList.c"
#include "AddGame.c"
#include "menu.c"
