#include <iostream>
#include <fstream>
#include <iomanip>
#include "duree.h"

using namespace std;

typedef unsigned long long ULL_t;


void testDureeDeBase()
{
    ifstream ifs("FichDurees.txt");
    ULL_t myDuree;
    //while(true)
    while (ifs >> myDuree)
    {
        cout << "Entrez un nombre de secondes :";
        //ifs >> myDuree;
        //if (ifs.eof()) break;
        nsUtil::Duree* duree1 = new nsUtil::Duree(myDuree);
        duree1->display();
        nsUtil::Duree d1 (0);
        d1.incr (1);
        cout << "Nbre sec. " << setw (6) << d1.getDuree ()
             << ", soit : ";
        d1.display ();
        cout << '\n';

        d1.decr (1);
        cout << "Nbre sec. " << setw (6) << d1.getDuree ()
             << ", soit : ";
        d1.display ();
        cout << '\n';

        d1.incr (3662);
        cout << "Nbre sec. " << setw (6) << d1.getDuree ()
             << ", soit : ";
        d1.display ();
        cout << '\n';

        d1.decr (10000);
        cout << "Nbre sec. " << setw (6) << d1.getDuree ()
             << ", soit : ";
        d1.display ();
        cout << '\n';
    }
}

//int main()
//{
//    testDureeDeBase();
//    return 0;
//}
