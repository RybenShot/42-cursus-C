<p align = "center">
  <a href= "#funcionalidades">Funcionalidades</a> |
  <a href= "#pimeros-pasitos">Primeros Pasos</a> |
  <a href= "#pistas">Pistas</a> |
  <a href= "#ejecucion">Ejecucion</a>
</p>

<div align="center">
  <img src="https://media.tenor.com/EVCicq5T6_UAAAAM/vending-machine-loop.gif">
</div>

# Reto - Maquina Expendedora 🛒
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
<div align="center">
  <h1 style="border-bottom: none;"><img src="https://emojicdn.elk.sh/🚨" style="width: 40px">Alto ahí, granuja!!<img src="https://emojicdn.elk.sh/🚨" style="width: 40px"></h1>
  <h2>Antes de continuar, dale otra vuelta al codigo.</h2>
  <p>Pero si te ves incapaz de continuar, sigue adelante.</p>
  <img src="https://media0.giphy.com/media/v1.Y2lkPTc5MGI3NjExMDl6bHlnYXZycGdtNnd0NnZwY3A3eWM3amZqaWpjZHhhNXJ5N3dneCZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/zCpYQh5YVhdI1rVYpE/giphy.gif">
</div>

<br/><br/><br/>


<details><summary><b>Pista 1</b></summary><p>Como diria Jack el destripador "Vamos por partes"</p></details>

<details><summary><b>Pista 2</b></summary><p>Para crear los productos se usan las estructuras</p></details>

<details><summary><b>Pista 3</b></summary><p>Primero deberia buscar el producto (si este existe ...) comprobaremos el stock (si hay stock ...) y asi hasta que el cliente consiga su producto y su cambio de vuelta</p></details>

<details><summary><b>Pista 4</b></summary><p>Aqui te dejo un trocito de la solucion ...
<code>
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
</code>
</p></details>

<details><summary><b>Pista 5</b></summary><p>Otro trocito de codigo (y el ultimo)
<code>
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
</code>
</p></details>

## Ejecucion

Para compilar y ejecutar el programa (mi solucion) en un entorno de desarrollo de C:
Esto ejecutara en consola el programa y podras interactuar.
1. Te enseña todos los productos que hay con su nombre e ID.
2. Eliges el producto que deseas (comprobara si existe el producto y si hay stock).
3. Te pedira el dinero (escribes el dinero exacto o incluso mas, como si pagaras con un billete en al realidad).
4. Te da el refresco seleccionado y el cambio (si has metido el dinero correctamente).

~~~
gcc MaquinaProgram.c -o MaquinaExpendedora
./MaquinaExpendedora
~~~

# No tienes entorno de C en tu sistema?. 
No te preocupes puedes usar este [entorno Online](https://www.onlinegdb.com/online_c_compiler)
Solo tienes que copiar todo el codigo , pegarlo y darle al boton verde 'Run' .