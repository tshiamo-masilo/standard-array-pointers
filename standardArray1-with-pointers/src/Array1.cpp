#include "Array1.h"
#include <iostream>
using namespace std;

template <class T>
Array1<T>::Array1()
{
    //ctor
}

template <class T>
Array1<T>::Array1(T a){
    length = a;
    p1 = new int*[a];
    for(int i = 0; i< a;i++){
        p1[i] = new T;
        *p1[i] = 0;
    }
    this->printPointer();

}

template <class T>
 void Array1<T>::allocateSize(int newSize ){
      //int d is array dimension and int i is the size


      //this->deallocate();
       // cout<<"object"<<endl;
        length = newSize;
        p1 = new int*[length];
        for(int i = 0; i< length;i++){
            p1[i] = new int;
            *p1[i] = 0;
        }

 }

template <class T>
void Array1<T>::printPointer(){
    if(p1 != nullptr){
        cout<<"=============1D=========\n";
        for(int i =0;i<length;i++){
            cout<<*p1[i]<<"  ";
        }
        cout<<endl;
    }else{
        cout<<"Something went wrong";

    }
}

template <class T>
void Array1<T>::printArray(){
    this->printPointer();
}

template <class T>
void Array1<T>::downSize(){
    if(length != 0){
            //delete last element of pointer
            int outPut = *p1[length-1];
            cout<<"Element "<<outPut<<endl;
        delete p1[length-1];
    }
    length--;
}

template <class T>
void Array1<T>::upSize(){
    //resize array
    //create temporary array object
    //temp variables
    T **temp1;
    //check what type of array to upsize
    if(p1==nullptr ){
        //if all arrays are null
        cout<<"nullptr err";
    }else{
        //copy pointers to temp pointer
        *p1[5] = 5;
        *p1[4] = 4;
         temp1 = new T*[length];
        for(int i = 0; i< length;i++){
            temp1[i] = new T;
            *temp1[i] = *p1[i];
        }
        //resize pointers by deleteing values and creating
        //new pointer object
        this->allocateSize(++length);
        //copying back values to original pointer
            for(int i = 0; i< length-1;i++){
                *p1[i] = *temp1[i];
                //cout<<*p1[i]<<endl;
        }

    }
}

template <class T>
void Array1<T>::add(T i){
    this->upSize();
    *p1[length-1] = i;
}

template <class T>
T Array1<T>::operator[](int index){
    return *p1[index];
}

//void insertIn(int i,int i);
template <class T>
void Array1<T>::pop(){
    this->downSize();
}



template <class T>
void Array1<T>::deallocate(){
    if( length ==0){
        cout<<"Error"<<endl;
    }else if(length !=0){
        for(int i = 0; i< length;i++){
        delete p1[i];
        }
        delete [] p1;
        p1 = nullptr;
        length = 0;
    }
}


template <class T>
Array1<T>::~Array1()
{
    this->deallocate();
}

template class Array1<int>;
