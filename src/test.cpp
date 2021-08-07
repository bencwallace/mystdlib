#include <cassert>

#include "list.h"

int main() {
    LinkedList<int> list;
    assert(list.size() == 0);

    int x1 = 42;
    list.prepend(x1);
    assert(list.size() == 1);
    assert(list.first() == x1);

    int x2 = 24;
    list.setFirst(x2);
    assert(list.size() == 1);
    assert(list.first() == x2);

    return 0;
}
