String::String(): String(0, {}) {}

String::String(const char *raw) {
    size_ = 0;
    const char *ptr = raw;
    while (ptr) {
        ++ptr;
        ++size_;
    }

    if (size_ == 0) {
        this->raw = nullptr;
        return;
    }

    this->raw = new char[size_];
    for (int i = 0; i < size_; i++)
        this->raw[i] = raw[i];
}

String::String(int n, const char *raw) {
    if (n == 0) {
        this->raw = nullptr;
        return;
    }

    this->raw = new char[n];
    for (int i = 0; i < n; i++) {
        this->raw[i] = raw[i];
        ++size_;
    }
}

String::~String() {
    if (raw)
        delete[] raw;
}

unsigned int String::size() const { return size_; }

String &String::operator=(char *raw) {
    // todo: make a copy instead
    this->raw = raw;
    return *this;
}

char *String::to_cstring() const {
    char *copy = new char[size_];
    for (int i = 0; i < size_; ++i)
        copy[i] = raw[i];
    return copy;
}