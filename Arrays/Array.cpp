#include "Array.h"
#include <stdexcept>

/**
 * @brief 
 *  TODO: Add more functionality for the arrays.
 */


/**
 * @brief Construct a new Array:: Array object
 * 
 * @param size 
 */
Array::Array(int size) {
    this->size = size;
    data = new int[size];
}

/**
 * @brief 
 * 
 * @param index 
 * @return int& 
 */
int& Array::operator[](int index) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("ERROR: Index out of bounds.");
    }
    return data[index];
}

Array::~Array() {
    delete[] data;
}