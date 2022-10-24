#include<bits/stdc++.h>
#include"classnguyenvong.cpp"
using namespace std;

class SapXepTheoDiemThi : NguyenVong
{
   public:
   int compare(NguyenVong a1, NguyenVong a2) {
       float sub= a1.getDiemXetTuyen()- a2.getDiemXetTuyen();
       if(sub< 0)
           return -1;
       else if(sub ==0)
           return 0;
       else
           return 1;   
   }
};


