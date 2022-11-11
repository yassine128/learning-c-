#include <iostream>
#include <vector>
#include <string>

using namespace std;

int fib(int n) {
    if ( (n==1) || (n==0) ) {
        return n;
    }
    else {
        return (fib(n-1) + fib(n-2));
    }
}

int main()
{
  int myVar;
  cout << "Value n: ";
  cin >> myVar;
  cout << fib(myVar);
}