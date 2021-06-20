/* Executables must have the following defined if the library contains
doctest definitions. For builds with this disabled, e.g. code shipped to
users, this can be left out. */

/*!
    \file
        \brief Plik zawierajacy glowna funkcje programu.
*/

#ifdef ENABLE_DOCTEST_IN_LIBRARY
#define DOCTEST_CONFIG_IMPLEMENT
#include "../tests/doctest/doctest.h"
#endif

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
#include <string>
#include <unistd.h>
#include <iomanip>




#include "exampleConfig.h"
#include "example.h"
#include "Matrix.hh"
#include "Vector.hh"
#include "Vector3D.hh"
#include "Matrix3x3.hh"
#include "lacze_do_gnuplota.hh"
#include "prostopadloscian.hh"
#include "Scena.hh"
#include "Bryla.hh"
#include "skrzydla_drona.hh"
#include "Dron.hh"

int main() {
Scena plansza;
Vector3D wektor_test;

wektor_test.info();
while(plansza.opcje())
{
    plansza.rysowanie();
    wektor_test.info();
}
} 