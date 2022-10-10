//

#include <iomanip>
#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int changer = a;
    a = b;
    b = changer; 
}

void swap(int &a, int &b, int &c){
    int minimum, maximum, mid;
    if (a > b && a > c) {
        maximum = a;
        mid = (b > c ? b : c);
        minimum = (b > c ? c : b);
    }
    else if (b > a && b > c) {
        maximum = b;
        mid = (a > c ? a : c);
        minimum = (a > c ? c : a);

    } else {
        maximum = c;
        mid = (a > b ? a : b);
        minimum = (a>b ? b : a);

    }
    a = minimum;
    b = mid;
    c = maximum;
}

void swap(int &a, int &b, int &c, int &d) {
    int thing = a;
    a = b;
    b = c;
    c = d;
    d = thing;

}

// complete the Overloading function swap( )
// swap ( ) function has the difference number of parameters from 2 to 4
// For example, swap(10, 20); swap(10, 20, 30); swap(10, 20, 30, 40)
