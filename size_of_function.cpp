#include<iostream>
using namespace std;

int main(){
  int x;
  cout << sizeof(x) << endl;
  cout << sizeof(int) << endl;
  
  cout << "Char "  << sizeof(char) << endl;
  cout << "Bool "  << sizeof(bool) << endl;
  cout << "Float " << sizeof(float) <<endl;
  cout << "Double "  << sizeof(double) <<endl;
  
  char bucket = 'A';
  cout << bucket << endl;
  
  int mybucket = bucket;
  cout << mybucket << endl;
  
  
  return 0;
}
