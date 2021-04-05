#include <iostream>
#include <string>
#include "stack.cpp"

using namespace std;

bool isOperand(char x) { return !(x == '+' || x == '-' || x == '*' || x == '/'); }
int pre(char x) { return (x == '+' || x == '-') ? 1 : (x == '*' || x == '/') ? 2
                                                                             : 0; }

int main()
{
    char infix[30];
    cin >> infix;

    char *postfix = new char[strlen(infix) + 1];
    Stack s(strlen(infix));

    int i = 0, j = 0;
    while (infix[i] != '\0')
    {
        if (isOperand(infix[i]))
        {
            postfix[j++] = infix[i++];
        }
        else if (pre(infix[i]) > pre(s.peek(1)))
        {
            s.push(infix[i++]);
        }
        else
        {
            postfix[j++] = s.pop();
        }
    }

    while (!s.isEmpty())
    {
        postfix[j++] = s.pop();
    }
    postfix[j] = '\0';

    cout << postfix << endl;
}