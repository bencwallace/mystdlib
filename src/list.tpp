template<typename T>
List<T>::Node::Node(const T &value, Node *next):
value(value), next(next) {}

// shallow copy
template <typename T>
List<T>::Node::Node(const Node &other): value(other.value) {}

template <typename T>
List<T>::List(): size_(0), head(nullptr) {}

// deep copy
template <typename T>
List<T>::List(const List<T> &other):
List() {
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
List<T>::List(size_t num_copies, const T &val): List() {
    if (num_copies < 1)
        return;
    head = new Node(val, nullptr);
    ++size_;

    Node *node = head;
    for (int i = 1; i < num_copies; ++i) {
        node->next = new Node(val, nullptr);
        node = node->next;
        ++size_;
    }
}

template <typename T>
List<T>::~List() {
    Node *prev = nullptr;
    Node *node = head;
    for (int i = 0; i < size(); ++i) {
        prev = node;
        node = node->next;
        delete prev;
    }
}

template <typename T>
size_t List<T>::size() const {
    return size_;
}

template <typename T>
void List<T>::insert(size_t i, const T &value) {
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
void List<T>::remove(size_t n) {
    if (n >= size())
        throw "No such element.";

    Node *prev = nullptr;
    Node *node = head;
    for (int i = 0; i < n; ++i) {
        prev = node;
        node = node->next;
    }

    if (!prev) {
        // removing first element
        prev = head;
        head = head->next;
        delete prev;
    } else {
        // removing some other element
        prev->next = node->next;
        delete node;
    }
    --size_;
}

template <typename T>
T &List<T>::operator[](size_t i) {
    if (i >= size_)
        throw "List size exceeded.";

    Node *node = head;
    for (int j = 0; j < i; j++)
        node = node->next;

    return node->value;
}
