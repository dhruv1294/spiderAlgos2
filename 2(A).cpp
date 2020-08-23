#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string input;
        cin >> input;
        int count1 =0;
        int count2=0;
        int ans=0;

        if(input[0]=='>'){
            cout << "0" << endl;
        }else{
            for(int i=0;i<input.size();i++){
                if(input[i]=='<'){
                    count1++;
                }
                else if(input[i]=='>'){
                    count2++;

                }
                if(count2>count1){
                    break;
                }
                if(count1==count2){
                    ans+=(2*count1);
                    count1=0;
                    count2=0;
                }

            }
            cout << ans << endl;

        }
    }

}
