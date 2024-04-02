<p align = "center">
  <a href= "#tabla-de-tallas">Tabla de tallas</a> |
  <a href= "#pistas">Pistas</a>
</p>

# Reto - Tallas para todos 👕!

Tu tarea es crear un programa que determine la talla de ropa más adecuada para un usuario basándose en ciertas medidas físicas proporcionadas. 

## Descripcion
El programa debe aceptar las medidas de hombro, altura, cintura y pecho, y determinar la talla de la prenda de vestir correspondiente.

El programa debe proporcionar una salida clara indicando la talla recomendada para el usuario. Por ejemplo, podría mostrar un mensaje como "Su talla es M" o "Le recomendamos la talla L".

¡Buena suerte!

## 👕 Tabla de tallas 👕
|  Talla | Cintura (cm) | Pecho (cm) | Longitud (cm) |
| ------ | ------------ | ---------- | ------------- |
| XS  | 71 - 80   | 81 - 90   | 60 - 65  |
| S   | 81 - 90   | 91 - 100  | 66 - 70  |
| M   | 91 - 100  | 101 - 110 | 71 - 75  |
| L   | 101 - 110 | 111 - 120 | 76 - 80  |
| XL  | 111 - 120 | 121 - 130 | 81 - 85  |
| XXL | 121 - 130 | 131 - 140 | 86 - 90  |

## Pistas
<div align="center">
  <h1 style="border-bottom: none;"><img src="https://emojicdn.elk.sh/🚨" style="width: 40px">Alto ahí, granuja!!<img src="https://emojicdn.elk.sh/🚨" style="width: 40px"></h1>
  <h2>Antes de continuar, dale otra vuelta al codigo <p><small>(que tal si empeciezas por hacer S M y L?)</small>.</p></h2>
  <p>Pero si te ves incapaz de continuar, sigue adelante.</p>
  <img src="https://media1.giphy.com/media/v1.Y2lkPTc5MGI3NjExcGFpODAyNTZydHJmM2toOGt1ZGlsb3N4aGdrZmU2Nml6ZDdrNTJjbSZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/8TweEdaxxfuElKkRxz/giphy.gif">
</div>

<br/><br/><br/>

1. Empieza por hacer las tallas S M y L, te van a ser las mas faciles de hacer
2. Lo dificil no es gestioar los valores y asignar la talla, lo realmente dificil es meter 2 caracteres en una variable que solo acepta 1.
3. Ten en cuenta que no pesa lo mismo esto -> 'S', que esto -> "XS" . Por increible que aprezca XS pesa mas.
4. Seguro que casi lo tienes. Dale una velta mas!
5. Para poder guardar en una variable 'char' un conjunto de letras (como por ejemplo XS o XL o XXL) hay que guardarlas en un conjunto de caracteres como es un string. que tal si usas el strcpy()?