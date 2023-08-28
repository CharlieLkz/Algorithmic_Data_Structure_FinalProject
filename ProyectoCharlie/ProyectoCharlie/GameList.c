void GameList(Lists *mylist){
 //Este, estrictamente hablando va dentro del main; Inicializacion de GameList

    if (mylist ->first == NULL)
    {
        printf("\n\n\t OJO: La Lista esta vacia:\n");
    }
    else {
       	nodeGame *aux = mylist ->first;
        printf("\n\tID\tTITULO\tDISPOSITIVO_COMPATIBLE\tDESARROLLADOR\tESTA_PRESTADO?");
        printf("\n\t_________________________________________________________________");
        do
        {
        	printf("\n\t%i\t%s\t%i\t%s\t%c\n", aux->ID, aux->tittle, aux->device, aux->developer, aux->prestado); //%d en ves de char
        	aux = aux ->next;
        }while (aux != NULL);    
    }   
}
