int menu (){
    struct pointers;
    Lists mylist = {NULL};
    int opc;
    while (1){  
        printf("PROYECTO FINAL DE LENGUAJE C\n\n\t");
        printf("Lazcano-Vasquez Carlos\n Grupo: 10\n\t");
        printf("----BIENVENIDO A GAMIMG PLANET---- \n\n\t");
        printf("Elija la opcion que desee ejecutar primero:\n");
        printf("1) AGREGAR JUEGO A LA COLECCION\n");
        printf("2) MOSTRAR COLECCION\n");
        printf("3) ELIMINAR JUEGO\n");
        printf("4) PRESTAR JUEGO\n");
        printf("5) COMPATIBILIDAD DE DISPOSITIVOS\n");
        printf("6) SALIR\n");
        printf("_________________________________________________");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            if(AddGame(&mylist) != 1)
                puts("JUEGO NO AGREGADO");
            break;
        case 2:
            GameList(&mylist);
            break;
        case 3:
            DeleteGame(&mylist);
            break;
        case 4:
            PrestarGame (&mylist);
            break;
        case 5:
            Compatibility (&mylist);
            break;
        case 6:
        printf("\n\n\t Muchas Gracias por preferir Gaming Planet, vuelva pronto!\n\n\t");
            return 1;
        default:
            printf("ERROR! Opcion invalida!\n\n");
            break;
        }
    }
}
//Este creo que sí está bien, but recheck, just in case
