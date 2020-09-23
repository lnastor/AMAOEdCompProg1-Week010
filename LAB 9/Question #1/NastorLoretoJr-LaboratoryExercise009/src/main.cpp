// QUESTION #1

#include <cstdlib>
#include <iostream>
#include "_pause.h"
#include "leggedmammal.h"

using namespace std;

int main() {

    LeggedMammal dog (4, "smooth", "tail");

    cout << "The mammal " << dog.getLeggedMammal() << endl;
    
    system ("pause");
    return EXIT_SUCCESS;

}