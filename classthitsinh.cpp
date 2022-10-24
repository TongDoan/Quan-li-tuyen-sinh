#include<bits/stdc++.h>
#include"classnguoi.cpp"
#include"classSX.cpp"
using namespace std;
class ThiSinh: Nguoi, NguyenVong
{  
	private :
		string SBD;   
		float diemUuTien;
		NguyenVong *nv;
   		NguyenVong nguyenvonga;
   		int sonv;
   		
   	public:
   		ThiSinh(){
   			}
   		ThiSinh(Nguoi) {
   			Nguoi:Nguoi();
  		 }
   		ThiSinh(string SBD, float diemUuTien, NguyenVong *nv, string hoTen, string queQuan, int namSinh, int gioiTinh) {
   		Nguoi:Nguoi(hoTen, queQuan, namSinh, gioiTinh);
       this->SBD = SBD;
       this->diemUuTien = diemUuTien;
       this->nv = nv;
   }
    string getSBD() {
       return SBD;
   }
   
    void setSBD(string SBD) {
       this->SBD = SBD;
   }
    float getDiemUuTien() {
       return diemUuTien;
   }
     void setDiemUuTien(float xx) {
       diemUuTien = xx;
   }
   void setMaNganh(string maNganh) {
        nv->setMaNganh(maNganh);
   }
   void setMaTruong(string maTruong) {
        nv->setMaTruong(maTruong);
   }
   void setTenNganh(string tenNganh) {
       nv->setTenNganh(tenNganh);
   }
    void setKhoiXT(string khoiXT) {
      nv->setKhoiXT(khoiXT);
   }
   void setdiem(float diem){
   		nv->setdiem(diem);
   }
  
    NguyenVong * getNv() {
       return  nv;
   }
   void setNv(NguyenVong *nv) {
       this->nv = nv;
   }
   int setsize(int i){
   		this->sonv = i;
   }
  	int size(){
	  return sonv;
	  }
	  int getMaNV(){
	  	return nv->getMaNv();
	  }
	  string getmaNganh() {
       return nv->getMaNganh();
   }
   float getDiemXT() {
       return  nv->getDiemXetTuyen();
       }
    NguyenVong getNguyenvonga(){
   		return nguyenvonga;
   }
   void tangsonv(){
   		 sonv++;
   	}
    void setNguyenvonga(NguyenVong nguyenvonga) {
       this->nguyenvonga = nguyenvonga;
   }
    void nhap()
   {
       Nguoi::nhap();
       cout<<("SBD: ");
       cin>>SBD;
       cout<<("Diem uu tien: ");
       cin>>diemUuTien;
       setDiemUuTien(diemUuTien);
       nhapDSNguyenVong();
   }
   void suats(){
    Nguoi::nhap();
       cout<<("SBD: ");
       cin>>SBD;
       cout<<("Diem uu tien: ");
       cin>>diemUuTien;
       setDiemUuTien(diemUuTien);
   }
   void nhapnv(){
   		NguyenVong::nhapNguyenVong();
   	}
   	void sapxep(){
	   for(int i=0; i<sonv; i++)
       {
           for(int j = i+1; j<sonv;j++){
           		if(nv[i].getDiemXetTuyen() < nv[j].getDiemXetTuyen()){
           				NguyenVong t = nv[i];
           				nv[i] = nv[j];
           				nv[j] = t;
           		}
           	}
       }
	}
    void nhapDSNguyenVong()
   {
   	
       cout<<("Nhap so nguyen vong can them: ");
    	cin>> sonv;
       nv = new NguyenVong[sonv];
       for(int i=0; i<sonv; i++)
       {
           nv[i].nhapNguyenVong();
       }
   }
   void themnv(){
   		int n;
   		cout<<("Nhap so nguyen vong can them: ");
        cin>> n;
        int b=sonv;
        int a = sonv + n;
        sonv  =a;
        NguyenVong *c = new NguyenVong[a];
        for(int i=0; i<b; i++)
       {
           c[i]=nv[i];
       }
       for(int i=b; i<a; i++)
       {
           c[i].nhapNguyenVong();
       }
       nv=c;
   }
   	
   void hienDSNguyenVong()
   {
       for(int i=0; i<sonv; i++)
       {
           nv[i].hienNguyenVong();
       }
   }
 	 void hien()
   {
    Nguoi::hien();
       cout<<"\tSBD: "<< getSBD()<< "\t diemUuTien: "<<getDiemUuTien();
       hienDSNguyenVong();
      
   }
    void hienThongtinTS()
   {
       Nguoi::hien();
       cout<<"\tSBD: "<< getSBD()<< "\t diemUuTien: "<<getDiemUuTien();
   }
    void xoaNguyenVong(int j) {
        nv[j] = nv[j+1];
        sonv--;
        
       }
   
};


