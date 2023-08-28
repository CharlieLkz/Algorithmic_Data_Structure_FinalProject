void DeleteGame (Lists *mylist){
    int IDdel;
    printf("\n\n\t Ingrese el ID del Juego que desea ELIMINAR: \n");
    scanf ("%d", &IDdel);
    if (mylist ->first == NULL)
{
    printf("\n\n\t OJO: La Lista esta vacia:\n");
}
    else{
        nodeGame *aux = mylist ->first;
        if (aux ->ID == IDdel)
        {
            mylist ->first = aux-> next;
            free (aux); //Libera la memoria reservada en aux
        }
        else{
            nodeGame *prev = NULL;
            do
            {
                prev = aux;
                aux = aux->next;
                if (aux ->ID == IDdel)
                {
                    prev ->next = aux ->next;
                    free (aux);
                }
            } while (aux-> next != NULL); 
        }
    }
}
