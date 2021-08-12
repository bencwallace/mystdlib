#ifndef MYSTD_LIST_H
#define MYSTD_LIST_H

namespace mystd {

template <typename T>
class List {
private:
    struct Node {
        T value;
        Node *next;

        Node(const T &value, Node *next = nullptr);
        Node(const Node &other);
        ~Node() = default;
    };

    int size_;
    Node *head;

public:
    List();
    List(size_t num_copies, const T &val);
    List(const List<T> &other);
    ~List();

    size_t size() const;
    void insert(size_t i, const T &value);
    void remove(size_t n);

    T &operator[](size_t i);
};

#include "list.tpp"

}

#endif
