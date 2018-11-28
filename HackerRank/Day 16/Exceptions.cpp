#include <bits/stdc++.h>

using namespace std;

int main(){
    string S;
    cin >> S;

    try 
    {
        int a=stoi(S);
        cout<<a;
    }
    catch (exception)
    {
        cout<<"Bad String";
    }
    return 0;
}

/*

//Another example

int main() 
{ 
   int x = -1; 
  
   // Some code 
   cout << "Before try \n"; 
   try { 
      cout << "Inside try \n"; 
      if (x < 0) 
      { 
         throw x; 
         cout << "After throw (Never executed) \n"; 
      } 
   } 
   catch (int x ) { 
      cout << "Exception Caught \n"; 
   } 
   catch (...)
   {
    cout<<"Default Exception"<<endl;
   }
   cout << "After catch (Will be executed) \n"; 
   return 0; 
} 
*/
