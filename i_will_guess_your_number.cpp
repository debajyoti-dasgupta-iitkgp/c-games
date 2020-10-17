#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"\
            Think of a number(between 1 and 100).....(in your mind)\n\
            I will be guessing your number..........\n\
            I will ask few questions \n\
            Each query will comprise a number\n\
            ------> Answer G if your number is greater than my query\n\
            ------> Answer L if your number is smaller than my query\n\
            ------> Answer E if your number is equal to my query\n\n";
    
    string ans;
    int lo = 0, hi = 100, md;
    while(lo<hi){
        md = (lo + hi)>>1;
        cout<<"QUERY: "<<md<<endl;
        cin>>ans;
        if(ans=="G")lo=md+1;
        else if(ans=="L")hi=md-1;
        else break;
    }
    cout<<"Your answer should be: "<<md<<endl;
}
