#include <iostream>
#include <time.h>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include <display.h>
#include <triangle.h>

using namespace std;

int main() {
    const int height = 20;
    const int width = 70;
    Display display(width, height);

    double b1=10, h1=5;
    Triangle t1("T1", Point(50,5), b1, h1);

    double b2=6, h2=12;
    Triangle t2("T2", Point(0,0), b2, h2);

    display.addShape(t1);
    display.addShape(t2);
    display.refresh();

    return 0;
}
