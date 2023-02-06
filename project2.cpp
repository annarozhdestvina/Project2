#include <iostream>

void doPrint() {
    std::cout << "In doPrunt()" << std::endl;
}

int print7() {
    return 7;
} 

void ReturnNothing() {
    std::cout << "Hi!" << std::endl;
}

int getValueFromUser() {
    std::cout << "enter sn integer: ";
    int x;
    std::cin >> x;
    return x;
}

int main() {

    ReturnNothing();


    int y = getValueFromUser();
    int u = getValueFromUser();

    std::cout << y << " + " << u << " = " << y+u << std::endl;

    using namespace std;

    setlocale(LC_ALL, "Russian");
    std::cout << "оатмоат" << std::endl;
    std::cout << "оатмоат" << std::endl;
    std::cout <<"Hello, world!" << std::endl;

    std::cout << "Starting main" << std::endl;
    doPrint();
    std::cout << "Ending main" << std::endl;

    int d = print7();
    std::cout << "function reterned: " << d << endl;

    int x;
    x = 5;
    cout << x << endl;

    int a = 6;
    a = a-3;
    cout << a << endl;

    int b =a;
    cout << b << endl;

    cout << a+ b << endl;

    cout << a << endl;

    int c;
    cout << c << endl;

    cout << "Enter a number: ";
    int z=0;
    cin >> a;
    cout << "You entered " << a <<endl;

    return 0;
}