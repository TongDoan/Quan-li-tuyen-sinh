#include<bits/stdc++.h>
#include"classthitsinh.cpp"
using namespace std;
class GiamThi: Nguoi {
   private :
   string maGT, donviCT;
   public:
    GiamThi(Nguoi)
   {
      Nguoi:Nguoi();
   }
   GiamThi(){
   	}
   	
  GiamThi(string maGT, string donviCT, string hoTen, string
queQuan, int namSinh, int gioiTinh)
   {
   		Nguoi:Nguoi(hoTen, queQuan, namSinh, gioiTinh);
       this->donviCT= donviCT;
       this->maGT= maGT;
   }
   	
    string getMaGT() {
       return maGT;
   }
    void setMaGT(string maGT) {
       this->maGT = maGT;
   }
    string getDonviCT() {
       return donviCT;
   }
    void setDonviCT(string donviCT) {
       this->donviCT = donviCT;
   }
    void nhap()
   {
   		Nguoi::nhap();
       cout<<("Ma giam thi: ");
       cin>>maGT;
       cout<<("Don vi cong tac: ");
       cin>>donviCT;
   }
   string getQueQuan() {
       return Nguoi::getQueQuan();
   }
   void suanhap(){
   		Nguoi::nhap();
       cout<<("Don vi cong tac: ");
       cin>>donviCT;
   }
    void hien()
   {
   		Nguoi::hien();
       cout<<"maGT: "<< getMaGT()<< ", donviCongtac: "<<getDonviCT()<< "";
 
	}
};



