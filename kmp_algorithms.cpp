#include<bits/stdc++.h>
#include<fstream>
using namespace std;
vector<int>createtemp(string txt){
vector<int>lps(txt.size());
int in=0;
for(int i=1;i<txt.size();i++){
if(txt[in]==txt[i]){
    lps[i]=in+1;
    ++in;++i;
}
else{
    if(in!=0){
        in--;
    }
    else{
        lps[i]=in;
        i++;
    }
}
}
return lps;
}
void kmp(string text,string txt){
vector<int>lps=createtemp(txt);
int ok=0;
vector<int>v;
//i--> text index point ,j--> txt index point //
int i=0,j=0;
while(i<text.size()){
    if(text[i]==txt[j]){
        ++i;j++;
    }
    else{
        if(j!=0){
            j=lps[j-1];
        }
        else{
            ++i;
        }
    }
    if(j==txt.size()){
     ok=i-(txt.size()-1);
     v.push_back(ok);
     j=lps[j-1];
    }
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<"\n";
}
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
string text;
string txt;
ifstream fin;
fin.open("input.txt");
fin>>text;
fin.open("input_pattern.txt");
fin>>txt;
kmp(text,txt);
return 0;
}
