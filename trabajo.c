#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 35
struct jug
{
    char nombre[N];
    int vidas;
    int puntos;
    int muertes;

};
void main()

{
    int scr[22][N]= {0};
    int pl=9,width=24,speed=3,density=30;

    struct jug jugador;
    strcpy( jugador.nombre, "C Programming");
    jugador.vidas = 2;
    jugador.puntos = 0;
    jugador.muertes = 0;


    scr[21][pl]=1;
    scr[0][5]=3;

}

