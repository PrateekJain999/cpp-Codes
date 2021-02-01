#include <iostream>
 
using namespace std;
 
class adding {
  int x, y;
 
public:
  void input() {
    cout << "Input two distance in km\n";
    cin >> x >> y;
  }
 
  void add() 
  {
    cout << "Result = " << x + y;
  }
 
};
 
int main()
{
   adding a; // Creating object of class
 
   a.input();
   a.add();
 
   return 0;
}
