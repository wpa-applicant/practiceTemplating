#include <iostream>

template<typename T>
class TM1 {
public:
    T x;
    T y;
    void output() {  std::cout << x << " | " << y << std::endl;  }
};

// template<typename const T>
// class TM2 {
// public:
//     T x;  // ...
// };

int main() {
    TM1 a1              = TM1(1, 2);
    TM1 b1              = TM1<int>(1, 2);
    TM1<int> c1         = TM1(1, 2);
    TM1<int> d1         = TM1<int>(1, 2);

    TM1<const int> e1   = TM1<const int>(1, 2);
    TM1 f1              = TM1<const int>(1, 2);
    // TM1<const int> g1   = TM1(1, 2);

    // const int h_var_1_1 = 1;  const int h_var_1_2 = 2;
    // TM1<const int> h1   = TM1(h_var_1_1, h_var_1_2);


    return 0;
}
