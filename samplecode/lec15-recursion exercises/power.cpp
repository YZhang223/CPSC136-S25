#include <iostream>
using namespace std;

int power(int, int);

int main()
{
  int a, b;
  cout << "Enter two integers: ";
  cin >> a >> b;

  cout << power(a, b) << endl;

}

//precondition: a > 0, b > 0
//this function returns a^b
int power(int a, int b)
{
  if (b == 1){
    return a;
}
else{
      a = a*a;
    return a * power(a, b-1);
}
}
