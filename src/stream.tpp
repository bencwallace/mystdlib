OutStream::OutStream(FILE *fd): fd(fd) {}

void OutStream::my_write(int n, const char *str) const {
    write(fileno(fd), str, n);
}

void OutStream::my_write(const String &s) const {
    write(fileno(fd), s.to_cstring(), s.size());
}
