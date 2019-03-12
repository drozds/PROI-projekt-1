#include "MyClass.h"
#include <iostream>
#include <cmath>
#include <iomanip>

//using namespace std;
void QFun::read() {

        std::cout << "Enter coefficients a, b, c: " << std::endl;
        std::cin >> a >> b >> c;

        }

void QFun::result() {

    disc = pow( b, 2 ) - 4 * a * c;

    if ( disc > 0 ) {
        x1 = ( -b + sqrt(disc) ) / ( 2 * a );
        x2 = ( -b - sqrt(disc) ) / ( 2 * a );
        std::cout << std::setprecision(4) << std::fixed << "x1 = " << x1 << std::endl;
        std::cout << std::fixed << "x2 = " << x2 << std::endl;
    } 
    else if ( disc = 0 ) {
        x1 = ( -b + sqrt(disc) ) / ( 2 * a );
        std::cout << "There is root of multiplicity 2" << std::endl;
        std::cout << std::fixed << "x = " << x1 << std::endl;
        }
        else {
            std::cout << "There are no real roots" << std::endl;
        }
     
    }

