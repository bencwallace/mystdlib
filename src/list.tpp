template<typename T>
LinkedList<T>::Node::Node(const T &value, Node *next):
value_(value), next(next) {}

template <typename T>
void LinkedList<T>::Node::set(const T &value) {
    value_ = value;
}

template <typename T>
T &LinkedList<T>::Node::value() {
    return value_;
}

template <typename T>
size_t LinkedList<T>::size() const {
    return size_;
}

template <typename T>
void LinkedList<T>::prepend(const T &value) {
    head = new Node(value, head);
    ++size_;
}

template <typename T>
T& LinkedList<T>::operator[](size_t i) {
    if (i >= size_)
        throw "List size exceeded.";
    Node *node = head;
    for (int j = 0; j < i; j++)
        node = node->next;
    return node->value();
}
