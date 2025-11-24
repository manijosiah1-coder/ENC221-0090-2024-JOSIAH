#include <iostream>

using namespace std;

class Roommate{
public:
    int YOB,DOB,height;
     string skincolour,school,city,name;

};
int main(){
    Roommate myroommate;
    myroommate.name="Anatalia";
    myroommate.DOB=12;
    myroommate.YOB=2005;
    myroommate.height=176;
    myroommate.skincolour="black";
    myroommate.school="jkuat";
    myroommate.city="Nairobi";
    cout<<"Name:"<<myroommate.name<<"\n";
    cout <<"DOB:"<<myroommate.DOB<<"\n";
    cout<<"YOB:"<<myroommate.YOB<<"\n";
    cout<<"skincolour:"<<myroommate.skincolour<<"\n";
    cout<<"school:"<<myroommate.school<<"\n";
    cout<<"city:"<<myroommate.city<<"\n";
    return 0;
}


