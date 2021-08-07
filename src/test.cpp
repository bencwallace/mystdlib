#include <cassert>

#include "list.h"

int main() {
    LinkedList<int> list;
    assert(list.size() == 0);

    int x1 = 42;
    list.insert(0, x1);         // insert at front
    assert(list.size() == 1);
    assert(list[0] == x1);

    int x2 = 11;
    list[0] = x2;
    assert(list[0] == x2);

    int x3 = 32;
    list.insert(1, x3);
    assert(list.size() == 2);   // insert at back
    assert(list[1] == x3);

    int x4 = 44;
    list.insert(1, x4);         // insert in middle
    assert(list.size() == 3);
    assert(list[1] == x4);

    return 0;
}
