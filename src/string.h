#ifndef MYSTD_STRING_H
#define MYSTD_STRING_H

namespace mystd {

class String {
private:
    size_t size_ = 0;
    char *raw;

public:
    String();
    String(const char *raw);
    ~String();

    size_t size() const;

    const char *to_cstring() const;
};

#include "string.tpp"

}

#endif
