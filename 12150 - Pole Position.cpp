#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin>>n;
    while (n>0)
    {
        int car,pos,m;
        int arr[n+2];
        memset(arr,0,sizeof(arr));
        bool flag= true;
        for (int i = 0; i < n; ++i) {
            cin>>car>>pos;
            m=i+pos;
            if(m<0||m>=n)
            {
                flag= false;
                break;
            }
            if(!arr[m]&& flag)
                arr[m] = car;
            else
                flag=false;
        }
        if(flag== false)
        {
            puts("-1");
        }
        else {
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        cin>>n;
    }
    return 0;
}
