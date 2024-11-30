#include<iostream>
#include <cctype>
using namespace std;
void count(const char s[], int counts[])
{
    for (int i = 0; i < 26; i++)
    {
        counts[i] = 0;
    }
    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        if (isalpha(s[i]))
        {
            char lc = tolower(s[i]);
            int n = lc - 'a';
            counts[n]++;
        }
    }
}
int main()
{
    char s[100];
    int counts[26];
    cout << "Enter a string: ";
    cin.getline(s, 100);
    count(s, counts);
    for (int i = 0; i < 26; i++)
    {
        char l = 'a' + i;
            if (counts[i] > 0)
            {
                cout << l << ":" << counts[i] << " times" << endl;
            }
    }
    return 0;
}
       