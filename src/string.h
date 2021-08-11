#ifndef MYSTD_STRING_H
#define MYSTD_STRING_H

namespace mystd {

class String {
private:
    unsigned int size_ = 0;
    char *raw;

public:
    String();
    String(const char *raw);
    ~String();

    unsigned int size() const;

    const char  *to_cstring() const;
};

#include "string.tpp"

}

#endif
