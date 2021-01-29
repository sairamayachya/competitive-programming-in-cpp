#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> data{5, 3, 7, 3};
    int num = 9;
    int count = 0;

    for (int i = 0; i <= data.size() - 1; i++)
    {
        int val = num - data[i];
        for (int j = 0; j <= data.size() - 1; j++)
        {
            if (val == data[j])
            {
                count++;
            }
        }
    }
    ////////////////////////////////////
    cout << "Elements: ";
    for (int i = 0; i <= data.size() - 1; i++) ///These line are added just
    {                                          ///for explanation purose.
        cout << data[i] << " ";
    }
    cout << endl;
    cout << "Sum: " << num << endl;
    //////////////////////////////////////
    if (count >= 2)
    {
        cout << "Possible";
    }
    else
    {
        cout << "Not Possible";
    }

    return 0;
}