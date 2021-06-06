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
#include "Macierz.hh"
#include "Wector.hh"
#include "Wector3D.hh"
#include "Macierz3x3.hh"
#include "lacze_do_gnuplota.hh"
#include "prostopadloscian.hh"
#include "Scena.hh"
#include "Bryla.hh"


int main() {
        Vector3D wek;

        prostopadloscian pr(wek);

    PzG::LaczeDoGNUPlota Lacze;
    Lacze.DodajNazwePliku("../dat/prostopadloscian.dat",PzG::RR_Ciagly,2);
    Lacze.ZmienTrybRys(PzG::TR_3D);

    Lacze.UstawZakresY(-155,155);
    Lacze.UstawZakresX(-155,155);
    Lacze.UstawZakresZ(-155,155);

    pr.zapis_bryly();
    Lacze.Rysuj();

    while(1)
    {

    }
}