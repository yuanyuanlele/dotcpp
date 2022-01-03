#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int toInt(string s){
    int ret;
    stringstream stream(s);
    stream>>ret;
    return ret;
}
int main(){
    string str;
    int sum = 0;
    while(cin>>str){
        int a=0,b=0,c=0;
        string::size_type pos1,pos2;
        pos1 = str.find_first_of("+-");//找到加号或减号的位置
        pos2 = str.find('=');//找到等号的位置
        a = toInt(str.substr(0,pos1));
        b = toInt(str.substr(pos1,pos2));
        c = toInt(str.substr(pos2+1));//从位置pos2+1到最后
        if(a+b==c)
            sum += 1;
    }
    cout<<sum<<endl;
}
