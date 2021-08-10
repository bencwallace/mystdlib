#ifndef MYSTD_STREAM_H
#define MYSTD_STREAM_H

#include <cstdio>
#include <unistd.h>


class OutStream {
private:
    FILE *fd;

public:
    OutStream(FILE *fd);

    // todo: make this a function of my String
    void my_write(int n, const char *) const;
};

const OutStream std_out = OutStream(stdout);

#include "stream.tpp"

#endif
