#include <iostream>
#include<vector>
using namespace std;

vector<int> linear(vector<int> &data, vector<int> keys)
{
    int m = keys.size();
    int keyPos;
    vector<int> keysPos(keys.size());
    int n = data.size();

    for(int i = 0; i<m; i++)
    {
        keyPos = -1;
        for(int j = 0; j<n; j++)
        {
            if(keys[i] == data[j])
            {
                keyPos = j;
                break;
            }
        }
        keysPos[i] = keyPos;
    }
    return keysPos;
}
int main()
{
    int n;
    cout<<"Insert array length \n";
    cin>>n;
    vector<int> numbers(n);
    cout<<"Insert array data\n";
    for(int i = 0; i<n; i++)
    {
        cin>>numbers[i];
    }

    int numKey;
    cout<<"Insert the number of keys to look for: ";
    cin>>numKey;
    vector<int> keys(numKey);
    for(int i = 0; i<numKey; i++)
    {
        cin>>keys[i];
    }
    vector<int> values = linear(numbers, keys);

    cout<<"Position of the keys in the array: \n";
    for(int value: values)
    {
        cout<<value<<" ";
    }
    return 0;
}
