/*
 * vector.h
 *
 *  Created on: Dec 1, 2016
 *      Author: jkath (modified by Ethan Safai)
 */

#ifndef VECTOR_H_
#define VECTOR_H_

#include <algorithm> // std::copy
using std::copy;

namespace myStd
{
template<typename T>
class vector
{
    /*
    Templated vector class much like stl vector container

    NOTE: elem[n] is vector component n for all n >= 0 AND n < size_v
          size_v = the number of items stored in the vector
          space = available storage capacity of the vector where size_v <= space
          if size_v < space there is space for (space - size_v) elements after
          elem[size_v-1]
    */

private:
    int size_v; // the size
    T *elem;    // pointer to the elements (or 0)
    int space;  // number of elements plus number of free slots

public:
    // default constructor
    vector()
        : size_v{0}
        , elem{nullptr}
        , space{0}
    {
    }

    // alternate constructor
    explicit vector(int s)
        : size_v{0}
        , elem{new T[s]}
        , space{s}
    {
    }

    // copy constructor (deep copy)
    vector(const vector &src)
        : size_v{src.size_v}
        , elem{new T[src.space]}
        , space{src.space}
    {
        // copy elements - std::copy() algorithm
        copy(src.elem, src.elem + size_v, elem);
    }

    // move constructor
    vector(vector&& src) noexcept
        // member-wise shallow copy
        : size_v{src.size_v}
        , elem{src.elem}
        , space{src.space}
    {
        // make src hollow
        src.size_v = 0;
        src.elem = nullptr;
        src.space = 0;
    }

    // destructor
    ~vector() noexcept
    {
        delete[] elem;
    }

    // copy assignment
    vector &operator=(const vector &src)
    {
        // check for self assignment
        if (this != &src)
        {
            // allocate new space
            T *p = new T[src.space];
            // copy elements
            copy(src.elem, src.elem + src.size_v, p);
            // deallocate old space
            delete[] elem;
            // reset elem
            elem = p;
            size_v = src.size_v;
            space = src.space;
        }
        // return self-reference
        return *this;
    }

    // move assignment
    vector& operator=(vector&& src) noexcept
    {
        // check for self assignment
        if (this != &src)
        {
            // deallocate old space
            delete[] elem;

            // member-wise shallow copy
            size_v = src.size_v;
            elem = src.elem;
            space = src.space;

            // make src hollow
            src.size_v = 0;
            src.elem = nullptr;
            src.space = 0;
        }
        // return self-reference
        return *this;
    }

    T& operator[](int n)
    {
        return elem[n]; // access: return reference
    }

    const T& operator[](int n) const
    {
        return elem[n];
    }

    int size() const { return size_v; }

    int capacity() const { return space; }

    void resize(int newsize)
    {
        // if newsize is smaller or equal to capacity, reserve will do nothing
        reserve(newsize);
        // check for making vector smaller
        if (newsize < size_v)
            size_v = newsize;
    }

    void push_back(T newObj)
    // increase vector size by one; initialize the new element with newObj
    {
        if (space == 0)
            reserve(8); // start with space for 8 elements
        else if (size_v == space)
            reserve(2 * space); // get more space
        // add newObj at end
        elem[size_v] = newObj;
        // increase the size (size_v is the number of elements)
        ++size_v;
    }

    void reserve(int newalloc)
    {
        // never decrease allocation
        if (newalloc > space)
        {
            // allocate new space
            T *p = new T[newalloc];
            // copy old elements (do a move)
            for (int i = 0; i < size_v; ++i)
		    p[i] = std::move(elem[i]);
            // deallocate old space
            delete[] elem;
            // reset elem
            elem = p;
            // reset vector capacity
            space = newalloc;
        }
    }

    using iterator = T *;
    using const_iterator = const T *;

    iterator begin() // points to first element
    {
        if (size_v == 0)
            return nullptr;
        return &elem[0];
    }

    const_iterator begin() const
    {
        if (size_v == 0)
            return nullptr;
        return &elem[0];
    }

    iterator end() // points to one beyond the last element
    {
        if (size_v == 0)
            return nullptr;
        return &elem[size_v];
    }

    const_iterator end() const
    {
        if (size_v == 0)
            return nullptr;
        return &elem[size_v];
    }

    // insert a new element val before p
    iterator insert(iterator p, const T& newObj)
    {
        // check that iterator is in bounds
        if (p >= begin() && p < end())
        {
            // where to insert (index is distance between p and begin())
            // (need to calculate this offset because p will become an invalid
            // iterator if reserve is called, as new memory - meaning new
            // location in meory - will be allocated)
            int index = p - begin();

            // make sure we have space
            if (size_v + 1 > space)
                reserve(2 * space);

            // copy elements that are after the desired index one position to
            // the right to make room for the new element
            for (iterator it = end(); it > (begin() + index); --it)
                *it = *(it - 1);

            // insert value
            *(elem + index) = newObj;
            // increment vector's size
            ++size_v;
            // return iterator pointing to newly inserted element
            return elem + index;
        }
        // return nullptr if p was out of bounds
        return nullptr;
    }

    iterator erase(iterator p) // remove element pointed to by p
    {
        // check bounds of p (to avoid seg fault)
        if (p < begin() || p >= end())
            return nullptr;
        for (iterator pos = p + 1; pos != end(); ++pos)
            *(pos - 1) = *pos; // copy element one position to the left
        // delete (end() - 1);
        --size_v;
        return p;
    }
};
}

#endif /* VECTOR_H_ */
