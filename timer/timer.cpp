/*************************************************************************
    > File Name: timer.cpp
    > Author: huimingli
    > Mail: 157371722@qq.com 
    > Created Time: 2017年05月14日 星期日 18时47分28秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<boost/timer.hpp>
using namespace std;
using namespace boost;
int main(){
    timer t;
    cout<<"max timespan:"<<t.elapsed_max()/3600<<"h"<<endl;
    cout<<"min timespan:"<<t.elapsed_min()<<"s"<<endl;
    cout<<"elapsed:"<<t.elapsed()<<"s"<<endl;
    return 0;

}

