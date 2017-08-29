#include <iostream>
#include <string>
using namespace std;

void findAndReplace(string &s,const string &oldVal,const string &newVal){
    auto cur=s.begin();
    auto len=oldVal.size();
    while(s.end()-cur>=len){
        if(string(cur,cur+len)==oldVal){
            cur=s.erase(cur,cur+len);
            cur=s.insert(cur,newVal.begin(),newVal.end());
            cur+=newVal.size();
        }else
            cur++;
    }

}

int main() {
    string s="tho thru";
    string oldVal1="tho",newVal1="though";
    string oldVal2="thru",newVal2="through";
    findAndReplace(s,oldVal1,newVal1);
    findAndReplace(s,oldVal2,newVal2);
    cout<<s<<endl;
    return 0;
}
