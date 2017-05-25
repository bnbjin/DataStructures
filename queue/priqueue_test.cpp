#include "priqueue.h"
#include <cstdio>

int main()
{
    priqueue<int> pq(10);

    pq.insert(5);
    pq.insert(4);
    pq.insert(3);
    pq.insert(2);
    pq.insert(6);
    pq.insert(1);
    pq.insert(0);

    printf("%d\n", pq.extractmin());
    printf("%d\n", pq.extractmin());
    printf("%d\n", pq.extractmin());
    printf("%d\n", pq.extractmin());
    printf("%d\n", pq.extractmin());
    printf("%d\n", pq.extractmin());
    printf("%d\n", pq.extractmin());

    return 0;
}
