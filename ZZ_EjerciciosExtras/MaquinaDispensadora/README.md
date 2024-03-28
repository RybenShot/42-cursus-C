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

## Ejecución

Para compilar y ejecutar el programa en un entorno de desarrollo de C:

```bash
gcc MaquinaProgram.c -o MaquinaExpendedora
./MaquinaExpendedora
