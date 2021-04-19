#include <iostream>
#include <stack>

int main()
{

    std::stack<int> fac_stack;

    int n;
    std::cin >> n;
    int t = n;
    while (t)
        fac_stack.push(t--);

    int factorial = fac_stack.top();
    fac_stack.pop();

    while (!fac_stack.empty())
    {
        factorial *= fac_stack.top();
        fac_stack.pop();
    }

    std::cout << "Factorial of " << n << " is " << factorial;
}