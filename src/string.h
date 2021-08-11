#ifndef MYSTD_STRING_H
#define MYSTD_STRING_H

namespace mystd {

class String {
private:
    unsigned int size_ = 0;
    char *raw;

public:
    String();
    String(int n, const char *raw = {});
    String(const char *raw);
    ~String();

    unsigned int size() const;

    char  *to_cstring() const;
};

#include "string.tpp"

}

#endif
