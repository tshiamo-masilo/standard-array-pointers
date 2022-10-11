#ifndef ARRAY1_H
#define ARRAY1_H

#include<iostream>

using namespace std;


template <class T>
class Array1
{
    public:

        Array1();
        Array1(T a);

        void printArray();

        void add(T i);
        //void insertIn(int i,int i);
        void pop();

        T operator[](int);
        virtual ~Array1();

    protected:

    private:
        void allocateSize(int i);
        void deallocate();
        void printPointer();
        //void allocateSize(int, int);
        void upSize();
        void downSize();
        int length =0;
        //int height=0;
        T **p1 = nullptr;
        //int ***p2 =nullptr;

};

#endif // ARRAY1_H
