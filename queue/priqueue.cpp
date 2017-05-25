template <class T>
priqueue<T>::priqueue(int m)
{
    maxsize = m;
    x = new T[maxsize + 1];
    n = 0;
}

template <class T>
priqueue<T>::~priqueue()
{
    delete[]x;
}

template <class T>
void priqueue<T>::insert(T t)
{
    if (n >= maxsize)
    {
        return;
    }

    x[++n] = t;

    for (int i = n; i > 1 && x[i/2] > x[i]; i = i / 2)
    {
        swap(i/2, i);
    }
}

template <class T>
T priqueue<T>::extractmin()
{
    if (n < 1)
    {
        // throw exception
    }

    T t = x[1];
    x[1] = x[n--];
    
    int c;
    for (int i = 1; (c = 2*i) <= n; i =c)
    {
        if (c+1 <= n && x[c] > x[c+1])
        {
            c++;
        }

        if (x[i] <= x[c])
        {
            break;
        }

        swap(c, i);
    }

    return t;
}
