#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
int m ;
cin >> m;
vector<int> a;
for(int i=0;i<m;i++){
    int p;
    cin >> p;
    a.push_back(p);

}
sort(a.rbegin(),a.rend());
for(int i=m-2;i>=n-1;i--){
    a[i]=a[i]+a[i+1];
    a.pop_back();
    sort(a.rbegin(),a.rend());

}
cout << a[n-1] << endl;
}
