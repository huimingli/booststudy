/*************************************************************************
    > File Name: pointer1.cpp
    > Author: huimingli
    > Mail: 157371722@qq.com 
    > Created Time: 2017年05月14日 星期日 16时24分10秒
 ************************************************************************/
#include<boost/scoped_ptr.hpp>
#include<iostream>
using namespace std;
int main(){
    boost::scoped_ptr<int> i(new int);
    *i = 1;
    *i.get() = 2;
    i.reset(new int);
    return 0;
}

