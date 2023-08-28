int verificar(Lists *lista, int id)
{
    if(lista->first == NULL)
        return 1;
    
    nodeGame *aux = lista->first;
    while(aux != NULL)
    {
        if(aux->ID == id)
            return 0;
        
        aux = aux ->next;
    }
    return 1;
}