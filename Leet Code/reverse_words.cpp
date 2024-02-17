#include<iostream>
#include<string>
#include<vector>

using namespace std;

string reverse_words(string s) {
    string result = "";
    int n = s.length();
    int start = -1, end = -1;
    vector<string> words;

    for (int i=0;i<n;i++) {
        if (s[i]!=' ' && start==-1) 
            start=i;

        else if (s[i] == ' ' && start!= -1) 
        {
            end = i-1;
            words.push_back(s.substr(start,end-start+1));
            start=-1;
        }
    }

    if (start!=-1) {
        words.push_back(s.substr(start));
    }


    for (int i = words.size()-1; i>=0;i--) {
        result += words[i];
        if (i > 0) result += " ";
    }

    return result;
}

int main() {
    string s = " Hello World ";
    cout << s << endl;
    cout << reverse_words(s) << endl;
    return 0;
}
