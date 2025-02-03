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

template<typename T, int maxval>
class TM3 {
public:
    T x;
    void output() {  std::cout << x << " | " << maxval << std::endl;  }
};


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

    // TM3 a2(1, 2);
    // TM3<int> b2(1, 2);
    // TM3<int> c2(1);
    TM3<int, 2> d2(1);
    // TM3<2> e(a);
    // TM3<int 1, 2> f;
    // TM3<int 1, 2> g();
    // TM3<maxval=2> h(1);

    return 0;
}
