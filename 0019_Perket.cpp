#include<iostream>

using namespace std;

int main()
{
    int n,i,s = 1,b = 0,c,j;
    cin >> n;
    bool d[n];
    int a[n][2];
    for(i = 0;i < n;i++){
        cin >> a[i][0] >> a[i][1];
    }

    ///b = a[0][0];
    ///s = a[0][1];
    ///b -= s;
    ///if(b < 0){
    ///    b *= -1;
    ///}
    ///c = b;

    for(i = 0;i <= n;i++){
        b = a[i][0];
        s = a[i][1];
        b -= s;
        if(b < 0){
            b *= -1;
        }
        c = b;//////
        for(j = 0;j < n;j++){

        }
    }
    b -= s;
    if(b < 0){
        b *= -1;
    }
    cout << b;
}
