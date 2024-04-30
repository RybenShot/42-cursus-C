#include <string.h> // super necesario esto para que pueda funcionar el "size_t"
void *ft_memset(void *str, int c, size_t len)
{
    size_t i;    
    char *copystr;  //1- creamos un puntero para posteriormente apuntar a str
                    // ?? y porque no lo usamos directamente?
                    // porque es un puntero VOID, no tiene valor designado "todo entra"

    i = 0;
    copystr = (char *)str;  //2-  CASTEO. Apuntamos la variable str para poder modificarla ya que 
                            // al ser "VOID" dará WARNING, si queremos modificarla directamente

    while (i < len)
    {
        copystr[i] = c;
        i++;
    }
    return (str);   //3- Devolcemos el "str" ya modificado
}

int main()
{
    char letters[] = "########";

    printf("%p", ft_memset(letters, '*', 5));

    return (0);
}

//                              5                      srt       *
// Cambia los valores de los "size" primeros datos de "srt" por "c"