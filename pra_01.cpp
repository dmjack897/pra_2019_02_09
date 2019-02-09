#include<iostream>
#include<algorism>

int array=[1000];
bool compare(string a,string b)
{
    if(a.length<b.length)
    {
        return 1:
    }
    else if(a.length<b.length)
    {
        return 0;
    }
    else
    {
        return a>b;
    }
}

int main(void)
{
    int n;
    cin >> n;
    for(int i0;i<n;i++)
    {
        cin >> array[i];
    }
    sort(a,a+n,compare);
    for(int i=0;i<n;i++)
    {
        if(i>0 && array[i]==array[i- 1])
        {
            continue;
        }
        else
        {
             cout << array[i] << endl;
        }
    }

    return 0;
}