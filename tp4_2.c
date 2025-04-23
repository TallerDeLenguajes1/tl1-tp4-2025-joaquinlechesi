#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Tarea{ 
    int TareaID;//Numérico autoincremental comenzando en 1000 
    char *Descripcion;  //       
    int Duracion; // entre 10 – 100  
};
struct Nodo{ 
    struct Tarea T;  
    struct Nodo *Siguiente;  
}; 
//struct Tarea crearTarea(int id, char * cadena, int duracion);
//struct Nodo * crearNodo(struct Tarea);
//void nuevaTarea(struct Nodo ** Lista, int *ID);
//void marcarTareaPorId(struct Nodo ** Lista, struct Nodo ** ListaRealizadas);
//void quitarTarea();
//struct Nodo crearNodo(int *ID);
//struct Tarea crearTarea(int ID, int duracion, char *descripcion);
//void agregarTarea(struct Nodo **Start, int *p_ID);
struct Nodo *crearListaVacia();
struct Nodo *crearNodo(int IDtarea, char *descripcion, int duracion);

int main()
{
    
    struct Nodo * TareasPendientes, * TareasRealizadas;
    TareasPendientes = crearListaVacia();
    TareasRealizadas = crearListaVacia();
    int tarea = 0, ID = 1000, longitud, duracion, *p_ID;
    p_ID = &ID;
    puts("Selecione una tarea: 1: Ingresar tareas, 2: Finalizar");
    scanf("%d", &tarea);
    while (tarea != 2)
    {
        
        //struct Nodo * nuevaTarea = (struct Nodo *)malloc(sizeof(struct Nodo));
        //nuevaTarea->Siguiente = NULL;
        //nuevaTarea->T.TareaID = ID;
        //puts("Ingrese la descripcion de la terea:");
        //fflush(stdin);
        //gets(Buff);
        //longitud = strlen(Buff) + 1;
        //nuevaTarea->T.Descripcion = (char *)malloc(sizeof(char) * longitud);
        //strcpy(nuevaTarea->T.Descripcion, Buff);
        //puts("Ingrese la duracion de la tarea:");
        //fflush(stdin);
        //scanf("%d", &duracion);
        //nuevaTarea->T.Duracion = duracion;
        //if (TareasPendientes == NULL)
        //{
        //    TareasPendientes = nuevaTarea;
        //    
        //}else
        //{
        //    struct Nodo * aux;
        //    aux = TareasPendientes;
        //    while (aux->Siguiente)
        //    {
        //        aux = aux->Siguiente;
        //    }
        //    aux->Siguiente = nuevaTarea;
        //}
        //
        //ID++;
        switch (tarea)
        {
            case 1:
            //nuevaTarea(&TareasPendientes, p_ID);
            /* code */
            break;
            
            default:
            break;
        }
        scanf("%d", &tarea);
        puts("Selecione una tarea: 1: Ingresar tareas, 2: Finalizar");
    }
    //puts("Prototipo de funcion marcar.");
    //if (TareasPendientes == NULL) //referencia a lo que apunta Lista (puntero doble)
    //{
    //    puts("La lista de tareas pendientes está vacia.");
    //}
    //else
    //{
    //    puts("Lista de tareas pendientes");
    //    int ID;
    //    struct Nodo *aux = TareasPendientes;
    //    while (aux)
    //    {
    //        printf("\nID: %d", aux->T.TareaID);
    //        aux = aux->Siguiente;
    //    }
    //    puts("Ingrese el ID de la tarea que desea marcar como pendiente.");
    //    scanf("%d", &ID);
    //    struct Nodo *aux2;
    //    aux = TareasPendientes;
    //    aux2 = TareasPendientes;
    //    while (aux && aux->T.TareaID != ID)
    //    {
    //        aux2 = aux;
    //        aux = aux->Siguiente;
    //    }
    //    aux2->Siguiente = aux->Siguiente->Siguiente;
    //    if (TareasRealizadas == NULL)
    //    {
    //        TareasRealizadas = aux;
//
    //    }else
    //    {
    //        struct Nodo * aux3;
    //        aux3 = TareasRealizadas; //contunar
//
    //        while (aux3->Siguiente)
    //        {
    //            aux3 = aux3->Siguiente;
    //        }
    //        aux3->Siguiente = aux;
    //    }
//
    //}
    
    
    return 0;
}

struct Nodo *crearListaVacia(){
    return NULL;
}

struct Nodo *crearNodo(int IDtarea, char *descripcion, int duracion){
    struct Nodo *nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nuevoNodo->Siguiente = NULL;
    nuevoNodo->T.TareaID = IDtarea;
    nuevoNodo->T.Descripcion = descripcion;
    nuevoNodo->T.Duracion = duracion;
}

//void agregarTarea(struct Nodo **Start, int *p_ID){
//    
//}

// void nuevaTarea(struct Nodo ** Lista, int *ID){
    // char Buff[100];
    // int longitud, duracion;
    // //struct Nodo * nuevaTarea = (struct Nodo *)malloc(sizeof(struct Nodo));
    // //struct Nodo * aux;
    // //aux = *Lista;
    // //nuevaTarea->Siguiente = NULL;
    // //nuevaTarea->T.TareaID = *ID;
    // (*ID)++;
    // puts("Ingrese la descripcion de la tarea:");
    // fflush(stdin);
    // gets(Buff);
    // longitud = strlen(Buff) + 1;
    // puts("Ingrese la duracion de la tarea:");
    // fflush(stdin);
    // scanf("%d", &duracion);
    // struct Nodo nuevaTarea = crearTarea(*ID, duracion);
    // nuevaTarea.T.Descripcion = (char *)malloc(sizeof(char) * longitud);
    // strcpy(nuevaTarea.T.Descripcion, Buff);
    // //nuevaTarea->T.Duracion = duracion;
    // if (*Lista == NULL)
    // {
        // *Lista = &nuevaTarea;
        
    // }else
    // {
        // struct Nodo * aux;
        // aux = *Lista; //contunar
        
        // while (aux->Siguiente)
        // {
            // aux = aux->Siguiente;
        // }
        // aux->Siguiente = &nuevaTarea;
    // }
// }

//void marcarTareaPorId(struct Nodo ** ListaPendientes, struct Nodo ** ListaRealizadas){
    // if (*ListaPendientes == NULL) //referencia a lo que apunta Lista (puntero doble)
    // {
    //     puts("La lista de tareas pendientes está vacia.");
    // }
    // else
    // {
    //     puts("Ingrese el ID de la tarea que desea marcar como pendiente.");
    //     struct Nodo *aux = *ListaPendientes;
    // }
    
//}

// struct Tarea crearTarea(int ID, int duracion, char *descripcion){
//     struct Tarea nuevaTarea;
//     nuevaTarea.TareaID = ID;
//     nuevaTarea.Duracion = duracion;
//     nuevaTarea.Descripcion = descripcion;
//     //nuevaTarea.Siguiente = NULL;
//     return nuevaTarea;
// }

// struct Nodo crearNodo(int *ID){
//     char Buff[100];
//     char *cadena;
//     int longitud, duracion;
//     puts("Ingrese la descripcion de la tarea.");
//     gets(Buff);
//     longitud = strlen(Buff) + 1;
//     cadena = (char *)malloc(sizeof(char) * longitud);
//     puts("Ingrese la duracion de la tarea:");
//     scanf("%d", &duracion);
//     struct Nodo nuevoNodo;
//     nuevoNodo.Siguiente = NULL;
//     nuevoNodo.T = crearTarea(*ID, duracion, cadena);
// }