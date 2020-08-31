#include<bits/stdc++.h>
using namespace std;
int main(){
int n;

string s;
cin >> s;

 int count1,ans=1;
int a;
 int sum=0;

count1 = s.size();
for(int i=0;i<count1;i++){
    char a= s[i];
    int num = a-48;
    sum+=num;
}
if(sum<10){
    cout << ans << endl;
}else{


    n=sum;
    sum=0;
    ans++;
    count1=log10(n)+1;


while(count1>0){
        a=n%10;
        n=n/10;
        sum+=a;
        count1--;
        if(count1==0){
                if(sum>=10){
            n=(sum);
            sum=0;
            count1 = log10(n)+1;

            ans++;
        }
        }
}
cout << ans << endl;
}

}
