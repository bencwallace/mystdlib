#ifndef MYSTD_LIST_H
#define MYSTD_LIST_H

// todo: make namespace to avoid possible clashes with std
// todo: come up with a better definition
#define size_t unsigned int

template <typename T>
class LinkedList {
private:
    struct Node {
        T value;
        Node *next;

        Node(const T &value, Node *next = nullptr);
        Node(const Node &other);
    };

    int size_;
    Node *head;

public:
    LinkedList();
    LinkedList(const LinkedList<T> &other);

    size_t size() const;
    void insert(size_t i, const T &value);

    T &operator[](size_t i);
};

#include "list.tpp"

#endif
