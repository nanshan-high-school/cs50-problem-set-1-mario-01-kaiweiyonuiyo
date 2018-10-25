#include <iostream>
using namespace std;
int main()
{ 
  cout << "請輸入高度:";
  int i,j,k;
  int height;
  cin >> height;

  if(height>8||height<=0){
       cout<<"out of range";
       return 0;}
   for (int j = 0; j <height+1; j++)
   {
     for (k = height+1;k > j;k -- )     
     {
      cout<<" ";
     }
          cout<<"\t";
          for (int i = 0; i < j; i += 1)
          {
          cout<<"#";
          }
   cout<<"\n";
    
  }
  return 0;
}

