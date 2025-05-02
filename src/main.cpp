#include <iostream>

#include "data.h"

class Data: public AbstractData {
public:
    void print() const override { std::cout << "Data" << std::endl; } 
};

int main() {
    std::cout << "Hello, Xmake with Google Test and Google Benchmark!" << std::endl;

    Data data;
    data.print();
    return 0;
}