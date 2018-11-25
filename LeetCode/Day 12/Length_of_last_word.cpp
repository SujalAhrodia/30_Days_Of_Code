/*
Count the length of last word
eg: [a], [ a], [  a], [a ], [a  ], [a b]
*/

class Solution {
public:
    int lengthOfLastWord(string s) 
    {
         stringstream ss(s);
         string word;

         while(ss>>word);

        return word.size();    
    }
};


/*
Count spaces only  between the words.
starting and trailing spaces are ignored.

*/

class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        stringstream ss(s);
        string word;
        int space=0;
        
        //counts spaces only between words, starting and trailing space are ignored!
        while(ss>>word)
        {
            space++;
        }
        cout<<"total spaces:"<<space-1;
    }
};
