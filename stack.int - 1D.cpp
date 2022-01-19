#include <iostream>
using namespace std;
#define MAXN 100
typedef struct stack {
    int s[MAXN];
    int n = 0;
}stack;
bool isEmpty(stack s) {
    return (s.n == 0);
}
bool isFull(stack s) {
    return (s.n == MAXN);
}
void push(int x, stack &s) {
    s.s[s.n++] = x;
}
void pop(stack &s) {
    s.s[s.n--] = 0;
}
int top(stack s) {
    return (s.s[s.n-1]);
}
void Testing_Push_Pop_Top_Stack(stack s) {
    cout << "output: ";
    int x;
    while (cin >> x) {
        if (x == -1) break;
        if (x != 0) push(x, s);
        else if (x == 0 && !isEmpty(s)) {
            cout << top(s) << ' ';
            pop(s);
        }
    }
    cout << "\ntop: ";
    if (!isEmpty(s)) cout << top(s);
}
