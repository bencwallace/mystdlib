#include <cassert>

#include "list.h"

int main() {
    LinkedList<int> list;
    assert(list.size() == 0);

    int x1 = 42;
    list.prepend(x1);
    assert(list.size() == 1);
    assert(list[0] == x1);

    int x2 = 11;
    list[0] = x2;
    assert(list[0] == x2);

    list.prepend(11);
    assert(list.size() == 2);
    assert(list[1] == x2);

    return 0;
}
