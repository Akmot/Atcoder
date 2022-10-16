#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;

    int A[N];

    for (int i=0;i<N; i++)
    {
        cin >>A[i];
    }
    int count =0;
    bool judge=true;
    while(judge)
    {
        for (int i=0; i<N; i++)
        {
            if (A[i]%2!=0)
            {
                judge = false;
                break;
            }
            else
            {
                A[i]=A[i]/2;
            }
        }    
        if(judge)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
