#include <iostream>
using namespace std;
int main()
{ 
  int i,j,k;
  for (int j = 0; j <9; j++)
  {
    for (k = 8;k > j;k -- )     
    {
      cout<<" ";
    }
         for (int i = 0; i < j; i += 1)
         {
        cout<<"#";
        }
  cout<<"\n";
    
  }
}
