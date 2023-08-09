//LIBRERIA DE LABORATORIOS CURSO NETACAD

/*5.1.3.8 LABORATORIO: No solo vectores: tablero de ajedrez
Nivel de dificultad
Medio

Objetivos
Familiarizar al estudiante con:

Matrices bidimensionales
para bucles
Impresión en pantalla
Guión
Escriba un programa que cree un tablero de ajedrez, coloque todas las piezas en él y luego muestre el contenido del tablero.

Cree una matriz bidimensional, llénela con datos e imprima una letra cuando haya una pieza en el campo y un espacio cuando no haya ninguna pieza. Almacene una letra para una pieza.

Por ahora, no necesitamos ninguna información sobre el color de las piezas.

Las posiciones iniciales (con letras que simbolizan cada pieza) para todas las piezas son:

Las torres ( R) se colocan en las esquinas exteriores, borde derecho e izquierdo (blanca en la 1ª y negra en la 8ª línea).
Los caballos ( N) se colocan inmediatamente dentro de las torres.
Los alfiles ( B) se colocan inmediatamente dentro de los caballos.
La reina ( Q) se coloca en el cuadrado central del mismo color que el del jugador: la reina blanca en el cuadrado blanco y la reina negra en el cuadrado negro. Ambos se colocan en el rango d: la dama blanca en el campo d1 y la dama negra en el campo d8.
El rey ( K) ocupa el lugar vacante junto a la reina.
Los peones ( P- no es el símbolo oficial, pero necesitas imprimir algo) se colocan un cuadrado delante de todas las demás piezas.
Su versión del programa debe imprimir el mismo resultado que la salida esperada.

Rendimiento esperado
RNBQKBNR
PPPPPPPP




PPPPPPPP
RNBQKBNR

#include <stdio.h>

int main()
{
	
	return 0;
}*/
#include <stdio.h>

int main()
{
    //1 Crear la matriz bidimensional para el tablero de ajedres, 8 filas y 8 columnas.
    //2 Colocar todas las piezas en el tablero.
    //3 Muestre por pantalla el contenido del tablero.

    //DECLARACIÓN DE VARIABLES
    //Declaramos la matriz bidimensional como datos int.
    int chessboard[8][8];
    //Declaramos las variables para las piezas.
    int torre   = 'R';
    int caballo = 'N';
    int alfil   = 'B';
    int reina   = 'Q';
    int rey     = 'K';
    int peon    = 'P';

    printf("%c %c %c %c %c %c \n", torre, caballo, alfil, reina, rey, peon); 



    return 0;
}