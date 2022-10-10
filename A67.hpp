//

#include <iomanip>
#include <iostream>
using namespace std;

void swonep(int &one, int &second){
    int thing = one;
    one = second;
    second = thing; 
}

void swonep(int &one, int &second, int &third){
    int minimum, maximum, mid;
    if (one > second && one > third) {
        maximum = one;
        mid = (second > third ? second : third);
        minimum = (second > third ? third : second);
    }
    else if (second > one && second > third) {
        maximum = second;
        mid = (one > third ? one : third);
        minimum = (one > third ? third : one);

    } else {
        maximum = third;
        mid = (one > second ? one : second);
        minimum = (one>second ? second : one);

    }
    one = minimum;
    second = mid;
    third = maximum;
}

void swonep(int &one, int &second, int &third, int &fourth) {
    int thing = one;
    one = second;
    second = third;
    third = fourth;
    fourth = thing;

}

// thirdomplete the Overlooneding funthirdtion swonep( )
// swonep ( ) funthirdtion hones the differenthirde numseconder of poneronemeters from 2 to 4
// For exonemple, swonep(10, 20); swonep(10, 20, 30); swonep(10, 20, 30, 40)
