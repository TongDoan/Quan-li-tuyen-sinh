#include<bits/stdc++.h>
#include"classdsnguoi.cpp"

using namespace std;
class QuanLy {
	private:
		ThiSinh *thisinh;
		GiamThi *giamthi;
	   	int sots,sogt;
   public :
   	QuanLy() {
   }
    void themDSThisinh(ThiSinh a) {
       cout<<("Nhap so luong can them: ");
       cin>>sots;
       thisinh = new ThiSinh[sots];
       for (int i = 0; i < sots; i++) {
		 cout<<"Lan nhap thu " << (i + 1) << ": ";
           thisinh[i].nhap();
       }
       
   }
   void themTS(){
   		int n;
   		cout<<("Nhap so thi sinh can them: ");
        cin>> n;
        int b=sots;
        int a = sots + n;
        sots  = a;
        ThiSinh *d = new ThiSinh[sots];
        for(int i=0; i<b; i++)
       {
           d[i]=thisinh[i];
       }
       for(int i=b; i<a; i++)
       {
           d[i].nhap();
       }
       thisinh=d;
   }
  	void themGT(){
   		int n;
   		cout<<("Nhap so giam thi can them: ");
        cin>> n;
        int b=sogt;
        int a = sogt + n;
        sogt  = a;
        GiamThi *c = new GiamThi[sogt];
        for(int i=0; i<b; i++)
       {
           c[i]=giamthi[i];
       }
       for(int i=b; i<a; i++)
       {
           c[i].nhap();
       }
       giamthi=c;
   }
   void themDSGiamThi(GiamThi a) {
       cout<<("Nhap so luong can them: ");
       cin>>sogt;
       giamthi = new GiamThi[sogt];
       for (int i = 0; i < sogt; i++) {
		 cout<<"Lan nhap thu " << (i + 1) << ": ";
          giamthi[i].nhap();
       }
       
   }
    void menuSuaDoi() {
      cout<<"-------------Moi ban lua chon -----------\n";
      cout<<"1. Sua thong tin thi sinh\n";
      cout<<"2. Xoa thi sinh\n";
      cout<<"3. Sua thong tin giam thi\n";
      cout<<"4. Xoa giam thi\n";
      cout<<"5. Sua nguyen vong\n";
      cout<<"6. Them nguyen vong\n";
      cout<<"7. Xoa nguyen vong\n";
      cout<<"-----------Chon 0 de thoat ----------\n";
   }
    void SuaDoi() {
       int n;
       do {
           menuSuaDoi();
           cout<<("Chon: ");
           cin>>n;
           switch (n) {
               case 1: {
                   string sbd;
                   cout<<("Nhap SBD cua thi sinh can sua: ");
                   cin>>sbd;
                   suaThiSinh(sbd);
                   break;
               }
               case 2: {
                	string sbd;
                   cout<<("Nhap SBD cua thi sinh can xoa: ");
                   cin>>sbd;
                   xoaThiSinh(sbd);
                   break;
               }
               case 3: {
                   string maGT;
                   cout<<("Nhap ma giam thi can sua thong tin: ");
                   cin>>maGT;
	                suaGiamThi(maGT);
                   break;
               }
               case 4: {
                    string maGT;
                   cout<<("Nhap ma giam thi can xoa: ");
                   cin>>maGT;
                   xoaGiamThi(maGT);
                   break;
               }
               case 5: {
                   cout<<("Nhap SBD cua thi sinh can sua nguyen vong: ");
                   string sbd;
                   cin>>sbd;
                   cout<<("Nhap ma NV can sua");
                   int maNv;
                   cin >>maNv;
                   suaNguyenVong(maNv, sbd);
                   break;
               }
               case 6: {
                   cout<<("Nhap SBD cua thi sinh muon them NV: ");
                   string sbd ;
                   cin>>sbd;
                   themNguyenVong(sbd);
                   break;
               }
               case 7: {
                   cout<<("Nhap SBD cua thi sinh can xoa NV: ");
                   string sbd;
                   cin>>sbd;
                   cout<<("Nhap ma NV can xoa: ");
                   int maNv;
                   cin>>maNv;
 					xoaNguyenVong(maNv, sbd);
                   break;
               }
               default:
                   break;
           }
       } while (n != 0);
   }
    void suaNguyenVong(int maNV, string sbd) {
    	string maNganh, maTruong, tenNganh, khoiXT;
   		float diemThi;
       for (int i=0; i <sots;i++) {
           if (thisinh[i].getSBD().compare(sbd) == 0) {
               for (int i = 0; i < thisinh[i].size(); i++) {
                   if (thisinh[i].getMaNV() == maNV) {
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
                        thisinh[i].setMaNganh(maNganh); 
                        thisinh[i].setMaTruong(maTruong); 
                        thisinh[i].setTenNganh(tenNganh); 
                        thisinh[i].setKhoiXT(khoiXT); 
                        thisinh[i].setdiem(diemThi);   
                   }
               }
           }
       }
   }
    void xoaNguyenVong(int maNV, string sbd) {	
       for (int i=0; i <sots;i++) {
           if (thisinh[i].getSBD().compare(sbd) == 0) {
               for (int j = 0; j < thisinh[i].size(); j++) {
                   if (thisinh[i].getMaNV() == maNV) {
                   		thisinh[i].xoaNguyenVong(j);              
                   }
               }
           }
       }
   }
    void themNguyenVong(string sbd) {
       for (int i=0; i <sots;i++) {
       	if(thisinh[i].getSBD().compare(sbd) == 0){
                   thisinh[i].themnv();                     		
       		}	  		
       }
   }
     void suaThiSinh(string sbd) {
       for (int i=0; i <sots;i++) {
       	if(thisinh[i].getSBD().compare(sbd) == 0){
                thisinh[i].suats();                     		
       		}	  		
       }
   }
    void xoaThiSinh(string sbd) {
        for (int i=0; i <sots;i++) {
       	if(thisinh[i].getSBD().compare(sbd) == 0){
                   thisinh[i] = thisinh[i+1];                     		
       		}	  		
       }
       sots--;
   }
    void suaGiamThi(string maGT) {
    	for (int i=0; i <sogt;i++) {
       	if(giamthi[i].getMaGT().compare(maGT) == 0){
                giamthi[i].suanhap();                 		
       		}	  		
       }
   }
    void xoaGiamThi(string maGT) {
    	for (int i=0; i <sogt;i++) {
       	if(giamthi[i].getMaGT().compare(maGT) == 0){
                giamthi[i] = giamthi[i+1];                 		
       		}	  		
       }
      sogt--;
   }
    void hienDSGiamThi() {
       cout<<("----------------------------------------------");
       for (int i =0; i<sogt;i++) {
          
               giamthi[i].hien();
           
       }
   }

