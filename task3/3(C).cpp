#include<bits/stdc++.h>
using namespace std;
int main(){
int n,count=2;
cin >> n;
if(n==2){
    cout << 1 << endl;
}else if(n==3){
cout << 3 << endl;}
else if(n>3){
for(int i=3;i<=n;i+=2){
        for(int j=2;j<=(int)sqrt(i);j++){
            if(i%j==0){
                break;
            }
            if(j==(int)sqrt(i)){
                    count++;


            }
        }

}
long long int ans = count * (count+1) / 2;
cout << ans << endl;

}
}
