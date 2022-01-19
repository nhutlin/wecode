#include <iostream>
using namespace std;
#define MAXN 100
typedef struct stack {
    int a[MAXN];
    int n = 0;
}stack;
bool isEmpty(stack s) {
    return (s.n == 0);
}
bool isFull(stack s) {
    return (s.n == MAXN);
}
void push(int x, stack &s) {
    s.a[s.n++] = x;
}
void pop(stack &s) {
    s.a[s.n--] = 0;
}
int top(stack s) {
    return (s.a[s.n - 1]);
}
void decimal_to_binary(int n) {
    if (n == 0) cout << 0;
    else {
        stack s;
        while (n != 0) {
            push(n % 2, s);
            n /= 2;
        }
        while (!isEmpty(s)) {
            cout << top(s);
            pop(s);
        }
    }
}
