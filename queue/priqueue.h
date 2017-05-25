#ifndef __PRIQUEUE_H__
#define __PRIQUEUE_H__

template <class T>
class priqueue
{
public:

    priqueue(int m);

    ~priqueue();

    void insert(T t);

    T extractmin();

private:    

    int n;
    int maxsize;
    T *x;
    void swap(int i, int j)
    {
        T t = x[i];
        x[i] = x[j];
        x[j] = t;
    }
};

#include "priqueue.cpp"

#endif
