#ifndef MYSTD_ARRAY_H
#define MYSTD_ARRAY_H

#include <cstddef>

namespace mystd {

template <typename T, size_t N>
class Array {
private:
    T array[N];
    using iterator = T*;

public:
    iterator begin();
    iterator end();

    const T& operator[](size_t i) const;

    size_t size() const;

    void fill(const T&);
};

#include "array.tpp"

}

#endif
