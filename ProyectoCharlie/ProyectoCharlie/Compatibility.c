void Compatibility (Lists *mylist){
	
    int IDdevice;
    printf("\n\n\t Ingrese de forma numerica el DISPOSITIVO que esta buscando: \n");
    printf("PC = 1; PlayStation = 2; XBox = 3; Nintendo_Switch = 4\n");
    scanf ("%d",&IDdevice);
    
    if (mylist ->first == NULL)
    {
    	printf("\n\n\t OJO: La Lista esta vacia:\n");
    }
    
    else
	{
        nodeGame *aux = mylist-> first;
        printf("\n\tID\tTITULO\tDISPOSITIVO_COMPATIBLE\tDESARROLLADOR\tESTA_PRESTADO?");
        printf("\n\t_________________________________________________________________");   
      	do
    	{
        	if (aux-> device == IDdevice)
        	{
    			printf("\n\t%d\t%s\t%d\t%s\t%c", aux->ID, aux->tittle, aux->device, aux->developer, aux->prestado); //%d en ves de char
        	}
    		//*aux = *(aux) ->next;
    		aux = aux ->next;
    	} while (aux != NULL);    
 	}
}
/*El chiste de este es que 
El usuario ingrese un número correspondiente a una plataforma, y el programa regrese, de los juegos enlistados
cuales son compatibles con dicha plataforma */

//Hay varios detalles, pero digamos que el principal, es unir los subarchivos, para que trabajen en conjunto
//Lo demás según yo está bien, si le faltan más cosas, please, avísame, y lo mejoramos...
//De verdad muchas gracias por revisarlo... 
