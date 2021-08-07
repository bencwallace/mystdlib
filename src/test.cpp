#include <cassert>

#include "linkedList.h"

int main() {
    LinkedList<int> list;
    assert(list.size() == 0);

    int x1 = 42;
    list.prepend(x1);
    assert(list.size() == 1);
    assert(list.first() == x1);

    return 0;
}