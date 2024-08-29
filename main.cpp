#include <iostream>

bool equals(int a, int b);
bool less(int a, int b);
bool more(int a, int b);

int main(int, char**)
{
    return 0;
}

bool equals(int a, int b)
{
    return a == b;
}

bool less(int a, int b)
{
    return a < b;
}

bool more(int a, int b)
{
    return a > b;
}
