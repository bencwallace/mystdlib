#ifndef MYSTD_STRING_H
#define MYSTD_STRING_H

namespace mystd {

class String {
private:
    int size_ = 0;
    char *raw;

public:
    String();
    String(int n, const char *raw = {});
    String(const char *raw);
    ~String();

    String operator+(const String &other) const;
};

#include "string.tpp"

}

#endif
