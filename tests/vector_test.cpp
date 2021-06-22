
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../tests/doctest/doctest.h"
#include "Vector.hh"
#include "size.hh"
#include <stdio.h>
#include "prostopadloscian.hh"
#include "skrzydla_drona.hh"
#include "Scena.hh"
#include "Plaszczyzna.hh"
#include "Matrix.hh"
#include "Dron.hh"
#include "Bryla.hh"






 
TEST_CASE("Test operatora indeksowania"){ 
    Vector3D wektor;
    double a=3,b=2,c=1;
    wektor[0]=a;
    wektor[1]=b;
    wektor[2]=c;
    CHECK((wektor[0]==3 && wektor[1]==2 && wektor[2]==1));
}






TEST_CASE("Test konstrukora parametrycznego Vector3D"){
    Vector3D wektor;
    CHECK((wektor[0]==0 && wektor[1]==0 && wektor[2]==0));
}






TEST_CASE("Test konstrukora parametrycznego Vector3D"){
    double values[]={12,32,34};
    Vector3D wektor(values);
    CHECK((wektor[0]==12 && wektor[1]==32 && wektor[2]==34));
}






TEST_CASE("Test operatora indeksowania - bledna wartosc poza zasiegiem tablicy indeksu podana przy odczytywaniu wartosci z wektora3D."){
    double values[]={12,32,34};
    Vector3D wektor(values);
    WARN_THROWS (wektor[-8]);
}






TEST_CASE("Test operatora indeksowania - indeksu poza zasiegiem tablicy podana przy przypisywaniu wartosci do wektora3D."){
    double values[]={12,32,34};
    Vector3D wektor(values);
    WARN_THROWS (wektor[-8]=5);
}






TEST_CASE("Test odczytywania wartosci wektora3D "){
    double values[]={12,32,34},a,b,c;
    Vector3D wektor(values);
    a = wektor[0];
    b = wektor[1];
    c = wektor[2];
    CHECK((a ==12 && b == 32 && c == 34));
}






TEST_CASE("Test wyswietlenia wartosci wektora3D z uzyciem <<."){
    double values[]={12,32,34};
    Vector3D wektor(values);
    std::ostringstream out;
    out << wektor;
    CHECK ("12.0000000000\t32.0000000000\t34.0000000000\t" == out.str());  
}





TEST_CASE("Test wczytywania wartosci do wektora3D z uzyciem >>."){
    Vector3D wektor;
    std::istringstream input("12 32 34");
    input >> wektor;
    CHECK ((wektor[0] == 12 && wektor[1] == 32 && wektor[2] == 34));  
}





TEST_CASE("Test reakcji na wczytywanie wartosci nie bedacej typu double do wektora3D z uzyciem przeciazenia >>."){
    double values[]={12,32,34};
    Vector3D wektor(values);
    std::istringstream input("Z % .");
    WARN_THROWS (input >> wektor);
}






TEST_CASE("Test dodawania dwoch wektorow "){
    double values1[]={12,32,34},values2[]={66,88,-2};
    Vector3D Vec1(values1),Vec2(values2);
    Vec1=Vec1+Vec2;
    CHECK ((Vec1[0] == 78 && Vec1[1] == 120 && Vec1[2] == 32));  
}





TEST_CASE("Test odejmowania dwoch wektorow "){
    double values1[]={12,32,34},values2[]={5,-5,4};
    Vector3D Vec1(values1),Vec2(values2);
    Vec1=Vec1-Vec2;
    CHECK ((Vec1[0] == 7 && Vec1[1] == 37 && Vec1[2] == 30));  
}










