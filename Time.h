#pragma once
#include<bits/stdc++.h>
using namespace std;
class Time {
public:
    int year,mon,day,hour,minn,sec;
    Time();
    void freshen();
    void print();
    Time(int _year,int _mon,int _day,int _hour=19,int _minn=30,int _sec=0);
    friend int operator - (Time start,Time end);
};
