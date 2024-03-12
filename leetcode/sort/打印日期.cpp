#include <iostream>
#include "iomanip"
using namespace std;
const int month_day[13]={365,31,28,31,30,31,
                         30,31,31,30,31,30,31};
const int rmonth_day[13]={366,31,29,31,30,31,
                         30,31,31,30,31,30,31};
class Date{
private:
    int _year,_month,_day;
public:
    Date(int y,int m,int d);
    Date(int y,int days);
    void Printdate() const;
    bool is_Leapyear() const{return (_year%4==0&&_year%100!=0)||_year%400==0;}
    Date operator+(int val);
};

Date::Date(int y, int m, int d):_year(y),_month(m),_day(d) {}

Date::Date(int y, int days):_year(y) {
    int i = 1;
    if(is_Leapyear()){
        while (rmonth_day[i]<days){
            days-=rmonth_day[i++];
        }
    }
    else {
        while (month_day[i] < days) {
            days -= month_day[i++];
        }
    }
    _month=i;
    _day=days;
}

void Date::Printdate() const {
    cout<<_year<<'-'
    <<setfill('0')<<setw(2)<<_month<<'-'
    <<setfill('0')<<setw(2)<<_day<<endl;
}

Date Date::operator+(int val) {
    const int *monthday= nullptr;
    if(is_Leapyear())
        monthday = rmonth_day;
    else
        monthday = month_day;
    for (int i = 1; i < _month; ++i) {
        val+=monthday[i];
    }
    val+=_day;

    while (val>=monthday[0]){
        val -= monthday[0];
        _year++;
        monthday = is_Leapyear()?rmonth_day:month_day;
    }
    return Date(_year,val);
}


int main() {
    int i = 0;
    cin>>i;
    while (i--){
        int y, m, d, add;
        cin >> y >> m >> d >> add;
        Date date(y, m, d);
        date = date + add;
        date.Printdate();
    }
    return 0;
}