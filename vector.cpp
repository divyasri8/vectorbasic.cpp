#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> num{1,2,3,4,5};
    vector<int>::iterator iter;
    for(int i:num){
        cout<<i<<" ";
    }
    num.push_back(6);
    for(int i:num){
        cout<<i<<" ";
    }
    cout<<"and "<<num.at(1)<<" and ";
    num.at(3)=2;
    for(int i:num){
        cout<<i<<" ";
    }
    num.pop_back();
    for(int i:num){
        cout<<i<<" ";
    }
    /*cout<<size(num)<<"\n";
    cout<<front(num)<<"\n";
    cout<<back(num)<<"\n";
    cout<<capacity(num)<<"\n";*/
    iter = num.begin();
    cout<<*iter<<"\n";
    for(iter=num.begin();iter!=num.end();++iter){
        cout<<*iter<<" "<<"\n";
    }
    return 0;
}
