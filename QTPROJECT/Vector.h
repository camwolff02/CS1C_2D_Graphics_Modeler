/*
 * vector.h
 *
 *  Created on: Dec 1, 2016
 *      Author: jkath 
 *      Editor: Ethan Safai
 */

#ifndef VECTOR_H_
#define VECTOR_H_

#include <algorithm> // std::copy
using std::copy;

namespace myStd
{
//! Vector class much like the STL container 
/*!  
   NOTE: elem[n] is vector component n for all n >= 0 AND n < size_v
         size_v = the number of items stored in the vector
         space = available storage capacity of the vector where size_v <= space
         if size_v < space there is space for (space - size_v) elements after
         elem[size_v-1]
*/
template<typename T>
class vector
{
private:
    int size_v; /*!< the number of elements currently in the vector */
    T *elem;    /*!< pointer to the elements as a dynamic array (or 0) */ 
    int space;  /*!< the number of elements plus the number of free slots */

public:
    //! Default constructor
    /*!
      Initializes the vector size and capacity to 0 and the elem pointer to 
      nullptr (array is not yet initialized)
    */
    vector()
        : size_v{0}
        , elem{nullptr}
        , space{0}
    {
    }
    //! Alternate constructor
    /*!
      Initializes the vector size to 0, elem to a dynamic array of size s and 
      sets the vectory capacity to s as well
      \param s as an integer (intial capacity)
    */
    explicit vector(int s)
        : size_v{0}
        , elem{new T[s]}
        , space{s}
    {
    }
    //! Copy constructor
    /*!
      Initializes this vector by making a copy of the other
      \param src as a constant vector reference of the same type (T)
    */
    vector(const vector &src)
        : size_v{src.size_v}
        , elem{new T[src.space]}
        , space{src.space}
    {
        // copy elements - std::copy() algorithm
        copy(src.elem, src.elem + size_v, elem);
    }

    //! Move constructor
    /*!
      Initializes this vector by moving the other vector into this one (the 
      other vector will become 'hollow')
      \param src as a vector r-value reference of the same type (T)
    */
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

    //! Destructor
    /*!
      Frees the vectors dynamic array
    */
    ~vector() noexcept
    {
        delete[] elem;
    }

    //! Copy assignment
    /*!
      Assigns the other vector to this one by making a copy
      \param src as a constant vector reference
      \return a reference to this vector
    */
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

    //! Move assignment
    /*!
      Moves the other vector into this one (the other vector will become 
      'hollow')
      \param src as a vector r-value reference
      \return a reference to this vector
    */
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

    //! Subscript operator overload
    /*!
      Returns a reference to the element at the specified index
      \param n as an integer
      \return a reference to the element at index n
    */
    T& operator[](int n)
    {
        return elem[n]; // access: return reference
    }

    //! Constant subscript operator overload
    /*!
      Returns a constant reference to the element at the specified index
      \param n as an integer
      \return a constant reference to the element at index n
    */
    const T& operator[](int n) const
    {
        return elem[n];
    }

    //! Method size
    /*!
      Returns the number of elements currently in the vector
      \return the vector's size
    */
    int size() const { return size_v; }

    //! Method capacity
    /*!
      Returns the number of elements plus the number of free slots in the vector
      \return the vector's capacity
    */
    int capacity() const { return space; }

    //! Method resize
    /*!
      Resizes the vector to the specified size - will either shrink the vector's
      size, increase its capacity, or neither
      \param newSize as an integer
    */
    void resize(int newsize)
    {
        // if newsize is smaller or equal to capacity, reserve will do nothing
        reserve(newsize);
        // check for making vector smaller
        if (newsize < size_v)
            size_v = newsize;
    }

    //! Method push_back
    /*!
      Adds a new element to the vector, doubling the vectors capacity if more 
      space is required
      \param newObj as the new element
    */
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

    //! Method reserve
    /*!
      Reserves more space for the vector if the newalloc is grater than the 
      vector's current capacity by making a copy
      \param newalloc as the vector capacity
    */
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

    /*! \var typedef T* iterator */
    using iterator = T *;
    /*! \var typedef const T* const_iterator */
    using const_iterator = const T *;

    //! Method begin
    /*!
      Returns an iterator to the first element or nullptr if the vector is empty
      \return iterator to the first element
    */
    iterator begin() 
    {
        if (size_v == 0)
            return nullptr;
        return &elem[0];
    }

    //! Method begin
    /*!
      Returns a const_iterator to the first element or nullptr if the vector is 
      empty
      \return const_iterator to the first element
    */
    const_iterator begin() const
    {
        if (size_v == 0)
            return nullptr;
        return &elem[0];
    }

    //! Method end
    /*!
      Returns an iterator to one element past the last one or nullptr if the 
      vector is empty
      \return iterator to one beyond the last element
    */
    iterator end() 
    {
        if (size_v == 0)
            return nullptr;
        return &elem[size_v];
    }

    //! Method end
    /*!
      Returns a const_iterator to one element past the last one or nullptr if 
      the vector is empty
      \return const_iterator to one beyond the last element
    */
    const_iterator end() const
    {
        if (size_v == 0)
            return nullptr;
        return &elem[size_v];
    }

    //! Method insert
    /*!
      Inserts a new element into the vector at the location specified by p as 
      long as it's at the beginning or before the last element
      \param p as an iterator
      \param newObj as the new element
      \return iterator to the newly inserted element or nullptr if p was out of
              bounds
    */
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

    //! Method erase
    /*!
      Erases the element at the location specified by p if p points to an 
      element in the container
      \param p as an iterator
      \return iterator to the location of the removed element or nullptr if p 
              was out of bounds
    */
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
