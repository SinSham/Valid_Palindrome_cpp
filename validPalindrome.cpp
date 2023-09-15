#include <iostream>

using namespace std;

void swap(string& str, int a, int b){
    char temp = str[a];
    str[a] = str[b];
    str[b] = temp;
}

void reverseWord(string& w){
    int start = 0;
    int end = w.size()-1;
    
    while(start<=end){
        swap(w, start, end);
        start++;
        end--;
    }
}

void reverseString(string& s){
    string temp;
    string reversed;
    for(int i=0; i<s.size(); i++){
        if(s[i] == ' '){
            reverseWord(temp);
            reversed += temp + " ";
            temp = "";
        }
        else{
            temp+=s[i];
        }
        
    }
#After the last word there is no space character, so we have to send it separately to the reverseWord function
    reverseWord(temp);
    reversed += temp;
    s = reversed;
}


int main()
{
    string s;
    getline(cin, s);
    reverseString(s);
    cout<<s<<endl;

    return 0;
}