    void hienDSHoSoThiSinh() {
       cout<<("----------------------------------------------");
       for (int i =0; i<sots;i++) {
           thisinh[i].hien();
       }
   }


    void hienDSTrungTuyen(string maNganh, float diemChuan){
       for (int i =0 ; i<sots;i++) {
               for (int j = 0; j < thisinh[i].size(); j++) {
                   if ( thisinh[i].getmaNganh().compare(maNganh) == 0 && thisinh[i].getNv()[j].getDiemXetTuyen() >= diemChuan) {
                       thisinh[i].hienThongtinTS();
                       thisinh[i].getNv()[j].hienNguyenVong();
            
                   }
               }   
       }
   }
    void SapXepTheoDiem()
   {  
   		for(int i=0; i<sots;i++){
   			thisinh[i].sapxep();
   		}
   }
    void hienGiamThioHaNoi() {
    	for (int i =0; i<sogt;i++) {
          		if(giamthi[i].getQueQuan().compare("HaNoi") == 0)
              		 giamthi[i].hien(); 
       }
   }
 
  void menuChinh()
   {
       cout<<"\n------CHUONG TRINH QUAN LY TUYEN SINH 2022------\n";
       cout<<"1. Nhap danh sach thi sinh va nguyen vong thi sinh\n";
       cout<<"2. Nhap danh sach giam thi coi thi\n";
       cout<<"3. Them thi sinh vao danh sach\n";
       cout<<"4. Them giam thi vao danh sach\n";
       cout<<"5. Hien thi danh sach ho so du thi\n";
       cout<<"6. Hien thi danh sach giam thi\n";
       cout<<"7. Chinh sua thong tin (Thi sinh, Nguyen vong ,Giam Thi)\n";
	    cout<<"8. Hien thi danh sach trung tuyen( input: ma nganh ,diem chuan)\n";
	    cout<<"9. Sap xep diem thi theo diem thi giam dan\n";
	    cout<<"10. Thong ke giam thi cong tac o HaNoi\n";
	    cout<<"-----Nhan phim 0 de thoat chuong trinh!-----\n";
   }
 	
 };

