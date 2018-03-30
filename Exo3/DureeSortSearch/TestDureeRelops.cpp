/**
 *
 * \file     TestDureeRelops.cpp
 *
 * \authors  M. Laporte, D. Mathieu
 *
 * \date     01/02/2008
 *
 * \version  V1.0
 *
 * \brief    Test des operateurs de comparaison
 *
 **/
#include <iostream>
#include <iomanip>         // boolalpha
#include <utility>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;
using namespace rel_ops;

#include "duree.h"

using namespace nsUtil;

#define classdef typedef

namespace 
{
    void testDuree (void)
    {
        const Duree KDureeMax (1000000);
        typedef vector <Duree> CVDuree;
        typedef vector <nsUtil::Duree>::const_iterator Iter;
        srand(time(NULL));
        unsigned nbVal;
        cout << "saisir le nombre de durées aléatoires à générer: " << endl
        cin >> nbVal;
        CVDuree TabVal;

        Duree d1 (3661);
        Duree d2 (2661);
        Duree d3 (3661);

        cout << boolalpha;
        /*         */
        d1.display ();
        cout << " <  ";
        d2.display ();
        cout << " : " << (d1 <  d2) << '\n';

        d2.display ();
        cout << " <  ";
        d1.display ();
        cout << " : " << (d2 <  d1) << "\n\n";
        /*         */

        /*         */
        d1.display ();
        cout << " >  ";
        d2.display ();
        cout << " : " << (d1 >  d2) << '\n'; //

        d2.display ();
        cout << " >  ";
        d1.display ();
        cout << " : " << (d2 >  d1) << "\n\n"; //
        /*         */

        /*         */
        d1.display ();
        cout << " <= ";
        d2.display ();
        cout << " : " << (d1 <= d2) << '\n';

        d2.display ();
        cout << " <= ";
        d1.display ();
        cout << " : " << (d2 <= d1) << "\n\n";
        /*         */

        /*         */
        d1.display ();
        cout << " >= ";
        d2.display ();
        cout << " : " << (d1 >= d2) << '\n';

        d2.display ();
        cout << " >= ";
        d1.display ();
        cout << " : " << (d2 >= d1) << "\n\n";
        /*         */

        /*         */
        d1.display ();
        cout << " == ";
        d2.display ();
        //cout << " : " << (d1 == d2) << '\n';

        d2.display ();
        cout << " == ";
        d1.display ();
        //cout << " : " << (d2 == d1) << "\n\n";
        /*         */

        /*         */
        d1.display ();
        cout << " == ";
        d3.display ();
        //cout << " : " << (d1 == d3) << '\n';
        /*         */

        /*         */
        d1.display ();
        cout << " != ";
        d2.display ();
        cout << " : " << (d1 != d2) << '\n';
        /*         */

        /*         */
        d1.display ();
        cout << " != ";
        d3.display ();
        cout << " : " << (d1 != d3) << '\n';
        /*         */

        cout << noboolalpha;

        for (unsigned int i = 0; i<nbVal; ++i)
        {
            TabVal.push_back(Duree(rand() % KDureeMax));
        }

        for (Iter it = TabVal.begin(); it != TabVal.end(); ++it)
        {
            it->display();
        }
        sort(TabVal.begin(), TabVal.end());
        for (Iter it = TabVal.begin(); it != TabVal.end(); ++it)
        {
            it->display();
        }

        while(true)
        {
            int val;
            cin >> val;
            if (cin.eof()) break;
            Duree duree(val);
            if(find(TabVal.begin(), TabVal.end(), duree != TabVal.end()))
                cout << val << "found in vector" << endl;
            else
                cout << val << "not found in vector" << endl;
        }
    } // testDuree()

} // namespace anonyme

int main (void)
{
    testDuree ();

    return 0;

} // main()
