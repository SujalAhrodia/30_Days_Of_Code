/*
RegEx:
Enclosed within square brackets. Specify the what you'd like your expression to match within square brackets; 
for example, [a-f] will match any lowercase a through f character.
Predefined: \ followed by a letter. For example, \d for matching digits (0-9) or \D for matching non-digits. 
There are also additional predefined character classes that are followed by a set of curly braces, 
such as \p{Punct} which matches punctuation (i.e.: !"#$%&'()*+,-./:;<=>?@[]^_`{|}~). 

Some key constructs to know are:

. The period will match any character; it does not have to be a letter.
+ When appended to a character or character class, it means 'one or more instances of the previous character'.
* When appended to a character or character class, it means 'zero or more instances of the previous character'.
^ if this is before a character class, it means you're matching the first character; however, if this is the first character inside a bracketed character class, it means negation/not. For example, ^[a].+ or ^a.+ matches any consecutive sequence of 2 or more characters starting with the letter a, and ^[^a].+ matches any consecutive sequence of 2 or more characters not starting with a.
$ When appended to a character or character class, it means 'ends with the previous character'. For example, .+a$ will match a sequence of 2 or more characters ending in a. 

*/

#include <bits/stdc++.h>
#include <regex>

using namespace std;

vector<string> split_string(string);

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    regex reg(".+@gmail\\.com$");
    vector<string> ans;

    for (int N_itr = 0; N_itr < N; N_itr++) {
        string firstNameEmailID_temp;
        getline(cin, firstNameEmailID_temp);

        vector<string> firstNameEmailID = split_string(firstNameEmailID_temp);

        string firstName = firstNameEmailID[0];

        string emailID = firstNameEmailID[1];

        if(regex_match(emailID,reg))
            ans.push_back(firstName);
    }
    sort(ans.begin(), ans.end());
    
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
