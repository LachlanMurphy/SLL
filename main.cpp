#include <iostream>
#include "SLL.hpp"
#include <string>

using namespace std;

int main() {


    SLL list;

    node stacey;
    stacey.name = "stacey";
    stacey.key = 69;

    node will;
    will.name = "will";
    will.key = 1;

    node elliott;
    elliott.name = "elliott";
    elliott.key = 8723;

    list.add(nullptr, stacey);
    list.printList();

    list.add(list.search(69), will);
    list.printList();

    list.add(list.search(69), elliott);
    list.printList();

    list.remove(69);
    list.printList();
}