#ifndef MYSTD_LIST_H
#define MYSTD_LIST_H

// todo: make namespace to avoid possible clashes with std
// todo: come up with a better definition
#define size_t unsigned int

template <typename T>
class LinkedList {
private:
    class Node {
    private:
        T value_;
    public:
        Node *next = nullptr;

        Node(const T &value, Node *next = nullptr);

        T &value();
        void set(const T &value);
    };

    int size_ = 0;
    Node *head = nullptr;

public:
    size_t size() const;
    void prepend(const T &value);

    T &operator[](size_t i);
};

#include "list.tpp"

#endif
