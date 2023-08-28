void AddGame(Lists *mylist)
{
	int ID, i;
	char tittle[20], developer[20];
	int device;
	nodeGame *new = (nodeGame *)malloc(sizeof(nodeGame));
	new ->next = NULL;
	printf("\n\n\t Ingrese el ID del Juego que desea AGREGAR: \n");
	scanf("%i", &(new->ID));
	printf("%i\n", new->ID);
	
	printf("\n\n\t Ingrese el TITULO del Juego que desea AGREGAR: \n");
	scanf("%s", new->tittle);
	printf("%s\n", new->tittle);
	
	fflush(stdin);
	printf("\n\n\t Ingrese de forma numerica el DISPOSITIVO con el cual es compatible este juego: \n");
	printf("PC = 1; PlayStation = 2; XBox = 3; Nintendo_Switch = 4\n");
	scanf ("%i", &(new->device));
	printf("%i\n", new->device);
	
	fflush(stdin);
	printf("\n\n\t Ingrese el nombre del DESARROLLADOR del juego que esta ingresando: \n");
	scanf("%s", new->developer);
	printf("%s\n", new->developer);
	
	printf("ACCION COMPLETADA\n");
	
	if(mylist ->first == NULL)
	{
	    printf("ACCION COMPLETADA\n");
	    mylist ->first = new;
	    new->next = NULL;
	}

	else
	{
		nodeGame *aux = mylist ->first;
		
		while (aux ->next != NULL)
		{
    		aux = aux ->next;
		}
		
		aux ->next = new;
	}
}
//Aquí quisiera, poder agregar los juegos a un txt, pero no estoy seguro de dónde meterlo...
//El FILE, hahaha
//Y el archivo que se pueda modificar...
