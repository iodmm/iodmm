// LIBRERIA ESTUDIO LENGUAJE C

/*Indexación de matrices
#include <stdio.h>

int main()
{̣
    char word[10] = "dump";

    word[1] = 'a';
    puts(word);

    // NO OLVIDAR
    // apóstrofes: 'a' char variable
    // comillas: "dump" char * array

    //Nos queda claro que la aparición del nombre del
    //arreglo seguido de un par de corchetes significa
    //que queremos acceder (para obtener o modificar)
    //solo a uno de los elementos del arreglo , el que
    //tiene el índice igual al valor calculado de la
    //expresión. encerrado entre paréntesis.

    //¡Estos conocidos corchetes [ y ] no son más que
    //un operador! Este operador tiene la prioridad más
    //alta posible: es tan alta como la prioridad del
    //sufijo ++y --los operadores.

    //El estándar de lenguaje "C" dice: si cualquier
    //puntero es seguido por un operador de indexación,
    //como este

    // t[i]
    //*(t+i)

    //Esto significa que la expresión involucra dos argumentos

    //word[1]
    //word se interpreta como puntero al primer elemento de la matriz
    // El puntero se incrementa en 1 word + 1
    //*(word + 1 ) = 'a'; esta asignacion es totalmente admisible
    //Es obligatorio utilizar los parentesis por las prioridades de los operadores
    //El operador [] es conmutativo
    //Al compilador le da igual word[1] q 1[word]
    //Precaucion al contruir expresiones con este operador

    char string[]="ABC";
    char *p;
    char c;

    //Configuramos p que apunte a la segunda posicion

    //La forma recomendada es:

    p = string + 1;


    return 0;
}
*/
/*Punteros
#include <stdio.h>
#include <string.h>

int main(void)
{
    //Punteros herramienta flexible y eficiente
    //Procesa matrices y se usa para crear estructuras de datos complejas.
    //Si no se usan bien pueden crear muchos problemas

    //Error tipico No 1,
    //uso puntero no inicializado

        //char *ptr;
        //strcpy(ptr, "you may get into trouble soon");
        //puts(ptr);

    //desreferencia puntero no inicializado

        //char *ptr;
        //*ptr = 'C';
        //printf("%c",*ptr);


    //Error tipico No 2,
    //exceder el tamaño de la matriz

        //char str[10];
        //strcpy(str,"Welcome to Troubleland!");
        //printf("%s",str);

    //Error tipico No 3,
    //cadenas no terminadas

        //char str[10];
        //int i;
        //strcat(str,"Bump!");
        //printf("%s",str);

    return 0;
}
*/
/*Mi primer programa...



//Programa sencillo, escribir en pantalla el mensaje.
//La descripcion estructurada y semiformal de cada
//paso se llama: algoritmo

//Pasos a realizar:
//1 - Empezar el programa
//2 - Escribir el texto en la pantalla
//3 - Detener el programa

#include <stdio.h>

int main(void)
{
	puts("It's me, your first program.");
    return 0;
}*/
/*Función printf()
#include <stdio.h>

int main() {
    //Analizado los errores de sintaxis habituales
    printf("¡Hola, mundo!");
    return 0;
}*/
/*Continue...*/
