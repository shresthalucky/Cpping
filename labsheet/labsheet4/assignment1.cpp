#include <iostream>
using namespace std;

void age(int bdate, int bmonth, int byear, int cdate, int cmonth, int cyear){
    int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if(bdate > cdate){
        cdate = cdate + month[bmonth-1];
        cmonth = cmonth - 1;
    }

    if(bmonth > cmonth){
        cyear = cyear - 1;
        cmonth = cmonth + 12;
    }

    int  agedate = cdate - bdate;
    int agemonth = cmonth - bmonth;
    int ageyear = cyear - byear;

    cout << ageyear << ":" << agemonth << ":" << agedate << endl;
}

int main(){
    int cyear, cmonth, cdate, byear, bmonth, bdate;
    cout << "bday";
    cin >> byear >> bmonth >> bdate;
    cout << "cday";
    cin >> cyear >> cmonth >> cdate;
    age(bdate, bmonth, byear, cdate, cmonth, cyear);

    return 0;
}