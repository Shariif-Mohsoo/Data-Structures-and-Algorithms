//program to find the subSequences of the given string(must be unique).
#include<iostream>
#include<vector>
using namespace std;
void setSubsequences(string str,string output,int index,vector<string>&subSequences)
{
    //base case
    if(index >= str.length())
    {
        subSequences.push_back(output);
        return;
    }
    //exclusive 
    setSubsequences(str,output,index + 1,subSequences);
    //include
    char ch = str.at(index);
    output.push_back(ch);
    setSubsequences(str,output,index + 1,subSequences);
}

int main()
{
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    
    int index = 0;
    string output="";
    vector<string>subSequences;
    setSubsequences(str,output,index,subSequences);
    
    cout<<endl;
    cout<<"subSequences: "<<endl;
    for(string str : subSequences)
        cout<<str<<" ";
    return 0;
}