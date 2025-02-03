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
    TM1<const int> i1   = TM1<const int>(3.2, 6.4);

    a1.output();
    b1.output();
    c1.output();
    d1.output();
    e1.output();
    f1.output();
    i1.output();

    // TM3 a3(1, 2);
    // TM3<int> b3(1, 2);
    // TM3<int> c3(1);
    TM3<int, 2> d3(1);
    // TM3<2> e3(a);
    // TM3<int 1, 2> f3;
    // TM3<int 1, 2> g3();
    // TM3<maxval=2> h3(1);
    TM3<const int, 2> i3(1);
    TM3<const int, 2> j3(2.3);

    d3.output();
    i3.output();
    j3.output();

    return 0;
}
