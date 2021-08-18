#ifndef MYSTD_STRING_H
#define MYSTD_STRING_H

namespace mystd {

class String {
private:
    size_t size_ = 0;
    char *raw;
    using iterator = char*;

public:
    String();
    String(const String&);
    String(const char*);
    String(size_t, char);
    ~String();

    iterator begin();
    iterator end();

    size_t size() const;
    const char *to_cstring() const;
};

#include "string.tpp"

}

#endif
