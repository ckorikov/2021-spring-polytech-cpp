﻿// ЛАба 27.cpp: определяет точку входа для приложения.
//

#include "ЛАба 27.h"

template <typename T>
class shared_ptr {
public:
    shared_ptr();
    shared_ptr(T* ptr);
    shared_ptr(shared_ptr<T>& other);
    shared_ptr<T> operator= (shared_ptr<T>& other);
    ~shared_ptr();
    size_t use_count() const;
    bool unique() const;
private:
    T* ptr;
    size_t* count;
};

template<typename T>
shared_ptr<T>::shared_ptr() :ptr(nullptr), count(nullptr) {}

template<typename T>
shared_ptr<T>::shared_ptr(T* ptr) : ptr(ptr), count(new size_t(1)) {}

template<typename T>
shared_ptr<T>::shared_ptr(shared_ptr<T>& other) : count(other.count), ptr(other.ptr) {
    (*count)++;
}

template<typename T>
shared_ptr<T> shared_ptr<T>::operator=(shared_ptr<T>& other) {
    if (this != &other) {
        if (count) {
            if (*count == 1) {
                delete count;
                delete ptr;
            }
            else (*count)--;
        }

        ptr = other.ptr;
        count = other.count;
        (*count)++;
    }
    return *this;
}

template<typename T>
shared_ptr<T>::~shared_ptr() {
    if (count) {
        if (*count == 1) {
            delete count;
            delete ptr;
        }
        else (*count)--;
    }
}

template<typename T>
size_t shared_ptr<T>::use_count() const {
    return (count) ? *count : 0;
}

template<typename T>
bool shared_ptr<T>::unique() const {
    return (*count == 1);
}


int main() {
    shared_ptr<int> p1(new int(9));
    std::cout << "p1.use_count " << p1.use_count() << "\n";
    std::cout << "p1.unique " << ((p1.unique()) ? "true" : "false") << "\n\n";

    shared_ptr<int> p2(new int(10));
    std::cout << "p2.use_count " << p2.use_count() << "\n";
    std::cout << "p2.unique " << ((p2.unique()) ? "true" : "false") << "\n\n";

    std::cout << "===================\n";
    shared_ptr<int> p3(p1);
    std::cout << "p1.use_count " << p1.use_count() << "\n";
    std::cout << "p1.unique " << ((p1.unique()) ? "true" : "false") << "\n\n";

    std::cout << "p2.use_count " << p2.use_count() << "\n";
    std::cout << "p2.unique " << ((p2.unique()) ? "true" : "false") << "\n\n";

    std::cout << "p3.use_count " << p3.use_count() << "\n";
    std::cout << "p3.unique " << ((p3.unique()) ? "true" : "false") << "\n\n";

    std::cout << "===================\n";
    p3 = p2;
    std::cout << "p1.use_count " << p1.use_count() << "\n";
    std::cout << "p1.unique " << ((p1.unique()) ? "true" : "false") << "\n\n";

    std::cout << "p2.use_count " << p2.use_count() << "\n";
    std::cout << "p2.unique " << ((p2.unique()) ? "true" : "false") << "\n\n";

    std::cout << "p3.use_count " << p3.use_count() << "\n";
    std::cout << "p3.unique " << ((p3.unique()) ? "true" : "false") << "\n\n";
    std::system("PAUSE");
    return 0;
}