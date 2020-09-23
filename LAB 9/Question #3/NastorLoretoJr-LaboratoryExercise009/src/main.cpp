// QUESTION #3

#include <cstdlib>
#include <iostream>
#include <cstdio>
#include "_pause.h"
#include "polygon.h"

using namespace std;

int main () {
    
    Polygon pentagon ("Pentagon", 5, "pink");

    cout << "The polygon is a " << pentagon.getPolygon() << endl;
    

    cout << endl;
    system ("pause");
    return EXIT_SUCCESS;
}
