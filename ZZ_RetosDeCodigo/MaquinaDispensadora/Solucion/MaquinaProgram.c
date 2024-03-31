#include <string.h>
#include <stdio.h>

// estructura que usaremos tanto para crear los propios productos como para printear las cosas
struct Producto {
    int idProducto;
    char nombre[15];
    int precio ;
    int stock;
};
// creador de roductos (asigna valores a los productos vacios)
void incluirValores (struct Producto *producto, int IdDelProducto, char *nombre, int precio, int stock){
    producto->idProducto = IdDelProducto;
    strcpy(producto->nombre, nombre);
    producto->precio = precio;
    producto->stock = stock;
}

//! FUNCIONES
// busca 1 producto, si lo encuentra lo devuelve
int buscarProducto(struct Producto *listaDeProductos, int productoSeleccionado, int totalProductos){
    int i = 0;
    while (i < totalProductos)
    {
        if (listaDeProductos[i].idProducto == productoSeleccionado){
            printf("Quieres %s \n", listaDeProductos[i].nombre);
            return productoSeleccionado;
        }
        i++;
    }
    printf("Producto no encontrado");
    return -1;
}
// Muestra 1 producto en concreto
int mostrarProductoConcreto (struct Producto *listaDeProductos, int productoSeleccionado, int totalProductos){
    int productoEncontrado = buscarProducto(listaDeProductos, productoSeleccionado, totalProductos);
    if (productoEncontrado >= 0){
        printf("Aqui tienes tu producto:\n %s Precio: %d€ Stock: %d", listaDeProductos[productoSeleccionado].nombre, listaDeProductos[productoSeleccionado].precio, listaDeProductos[productoSeleccionado].stock);
        return 0;
    }
    return 0;
}
// Muestra Todos los productos
void mostrarTodosProductos (struct Producto *listaDeProductos, int totalProductos){
    printf("Tenemos disponible:\n");
    int i = 0;
    while (i < totalProductos)
    {
        printf("%s ->> Id: %d <<-\n", listaDeProductos[i].nombre, listaDeProductos[i].idProducto);
        i++;
    }
    printf("\n");
}
// comprobamos si hay stock del producto que estamos mirando
int stockDeProducto(struct Producto *listaDeProductos, int productoSeleccionado){
    if(listaDeProductos[productoSeleccionado].stock <= 0){
        printf("Producto agotado, por favor seleccione otro producto \n");
        return 0;
    }
    else{
        printf("Tenemos %d de este producto \n", listaDeProductos[productoSeleccionado].stock);
        return (listaDeProductos[productoSeleccionado].stock);
    }
}
// Compra del producto y actualizacion de stock y cambio de maquina
int compraDelProducto(struct Producto *listaDeProductos, int productoSeleccionado, int *dineroEnMaquina, int dineroDelCliente){
    // comprobador de suficiente dinero
    if(listaDeProductos[productoSeleccionado].precio > dineroDelCliente){
        int diferencia = listaDeProductos[productoSeleccionado].precio - dineroDelCliente;
        printf("Dinero insuficiente, te quedan %d€ \n", diferencia);
    }
    // gestion del producto
    else{
        listaDeProductos[productoSeleccionado].stock = listaDeProductos[productoSeleccionado].stock - 1 ;
        *dineroEnMaquina = *dineroEnMaquina + listaDeProductos[productoSeleccionado].precio;
        int cambioDelCliente = dineroDelCliente - listaDeProductos[productoSeleccionado].precio;
        printf("Aqui tienes tu producto %s y aqui tienes tu cambio %d \n", listaDeProductos[productoSeleccionado].nombre, cambioDelCliente);
    }
    return 0;
}

int main() {
    int seleccion;
    int cambio = 30;
    int dineroInsertado;

    //? Creacion de la maquina y asignacion de productos
    // Cantidad de productos que tendra la maquina
    const int cantidadProductos = 5;
    //creamos el array de productos
    struct Producto productos[cantidadProductos];
    // Asignar valores a los productos
    incluirValores(&productos[0], 0, "Coca Cola", 10, 20);
    incluirValores(&productos[1], 1, "Fanta", 12, 15);
    incluirValores(&productos[2], 2, "Acuarius", 23, 15);
    incluirValores(&productos[3], 3, "7Up", 21, 0);
    incluirValores(&productos[4], 4, "Monster",36, 40);

    //? FUNCIONALIDADES
    // Mostrar los productos
    mostrarTodosProductos(productos, cantidadProductos);

    // Mostrar valores de un producto
    //mostrarProductoConcreto(productos, seleccion, cantidadProductos);

    // COMPRAR UN PRODUCTO
    while(1){
        printf("> Que producto quieres? ");
        scanf("%d", &seleccion);

        // 1- Buscamos el producto                                                          -> "No se ha encontrado el producto seleccionado"
        int productoEncontrado = buscarProducto(productos, seleccion, cantidadProductos);

        // 2- Miramos su stock                                                              -> "producto agotado"
        int cantidadDelProducto = 0;
        if(productoEncontrado >= 0)
            cantidadDelProducto = stockDeProducto(productos, seleccion);
    
        // 3- comprobamos el precio del producto con el dinero que ha metido en la maquina  -> "te quedan XX Euros"
        if(cantidadDelProducto > 0){
            printf("> El producto que has seleccionado cuesta %d E \n> Por favor inserta el dinero ", productos[seleccion].precio);
            scanf("%d", &dineroInsertado);
            compraDelProducto(productos, seleccion, &cambio, dineroInsertado);
        }
        printf("\n \n");
        printf("Dinero en la maquina: %d", cambio);
        printf("\n \n");
    }
    return 0;
}