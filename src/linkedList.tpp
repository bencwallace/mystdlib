template<typename T>
LinkedList<T>::Node::Node(const T &value, Node *next):
value_(value), next(next) {}

template <typename T>
void LinkedList<T>::Node::set(const T &value) {
    value_ = value;
}

template <typename T>
const T &LinkedList<T>::Node::value() const {
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
const T &LinkedList<T>::first() const {
    return head->value();
}

template <typename T>
void LinkedList<T>::setFirst(const T& value) {
    if (head == nullptr)
        head = new Node(value);
    head->set(value);
}
