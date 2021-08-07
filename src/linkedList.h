#ifndef MYSTD_LIST_H
#define MYSTD_LIST_H

// todo: make namespace to avoid possible clashes with std
// todo: come up with a better definition
#define size_t int

template <typename T>
class LinkedList {
private:
    class Node {
    private:
        T value_;
        Node *next = nullptr;
    public:
        Node(const T &value, Node *next);
        const T &value() const;
    };

    int size_ = 0;
    Node *head = nullptr;

public:
    size_t size() const;
    void prepend(const T &item);
    const T &first() const;
};

#include "linkedList.tpp"

#endif
