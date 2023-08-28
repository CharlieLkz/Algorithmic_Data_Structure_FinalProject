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
    /*Aquí siento que le podría agregar un poco más, sólo presta el juego; o sea usa cola, para cumplir con el requisito, 
    pero siento, que podría hacer más*/
