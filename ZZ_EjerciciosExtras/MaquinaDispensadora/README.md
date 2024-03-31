<p align = "center">
  <a href= "#funcionalidades">Funcionalidades</a> |
  <a href= "#pimeros pasitos">Primeros Pasos</a> |
  <a href= "#pistas">Pistas</a>
</p>

# Vending Machine Program

Este programa simula el funcionamiento básico de una máquina expendedora de productos utilizando el lenguaje de programación C.

## Descripción

El programa permite al usuario seleccionar un producto de una lista predefinida, verificar si hay suficiente stock disponible, insertar dinero y recibir el cambio correspondiente después de realizar la compra.

## Funcionalidades

- **Mostrar Productos**: Muestra todos los productos disponibles en la máquina.
- **Buscar Producto**: Busca un producto específico por su ID y muestra su información si está disponible.
- **Verificar Stock**: Verifica si hay suficiente stock disponible para el producto seleccionado.
- **Comprar Producto**: Permite al usuario comprar un producto e insertar dinero para pagar.

## Estructura del Código

El código está estructurado de la siguiente manera:

- Definición de una estructura `Producto` que contiene información sobre cada producto, incluyendo ID, nombre, precio y stock.
- Funciones para asignar valores a los productos, buscar un producto, mostrar información sobre un producto, verificar el stock, realizar una compra, y la función principal `main()` que ejecuta el programa.

## Pimeros pasitos
~~~
int main() {
    int seleccion;
    int cambio = 30;
    int dineroInsertado;

  //1- Creacion de la maquina y asignacion de productos

  //2- Funcionalidades

  //3- Compra del producto

  return 0;
}
~~~

## Pistas
1. Como diria Jack el destripador "Vamos por partes"
2. Para crear los productos se usan las estructuras
3. Primero deberia buscar el producto (si este existe ...) comprobaremos el stock (si hay stock ...) y asi hasta que el cliente consiga su producto y su cambio de vuelta
4. Aqui te dejo un trocito de la solucion ...
  
~~~
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
~~~
5. Otro trocito de codigo (y el ultimo)
~~~
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
~~~

## Ejecución

Para compilar y ejecutar el programa en un entorno de desarrollo de C:

~~~
gcc MaquinaProgram.c -o MaquinaExpendedora
./MaquinaExpendedora
~~~