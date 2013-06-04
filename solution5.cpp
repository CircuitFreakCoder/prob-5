#include <iostream>
#include <string>
using namespace std;

int solve_5(string s)
{
    int a, total=0 ;
    for(unsigned int i = 0; i<s.length(); i++)
    {
        if(s[i]>='a' &&s[i]<='z' )
        {
            a = 26 - (s[i]-'a');
            total += a;

        }
    }
    return total;
}

int main()
{
    cout << solve_5("the quick brown fox jumped over the cow") << endl;
    return 0;
}
//450
