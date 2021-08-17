template <typename T, size_t N>
void Array<T, N>::fill(const T &value) {
    for (size_t i = 0; i < N; ++i)
        array[i] = value;
}

template <typename T, size_t N>
typename Array<T, N>::iterator Array<T, N>::begin() {
    return array;
}

template <typename T, size_t N>
typename Array<T, N>::iterator Array<T, N>::end() {
    return array + N;
}

template <typename T, size_t N>
const T &Array<T, N>::operator[](size_t i) const {
    return array[i];
}

template <typename T, size_t N>
size_t Array<T, N>::size() const { return N; }
