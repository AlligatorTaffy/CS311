#ifndef __ARRAYDB_HPP__
#define __ARRAYDB_HPP__

#include <iostream>
using namespace std;

template <class Type>
class ArrayDb
{
    unsigned int size;
protected:
    Type *arr_ptr;
    
public:
    // Default constructor
    ArrayDb();
    
    // Create a constructor that will accept the size of the array
    // and a value to initialize the array.  Default initialization = 0
    ArrayDb(unsigned int n, Type val = 0.0);
    
    // Initialize the array to another array given the length of the array
    ArrayDb(const Type *pn, unsigned int n);
    
    // Copy constructor
    ArrayDb(const ArrayDb &a);
    
    // Destructor
    ~ArrayDb();
    
    // Get Array Size
    unsigned int get_ary_size() const
    {
        return size;
    }
    
    // Methods
    Type &operator[](int i);
    const Type &operator[](int i) const;
    ArrayDb<Type> &operator=(const ArrayDb<Type> &a);
    template <class Ntype>
    friend ostream &operator<<(ostream & os, const ArrayDb<Ntype> &a);
};
#endif
