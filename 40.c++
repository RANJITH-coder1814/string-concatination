#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s1[20]="ranjith";
    char s2[20]=" good morning";
    strncat(s1,s2,8);
    cout<<s1<<endl;
    return 0;
}