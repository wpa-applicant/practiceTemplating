#include <iostream>

template<typename T>
class TmCl1 {
public:
    T x;
    T y;

    void output() {
        std::cout << x << " | " << y << std::endl;
    }
};


template<typename X, typename Y>
class TmCl2 {
public:
    X x;
    Y y;

    void output() {
        std::cout << x << " | " << y << std::endl;
    }
};


template<typename X, int>
class TmCl3 {
public:
    X x;
    int y;

    void output() {
        std::cout << x << " | " << y << std::endl;
    }
};


template<typename X, int>
class TmCl4 {
public:
    X x;
    int y;

    TmCl4(X _x, int _y) : x(_x), y(_y) {}

    void output() {
        std::cout << x << " | " << y << std::endl;
    }
};


template<typename X>
class TmCl5 {
public:
    X x;
    int y;

    void output() {
        std::cout << x << " | " << y << std::endl;
    }
};


template<typename X>
class TmCl6 {
public:
    X x;
    int y;

    TmCl6(X _x, int _y) : x(_x), y(_y) {}

    void output() {
        std::cout << x << " | " << y << std::endl;
    }
};


int main() {
    std::cout << "-------------------- 1" << std::endl;
    TmCl1 a1 = TmCl1("asd", "fasd");
    TmCl1 b1 = TmCl1(3, 5);
    TmCl1 c1 = TmCl1(1.0, 2.1);
    // TmCl1 d1 = TmCl1(1.0, 2);
    // TmCl1 e1 = TmCl1(1.1, 2);

    a1.output();
    b1.output();
    c1.output();
    // d1.output();
    // e1.output();


    std::cout << "-------------------- 2" << std::endl;
    TmCl2 a2 = TmCl2("asd", "fasd");
    TmCl2 b2 = TmCl2(3, 5);
    TmCl2 c2 = TmCl2(1.0, 2.1);
    TmCl2 d2 = TmCl2(1.0, 2);
    TmCl2 e2 = TmCl2(1.1, 2);

    a2.output();
    b2.output();
    c2.output();
    d2.output();
    e2.output();


    std::cout << "-------------------- 3" << std::endl;
    // TmCl2 b3 = TmCl3(3, 5);

    // b3.output();


    std::cout << "-------------------- 4" << std::endl;
    // TmCl2 b4 = TmCl4(3, 5);

    // b4.output();


    std::cout << "-------------------- 5" << std::endl;
    // TmCl2 a5 = TmCl5("asd", "fasd");
    TmCl5 b5 = TmCl5(3, 5);
    TmCl5 c5 = TmCl5(1.0, 2.1);
    TmCl5 d5 = TmCl5(1.0, 2);
    TmCl5 e5 = TmCl5(1.1, 2);

    // a5.output();
    b5.output();
    c5.output();
    d5.output();
    e5.output();

    
    std::cout << "-------------------- 6" << std::endl;
    // TmCl6 a6 = TmCl6("asd", "fasd");
    TmCl6 b6 = TmCl6(3, 5);
    TmCl6 c6 = TmCl6(1.0, 2.1);
    TmCl6 d6 = TmCl6(1.0, 2);
    TmCl6 e6 = TmCl6(1.1, 2);

    // a6.output();
    b6.output();
    c6.output();
    d6.output();
    e6.output();


    return 0;
}
