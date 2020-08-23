#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n;
cin >> n;
int a[n];
for(int i=0;i<n;i++){
    a[i]=i+1;
}
int q;
cin >> q;
long long int l,r,v;
for(int i=0;i<q;i++){
        cin >> l >> r >> v;
        for(int j=l-1;j<=r-1;j++){
            a[j]+=v;

        }
}
long long int maxi = *max_element(a,a+n);
cout << maxi << endl;
}
