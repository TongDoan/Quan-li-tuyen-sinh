
#include<bits/stdc++.h>
using namespace std;

class NguyenVong {
   private:
   string maNganh, maTruong, tenNganh, khoiXT;
   float diemThi;
   int maNv;

   public:
    NguyenVong() {
   }
    NguyenVong(int maNv, string maNganh, string maTruong, string
tenNganh, string khoiXT, float diemThi) {
       this->maNv = maNv;
       this->maNganh = maNganh;
       this->maTruong = maTruong;
       this->tenNganh = tenNganh;
       this->khoiXT = khoiXT;
       this->diemThi = diemThi;
   }
 
	 int getMaNv() {
       return maNv;
   }
   

    void setMaNv(int maNv) {
       this->maNv = maNv;
   }
    string getMaNganh() {
       return maNganh;
   }
    void setMaNganh(string maNganh) {
       this->maNganh = maNganh;
   }
    string getMaTruong() {
       return maTruong;
   }
    void setMaTruong(string maTruong) {
       this->maTruong = maTruong;
   }
    string getTenNganh() {
       return tenNganh;
   }
    void setTenNganh(string tenNganh) {
       this->tenNganh = tenNganh;
   }
    string getKhoiXT() {
       return khoiXT;
   }
    void setKhoiXT(string khoiXT) {
       this->khoiXT = khoiXT;
   }
   void setdiem(float diemThi){
   		this->diemThi = diemThi;
   }
   
 	 float getDiemXetTuyen() {
       return  diemThi;
   }
    void nhapNguyenVong() {
       cout<<("Ma nguyen vong: ");
       cin>>maNv;
       cout<<("Ma truong: ");
       cin>>maTruong;
       cout<<("Ma nganh: ");
       cin>>maNganh;
       cout<<("Ten nganh: ");
       cin>>tenNganh;
       cout<<("Khoi xet tuyen: ");
       cin>>khoiXT;
       cout<<("Diem thi: ");
       cin>>diemThi;
   }
  
    void hienNguyenVong()
   {
       cout<<"\nMa truong: "<< getMaTruong()+ "\t Ma nganh: "<<getMaNganh()<< "\t Ten nganh: "<< getTenNganh()<< "\t Khoi xet tuyen: "<<getKhoiXT()<< "\t Diem xett tuyen: "<< getDiemXetTuyen();
   }
   
};
 


