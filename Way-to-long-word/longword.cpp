#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cin >> word;
    int n;
    for (int i = 0; i <= word.size() - 1; i++)
    {
        n = word.size() - 1;
    }
    cout << word[0] << word.size() - 2 << word[n];

    return 0;
}
