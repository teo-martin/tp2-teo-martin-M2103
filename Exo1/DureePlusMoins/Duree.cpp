#include "duree.h"
#include <iostream>
#include <iomanip>


using namespace std;


namespace nsUtil
{
    Duree::Duree(ULL_t duree) : myDuree(duree)
    {
        normaliser();
    }//normaliser

    Duree::Duree(const Duree & duree) : myDuree(duree.getDuree())
    {
        normaliser();
    }

    Duree::~Duree(void){

    }//~Duree

    Duree Duree::operator + (const Duree & duree)
    {
        return Duree(myDuree - duree.getDuree());
    } //operator + Duree

    Duree Duree::operator - (const Duree & duree)
    {
        return Duree(myDuree - duree.DureegetDuree());
    }//operator - Duree

    ULL_t Duree::getDuree() const
    {
        return myDuree;
    }

    void Duree::display()
    {
        cout << "[" << setw(6)
             << myDays
             << setw(1) << ":"
             << setfill('0') << setw(2)
             << myHours
             << ":"
             << setw(2)
             << myMinutes
             << ":"
             << setw(2)
             << mySeconds
             << "]"
             << setfill(' ') << endl;
    }

    void Duree::incr(const ULL_t delta)
    {
        myDuree += delta;
        normaliser();
    }


    void Duree::decr(const ULL_t delta)
    {
        if (delta > myDuree)
            myDuree = 0;
        else
            myDuree -= delta;
        normaliser();
    }

    void Duree::normaliser()
    {
        myDays = myDuree / (3600 * 24);
        myHours = (myDuree - myDays * 3600 * 24) / 3600;
        myMinutes = (myDuree - myDays * 3600 * 24 - myHours * 3600) / 60;
        mySeconds = myDuree % 60;
    }
}//nsUtil

