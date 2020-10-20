#include <iostream>
using namespace std;

#include "toyfactory.cpp"

int main() {
    int type = 1;
    toy* p = toyfactory::CreatToy(type);
    delete p;
    type = 2;
    p = toyfactory::CreatToy(type);
    return 0;
}