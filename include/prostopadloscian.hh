#ifndef PROSTOPADLOSCIAN_HH
#define PROSTOPADLOSCIAN_HH

#include "size.hh"
#include <stdio.h>
#include <cmath>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <iomanip>


#include "Wector3D.hh"
#include "Macierz.hh"
#include "Macierz3x3.hh"
#include "lacze_do_gnuplota.hh"
#include "Bryla.hh"




/** \brief definiujemy klase prostopadloscian, ktora dziedziczy klase bryla, jesli dziedziczymy klase i wpiszemy public, 
 * wszeyskie metody, zmienne itd. zostana odziedziczone tak samo jak jest to w klasie oryginalnej
 * (to co prywatne to bedzie prywatne, co publiczne co publiczne itd.)
 * 
 *
 */

class prostopadloscian : public Bryla
{

public:

/** \brief konstruktor parametryczny klasy prostopadloscian
 * 
 *
 */

prostopadloscian(Vector3D wspol_srodka, double dlugosc_x=100 , double wysokosc_y=100, double glebokosc_z=100, std::string nazwa="../dat/prostopadloscian.dat");
};


#endif