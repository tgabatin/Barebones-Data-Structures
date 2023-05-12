#ifndef ARRAY_H
#define ARRAY_H

class Array {
    private:
        int* data;
        int size;

    public:
        Array(int size);
        int& operator[](int index);
        ~Array();
};

#endif