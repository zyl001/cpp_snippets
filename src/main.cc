#include <iostream>
#include <string>
#include <map>

#include "CTest.h"
#include "Module1/CTestM1.h"

using namespace std;
int main(void)
{
    int i = 0;
    int j = 1;
    for(int i=0;i<10;++i)
    {
        i+=1;
        j+=3;
    }
    {
        CTest c;
        CTestM1 c1;
    }

    std::map<int,string> idNameMap;
    idNameMap.insert(std::pair<int,string>(1,"name1"));
    idNameMap.insert(std::pair<int,string>(2,"name1222"));
    idNameMap.insert(std::pair<int,string>(3,"name1333"));
    std::cout<<"Hello, I'm OK!"<<std::endl;
    return 0;
}