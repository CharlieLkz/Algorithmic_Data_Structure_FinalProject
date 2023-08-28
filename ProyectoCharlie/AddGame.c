int AddGame(Lists *mylist)
{
	nodeGame *new = (nodeGame *)malloc(sizeof(nodeGame));
	new->next = NULL;
	fflush(stdin);
	printf("\nIngrese el ID del Juego que desea AGREGAR: \n");
	if(scanf("%i", &(new->ID)) != 1 || new->ID <= 0 || verificar(mylist, new->ID) != 1)
	{
		puts("ID INVALIDO");
		return 0;
	}
	
	printf("\nIngrese el TITULO del Juego que desea AGREGAR: \n");
	fflush(stdin);
	scanf("%s", new->tittle);
	if(strlen(new->tittle) < 2)
	{
		puts("NOMBRE INVALIDO");
		return 0;
	}
	fflush(stdin);
	printf("\n Ingrese de forma numerica el DISPOSITIVO con el cual es compatible este juego: \n");
	printf("PC = 1; PlayStation = 2; XBox = 3; Nintendo_Switch = 4; Smartphone = 5\n");
	if(scanf("%i", &(new->device)) != 1 || new->device < 1 || new->device > 5)
	{
		puts("PLATAFORMA INVALIDA");
		return 0;
	}
	
	fflush(stdin);
	printf("\n Ingrese el nombre del DESARROLLADOR del juego que esta ingresando: \n");
	scanf("%s", new->developer);
	if(strlen(new->developer) < 3)
	{
		puts("NOMBRE INVALIDO");
		return 0;
	}
	
	new->prestado = 0;//si es cero es porque NO esta prestado

	if(mylist->first == NULL)
	    mylist->first = new;

	else
	{
		nodeGame *aux = mylist->first;
		mylist->first = new;
		mylist->first->next = aux;
	}
	
	return 1;
}