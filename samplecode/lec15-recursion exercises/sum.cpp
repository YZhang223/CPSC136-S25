#include <iostream>
using namespace std;

int sum(int, int);

int main()
{
  int a, b;
  cout << "Enter two integers: ";
  cin >> a >> b;

  cout << sum(a, b) << endl;

}

//precondition: a > 0, b >= a
//this function returns a + (a+1) + ... + b
int sum(int a, int b)
{
  if (a && b !<= 0){
     a + sum(a + 1 , b+)
  }
  else{
    return 0;
  }
}
