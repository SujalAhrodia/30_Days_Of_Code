#include <iostream>

using namespace std;

class Solution 
{    
    char stack[10];
    char queue[10];
    int top_s;
    int top_q, back_q;
    
    public:
      Solution() 
      { 
        top_s = -1;
        top_q = -1, back_q = -1;
      }
      void pushCharacter(char ch) 
      {
        if(top_s < 0)
        {
            top_s = 0;
            stack[top_s] = ch;
        } 
        else
        {
            stack[++top_s] = ch;
        }
      }
      void enqueueCharacter(char ch) 
      {
          if(top_q<0 && back_q<0)
          {
              top_q = back_q = 0;
              queue[back_q] = ch;
          }
          else
          {
              queue[++back_q] = ch;
          }
      }
      char popCharacter() 
      {
          if(top_s < 0)
            return 0;    
          else
          {
              return stack[top_s--];
          }         
      }
      char dequeueCharacter() 
      {
        if(top_q<0 && back_q<0 && top_q>back_q)
            return 0;
        else
        {
            return queue[top_q++];
        }
      }
};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}
