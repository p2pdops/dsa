#include <iostream>
#include <stack>

using namespace std;
int main()
{
    stack<int> st;
    char exp[100];cin >> exp;
    //32+5*4/1-
    for (int i = 0; exp[i]; i++) {
        if (exp[i] == ' ') continue;
        if (isdigit(exp[i])) {
            int num = (exp[i] - '0'); // while (isdigit(exp[i])) num = num * 10 + (exp[i++] - '0');i--;
            st.push(num);
        } else {
            int val1 = st.top();st.pop();
            int val2 = st.top();st.pop();
            switch (exp[i]) {
            case '+':st.push(val2 + val1);break;
            case '-':st.push(val2 - val1);break;
            case '*':st.push(val2 * val1);break;
            case '/':st.push(val2 / val1);break;
            }
        }
    }
    cout << st.top() << endl;
}