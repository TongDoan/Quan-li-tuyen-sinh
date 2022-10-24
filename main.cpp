#include<bits/stdc++.h>
#include"classquanly.cpp"
using namespace std;

int main(){
		QuanLy a;
       ThiSinh b;
       GiamThi c;
       int n;
       do
       {
           a.menuChinh();
           cout<<("Lua chon: ");
           cin>>n;
           switch(n)
           {
               case 1:
               {
                   	a.themDSThisinh(b);
					break;
               }
               case 2:
               {
                	
                   a.themDSGiamThi(c);
                   break;
               }
               case 3:
               {
					a.themTS();      		
                   break;
               }
               case 4:
               {
               		a.themGT();
 					break;
               }
               case 5:
               {
                   a.hienDSHoSoThiSinh();
                   break;
               }
               case 6:
                      
               {
                   a.hienDSGiamThi();
                   break;
               }
               case 7:
               {
                   a.SuaDoi();
                   break;
               }
               
               case 8:
               {
                   cout<<("Nhap ma nganh: ");
                   string maNganh;cin>>maNganh;
                   cout<<("Nhap diem chuan: ");
                   float diemChuan; cin>>diemChuan;
                   a.hienDSTrungTuyen(maNganh, diemChuan);
                   break;
               }
               case 9:
               {
                   cout<<("-------------------------------");
                   a.SapXepTheoDiem();
                   break;
               }
               case 10:
               {
                   a.hienGiamThioHaNoi();
                   break;
               }
               default:
                   break;
           }
       }while(n!=0);
}

