#ifndef __BIT_VECTOR_H__
#define __BIT_VECTOR_H__

#define BITSPERWORD 32
#define SHIFT 5
#define MASK 0x1F
#define N 10000000

int a[1 + N/BITSPERWORD];

void bv_set(int i) {        a[i>>SHITF] |=  (1<<(i & MASK)); }
void bv_clr(int i) {        a[i>>SHIFT] &= ~(1<<(i & MASK)); }
int bv_test(int i) { return a[i>>SHIFT] &   (1<<(i & MASK)); }

#endif // __BIT_VECTOR_H__
