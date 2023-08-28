void PrestarGame(Lists *mylist){
    int lendGame;
    printf("\n\n\t Ingrese el ID del juego a prestar: \n|");
    scanf ("%d",&lendGame);
        if (mylist ->first == NULL)
        {
        printf("\n\n\t OJO: La Lista esta vacia:\n");
        }
        else{
            nodeGame *aux = mylist ->first;
            do
            {
                if (aux->ID == lendGame)
                {
                    aux ->prestado = 1;
                }
                aux = aux ->next;
            } while (aux ->next != NULL);
        }   
    }
    //Que imprima la lista en un .dat
    //Añadir la info que contienen los nodos al .dat
    //Modificacion constante sobreescribir 