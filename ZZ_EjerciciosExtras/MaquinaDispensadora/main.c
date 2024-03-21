#include <string.h>
#include <stdio.h>

// estructura que usaremos tanto para crear los propios productos como para printear las cosas
struct Producto {
    int idProducto;
    char nombre[15];
    int precio ;
    int stock;
};

void incluirValores (struct Producto *producto, int IdDelProducto, char *nombre, int precio, int stock){
    producto->idProducto = IdDelProducto;
    strcpy(producto->nombre, nombre);
    producto->precio = precio;
    producto->stock = stock;
}

void mostrarTodosProductos (struct Producto *listaDeProductos, int totalProductos){
    printf("Tenemos disponible:\n");
    int i = 0;
    while (i < totalProductos)
    {
        printf("%s Precio: %d€ Stock: %d \n", listaDeProductos[i].nombre, listaDeProductos[i].precio, listaDeProductos[i].stock);
        i++;
    }  
}

int mostrarProductoConcreto (struct Producto *listaDeProductos, int productoSeleccionado, int totalProductos){
    int i = 0;
    while (i < totalProductos)
    {
        if (listaDeProductos[i].idProducto == productoSeleccionado){
            printf("Aqui tienes tu producto:\n %s Precio: %d€ Stock: %d", listaDeProductos[i].nombre, listaDeProductos[i].precio, listaDeProductos[i].stock);
            return 0;
        }
        i++;
    }
    printf("Producto no encontrado");
    return 0;
}

int main() {
    int seleccion = 9;
    int cambio = 300;
    int dineroInsertado = 40;

    //? Creacion de la maquina y asignacion de productos
    // Cantidad de productos que tendra la maquina
    const int cantidadProductos = 5;
    //creamos el array de productos
    struct Producto productos[cantidadProductos];
    // Asignar valores a los productos
    incluirValores(&productos[0], 0, "Coca Cola", 1, 20);
    incluirValores(&productos[1], 1, "Fanta", 2, 15);
    incluirValores(&productos[2], 2, "Acuarius", 3, 15);
    incluirValores(&productos[3], 3, "7Up", 2, 2);
    incluirValores(&productos[4], 4, "Monster", 6, 40);

    //? FUNCIONALIDADES
    // Mostrar los productos
    mostrarTodosProductos(productos, cantidadProductos);

    // Mostrar valores de un producto
    mostrarProductoConcreto(productos, seleccion, cantidadProductos);

    // COMPRAR UN PRODUCTO
    // 1- Buscamos si existe el producto
    // 2- Miramos su stock
    // 3- comprovamos el precio que tiene con el dinero que ha metido en la maquina
    // 4- Si todo esta bien, entregamos producto y cambio

    //TODO Comprar un Producto


    return 0;
}