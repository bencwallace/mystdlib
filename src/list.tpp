template<typename T>
LinkedList<T>::Node::Node(const T &value, Node *next):
value(value), next(next) {}

// shallow copy
template <typename T>
LinkedList<T>::Node::Node(const Node &other): value(other.value) {}


template <typename T>
LinkedList<T>::LinkedList(): size_(0), head(nullptr) {}

// deep copy
template <typename T>
LinkedList<T>::LinkedList(const LinkedList<T> &other):
LinkedList() {
    if (!other.head)
        return;

    // not terribly elegant but will do for now
    head = new Node(*other.head);
    ++size_;

    Node *self_node = head;
    Node *other_node = other.head;
    while (other_node->next) {
        self_node->next = new Node(*other_node->next);
        self_node = self_node->next;
        ++size_;
        other_node = other_node->next;
    }
}

template <typename T>
size_t LinkedList<T>::size() const {
    return size_;
}

template <typename T>
void LinkedList<T>::insert(size_t i, const T &value) {
    if (i == 0) {
        head = new Node(value, head);
        ++size_;
        return;
    }

    if (i > size_)
        throw "List size exceeded.";

    Node *prev = nullptr;
    Node *node = head;
    for (int j = 0; j < i; j++) {
        prev = node;
        node = node->next;
    }
    
    prev->next = new Node(value, node);
    ++size_;
}

template <typename T>
T& LinkedList<T>::operator[](size_t i) {
    if (i >= size_)
        throw "List size exceeded.";

    Node *node = head;
    for (int j = 0; j < i; j++)
        node = node->next;

    return node->value;
}
