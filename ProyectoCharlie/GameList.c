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
        	printf("\n\t%i\t%s\t%i\t%s\t", aux->ID, aux->tittle, aux->device, aux->developer); //%d en ves de char
            if(aux->prestado == 0)
                printf("NO\n");
            else
                printf("SI\n");
        	aux = aux ->next;
        }while (aux != NULL);    
    }   
}
