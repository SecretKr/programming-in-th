#include<iostream>

using namespace std;

int main()
{
    int n,k,i,j,b = 0;

    cin >> n >> k;
    bool q[n];
    for(i = 2;i <= n;i++){
        for(j = i;j <= n;j += i){
            if(q[j] == false){
                q[j] = true;
                b++;
                if(b == k){
                    cout << j;
                }
            }
        }
    }
}
