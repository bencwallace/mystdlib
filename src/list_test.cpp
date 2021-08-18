#include <cassert>
#include <iostream>
#include <stdexcept>

#include "list.h"

using mystd::List;

int main() {
    List<int> list;
    assert(list.size() == 0);
    
    List<int> empty_list_copy(list);
    assert(empty_list_copy.size() == 0);

    int x1 = 42;
    list.insert(0, x1);                 // insert at front
    assert(list.size() == 1);
    assert(list[0] == x1);

    int x2 = 11;
    list[0] = x2;
    assert(list[0] == x2);

    int x3 = 32;
    list.insert(1, x3);
    assert(list.size() == 2);           // insert at back
    assert(list[1] == x3);

    int x4 = 44;
    list.insert(1, x4);                 // insert in middle
    assert(list.size() == 3);
    assert(list[1] == x4);              // list should be {11, 44, 32} at this point

    List<int> list_copy(list);          // test copy
    assert(list_copy.size() == list.size());

    list_copy.remove(0);                // test remove first element
    assert(list_copy.size() == 2);
    assert(list_copy[0] == 44);
    assert(list.size() == 3);             // test copy really was a copy
    assert(list[0] == 11);

    list.remove(1);                     // test remove non-first element
    assert(list.size() == 2);
    assert(list[0]);

    delete new List<char>;              // test destructor

    List<char> *xs = new List<char>(10, 'x');    // test fill constructor
    assert(xs->size() == 10);
    delete xs;                          // test destructor

    List<double> special = {0, 3.14, 2.718, 42};
    assert(special.size() == 4);

    try {
        special[4];                     // test out_of_range error is thrown
        assert(false);
    } catch (std::out_of_range err) {}

    return 0;
}
