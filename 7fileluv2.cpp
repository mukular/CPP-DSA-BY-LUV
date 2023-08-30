#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    ek baar cin.ignore() ko comment kar dena
    input:-
    3
    abc     def
    ghijk asd asd
    abc ghi
    */
    // bina cin.ignore() ke getline seedhe 3 ke baad input lena chalu karega and 3 ke baad toh empty string h
    int t;
    cin>>t;
    cin.ignore(); // isse 3 ke baad ka cursor next line me shift ho jayega(yeh keval samjhane ke liye h)
    while (t--)
    {
        string s;
        getline(cin, s);
        cout<<s<<endl;
    }

    // input 
    // abcdefgh
    string str;
    cin>>str;
    string str_rev;
    for(int i = str.size()-1; i>= 0; --i)
    {
        // str_rev = str_rev + str[i]; // yeh bekar tareeka h, isse accha push_back istemal karo
        str_rev.push_back(str[i]); // adds character at end of current string
        // time complexity of push_back = O(1)
        // whereas time complexity for this s = s + 'a'; depends on string size
        // and it first makes copy of s then add 'a' then store in resultant string
    }
    cout<<str_rev<<endl;

    // check string is palindrome or not
    if(str == str_rev)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    cout<<endl;

    // koi large number ko input lena h toh string ki form me lo
    // input:-
    // koi bhi number jaise
    // 12345678901287292993829902373930293729239013727

    string q;
    cin>>q;
    int last_digit = q[q.size() - 1] - '0';
    cout<<last_digit;
    
}