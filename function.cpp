#include <iostream>

using std::cout;
using std::endl;

template<typename T>
T tMax(T x, T y) {
    return (x>y) ? x : y;
}

template<typename X, class Y>
void printMin(X x, Y y) {
    cout <<( (x<y) ? x : y )<< endl;
}

int main () {
    cout << tMax(1, 5) << endl;
    cout << tMax(1.0, 5.0) << endl;
    cout << tMax("d", "A") << endl;

    //  What:  Will not implicitly convert when deducing
    // cout << tMax(1.0, 5) << endl;
    // cout << tMax(1, 5.0) << endl;

    //  What:  Will implicitly convert when a type is specified (therefore not deducing)
    cout << tMax<int>(1.0, 5) << endl;
    cout << tMax<int>(1, 5.0) << endl;

    cout << tMax<double>(1.0, 5) << endl;
    cout << tMax<double>(1, 5.0) << endl;

    //  What:  Will implicitly demote when specified so
    cout << tMax<int>(1.1, 5) << endl;
    cout << tMax<int>(1, 5.5) << endl;


    cout << "-----------------" << endl;
    printMin(1, 5);
    printMin(1.0, 5.0);
    printMin("d", "A");

    printMin(1.2, 5);

    printMin<int>(5.0, 1.1);
    printMin<int, int>(5.0, 1.1);
    printMin<double, double>(5.0, 1);



    return 0;
}