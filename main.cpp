#include "stack.h"

int main() {
    Stack stk;
    stk.push(6);
    stk.push(60);
    stk.push(40);
    stk.show(); //  output 6 60 40
    stk.multiPop(2);
    stk.show(); // output 6
    Stack st2(stk);
    st2.show(); // output 6
    Stack st3;
    st3 = st2;
    st3.show(); //  output 6
    return 0;
}