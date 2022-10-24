#include<bits/stdc++.h>
using namespace std;
class Nguoi{
   private:
   	string hoTen, queQuan;
	int namSinh, gioiTinh;
	public:
	 Nguoi()
   {
      
   }
  
    Nguoi(string hoTen, string queQuan, int namSinh, int gioiTinh)
   {
       this->gioiTinh= gioiTinh;
       this->hoTen= hoTen;
       this->namSinh= namSinh;
       this->queQuan= queQuan;
   }
    string getHoTen() {
       return hoTen;
   }
    void setHoTen(string hoTen) {
       this->hoTen = hoTen;
   }
    string getQueQuan() {
       return queQuan;
   }
    void setQueQuan(string queQuan) {
       this->queQuan = queQuan;
   }
    int getNamSinh() {
       return namSinh;
   }
    void setNamSinh(int namSinh) {
       this->namSinh = namSinh;
   }
    string getGioiTinh() {
       if(gioiTinh ==1)
           return "Nam";
       else if(gioiTinh==0)
	 return "Nu";
    
   }
    void setGioiTinh(int gioiTinh) {
       this->gioiTinh = gioiTinh;
   }
  
    void nhap()
   {
      
       cout<<"\nHo ten: ";
       cin>>hoTen;
       cout<<("Que quan: ");
    	cin>>queQuan;
       cout<<("Nam sinh: ");
       cin>>namSinh;
       do
       {
           cout<<("Gioi tinh(nam: 1/ nu: 0) ");
           cin>>gioiTinh;
          
       }
       while(gioiTinh!=1 && gioiTinh!=0);
   }
    void hien()
   {
       cout<<"\nHoTen: "<<getHoTen()<< "\t GioiTinh: "<<
getGioiTinh() <<"\t namSinh: "<< getNamSinh()<< "\t queQuan: "<<
getQueQuan();
   }
};
 


 


