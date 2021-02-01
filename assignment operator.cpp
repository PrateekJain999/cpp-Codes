#include <iostream>
using namespace std;
 
class Distance {
   private:
      int feet;             // 0 to infinite
      int inches;           // 0 to 12
      
   public:
      Distance() 
	  {
         feet = 0;
         inches = 0;
      }
      Distance(int f, int i) 
	  {
         feet = f;
         inches = i;
      }
      void operator = (const Distance &D ) 
	  { 
         feet = D.feet;
         inches = D.inches;
      }
      void displayDistance() 
	  {
         cout << "Feet: " << feet <<  " Inches:" <<  inches << endl;
      }
};

main()
{
   Distance D1(11, 10), D2(5, 11);

   cout << "First Distance : "; 
   D1.displayDistance();
   cout << "Second Distance :"; 
   D2.displayDistance();

   D1 = D2;
   cout<<"\n\n:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>:>\n";
   cout << "First Distance :"; 
   D1.displayDistance();
}
