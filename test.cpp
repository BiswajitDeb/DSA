#include<iostream>
#include<string>
#include<vector>

using namespace std;

string reverse_words(string s)
{
    string result="";
    int start=-1,end=-1;
    vector<string> words;
    if(s[0]!=' ')
        start=0;
    for(int i=1;i<s.length();i++)
    {
        if(s[i-1]== ' ' &&  s[i]!= ' ')
            start=i;
        if(s[i-1]!= ' ' &&  s[i]== ' ')
            end=i;
        if(start!=-1 && end!=-1)
        {
            words.push_back(s.substr(start,end-start));
            start=-1;
            end=-1;
        }
        if(i==s.length()-1)
            {
            end=i;
            // cout<<"Starting : "<<start<<endl;
            // cout<<"ending : "<<end<<endl;
            words.push_back(s.substr(start,end-start+1));
            }
            
    }
    for(int i=words.size()-1;i>=0;i--)
    {
        if(i==0)
            result+=words[i];
        else
            result+= (words[i]+" ");
    }
    return result;
}


int main()
{
    string s = " Hello World ";
    cout<<s<<endl;
    cout<<reverse_words(s);
    return 0;
}