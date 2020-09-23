// QUESTION #2

#include <cstdlib>
#include <iostream>
#include <cstdio>
#include "person.h"
#include "_pause.h"

using namespace std;

int main() {

    Person Lnastor ("Loreto P. Nastor Jr.", "138 San Vicente East, San Manuel, Pangasinan", "Male", 21, "Businessman");

    cout << "The name of the person is " << Lnastor.getPerson() << endl;
  
    system ("pause");
    return EXIT_SUCCESS;

}