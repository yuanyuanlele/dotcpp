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
        pos1 = str.find_first_of("+-");//�ҵ��ӺŻ���ŵ�λ��
        pos2 = str.find('=');//�ҵ��Ⱥŵ�λ��
        a = toInt(str.substr(0,pos1));
        b = toInt(str.substr(pos1,pos2));
        c = toInt(str.substr(pos2+1));//��λ��pos2+1�����
        if(a+b==c)
            sum += 1;
    }
    cout<<sum<<endl;
}
