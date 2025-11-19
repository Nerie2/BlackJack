/*
===============================================================================
                                CRC - Participante
===============================================================================

Clase:
    Participante

Responsabilidades:
    - Representar la banca o distribuidor del juego.
    - Repartir las cartas iniciales al jugador y a sí mismo.
    - Calcular el valor de su propia mano.
    - Mostrar las cartas del crupier.
    - Controlar la lógica del turno del crupier.

Colaboración:
    - Mazo (para repartir cartas).
    - Jugador (para interactuar y repartir cartas iniciales).

Creadores:
    - Andrés Felipe Rodríguez García 2539555
    - José Manuel Cardona 2521653
    - Nerie Vásquez Díaz 2519638
===============================================================================
*/

#ifndef PARTICIPANTE_H
#define PARTICIPANTE_H
#include <vector>
#include "Carta.h"
#include "Mazo.h"
#include "Jugador.h"
using namespace std;

class Participante {
private:
    vector<Carta> mano; // Cartas del crupier
    
public:
    // Metodos
    int calcularValorMano() const;               // Valor total de la mano
    void pedirCarta(Mazo &mazo);                     // Toma una carta del mazo
    void mostrarMano() const;                           // Muestra cartas del crupier
};
#endif // CRUPIER_H