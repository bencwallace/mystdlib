OutStream::OutStream(FILE *fd): fd(fd) {}

OutStream &OutStream::operator<<(const String &s) {
    write(fileno(fd), s.to_cstring(), s.size());
    return *this;
}
