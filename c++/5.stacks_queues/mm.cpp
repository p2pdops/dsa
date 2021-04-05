#include <iostream>
#include <string>
#include "stack.cpp"

using namespace std;

bool isBalanced(char *exp)
{
    int length = strlen(exp);
    Stack s(length);
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
            s.push(exp[i]);
        if (exp[i] == ')')
        {
            if (s.isEmpty())
                return false;
            s.pop();
        }
    }
    
    return s.isEmpty();
}

int main()

{
}