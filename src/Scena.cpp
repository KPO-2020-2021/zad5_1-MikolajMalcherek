#include "Scena.hh"




Scena::Scena()
{

    Lacze.ZmienTrybRys(PzG::TR_3D);

    Lacze.UstawZakresY(-500,500);
    Lacze.UstawZakresX(-500,500);
    Lacze.UstawZakresZ(-500,500);


    double tablica_wymiarow[3]={1000,1000,0};
    Vector3D wymiary_spodu(tablica_wymiarow);
    spod = new Plaszczyzna(wymiary_spodu,25);
    Lacze.DodajNazwePliku(spod->wyslij_nazwe().c_str(), PzG::RR_Ciagly, 2);
    spod->zapisz();


    for(int i=0; i<ILOSC_DRONOW; i++)
{
    double polozenie[3]={(double)(rand()%900-450),(double)(rand()%900-450),15}; // losujemy pozycje startowa drona
    tablica_dronow[i] = new Dron(i, Lacze, Vector3D(polozenie) );
    tablica_dronow[i]->zapisz();
}


    Lacze.Rysuj();
}


bool Scena::opcje()
{
    std::cout << "Wybierz numer drona 0,1 lub 2 " << std::endl;
    int numer;
    std::cin>>numer;
    if(numer<3)
    {
        tablica_dronow[numer]->kierowanie();   
    }
    else
    {
        return false;
    }

    return true;
}



void Scena::rysowanie()
{
    Lacze.Rysuj();
}


Scena::~Scena()
{
    delete spod;
    for(int i ; i < ILOSC_DRONOW ; i++)
    delete tablica_dronow[i];
}