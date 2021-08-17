#include <cassert>

#include "array.h"


using mystd::Array;

int main() {
    const size_t N = 10;
    Array<int, N> x;
    int elem = 42;
    x.fill(elem);
    size_t n = 0;
    for (auto e : x) {
        assert(e == elem);
        ++n;
    }
    assert(n == N);

    return 0;
}
