#ifndef MYSTD_LIST_H
#define MYSTD_LIST_H

#include <initializer_list>

namespace mystd {

template <typename T>
class List {
private:
    struct Node {
        T value;
        Node *next;

        Node(const T&, Node* = nullptr);
        Node(const Node&);
        ~Node() = default;
    };

    size_t size_;
    Node *head;

public:
    List();
    List(size_t, const T&);
    List(const List<T>&);
    List(std::initializer_list<T>);
    ~List();

    size_t size() const;
    void insert(size_t, const T&);
    void remove(size_t);

    T &operator[](size_t);
};

#include "list.tpp"

}

#endif
