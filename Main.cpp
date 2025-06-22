#include<iostream>
#include "Employee.cpp"
#include "IndividualInfo.cpp"
#include "Amt.cpp"
#include "Work.cpp"
using namespace std;
int main(){
     int pass;
     CEO a;
     Joining d;
     Gross g;
     Ceo_Net n;
     Manager m;
     OvPay o;
     Holidays h;
     Project p;
     Man_Net mn;
     Engineer e;
     Eng_Net en;
     SeMan se;
     SrMan_Net sn;
     cout<<"Enter the password :";
     cin>>pass;
     if(pass>=12 && pass<=26){
          switch(pass){
               case 12 : 
                         cout<<"Employee ID: "<<a.id_ceo<<endl;
                         cout<<"Name : "<<a.name_ceo<<endl;
                         cout<<"Gender : "<<a.ge_ceo<<endl;
                         cout<<"Contact No.: "<<a.mob_ceo<<endl;
                         cout<<"Email Add: "<<a.e_ceo<<endl;
                         cout<<"City : "<<a.add_ceo<<endl;
                         cout<<"Overtime: "<<"-"<<endl;
                         cout<<"Holidays: "<<"-"<<endl;
                         cout<<"Experience : "<<a.exp_ceo<<endl;
                         cout<<"Date of joining: "<<d.D_ceo[0]<<endl;
                         cout<<"Project :"<<"All"<<endl;
                         cout<<"Status : "<<"Active"<<endl;
                         cout<<"Gross salary :"<<g.ceoSal<<endl;
                         cout<<"Net salary :"<<n.ceo_net<<endl;
                         break;
               case 13 :
                         cout<<"Employee ID: "<<m.id_man[0]<<endl;
                         cout<<"Name : "<<m.name_man[0]<<endl;
                         cout<<"Gender : "<<m.ge_man[0]<<endl;
                         cout<<"Contact No.: "<<m.mob_man[0]<<endl;
                         cout<<"Email Add: "<<m.e_man[0]<<endl;
                         cout<<"City : "<<m.add_man[0]<<endl;
                         cout<<"Overtime Salary: "<<o.ovPay_man[0]<<endl;
                         cout<<"Holidays: "<<h.ho_man[0]<<endl;
                         cout<<"Experience : "<<m.exp_man[0]<<endl;
                         cout<<"Date of joining: "<<d.D_manager[0]<<endl;
                         cout<<"Project :"<<p.nameP_man[0]<<endl;
                         cout<<"Status : "<<"Active"<<endl;
                         cout<<"Gross salary :"<<g.managerSal<<endl;
                         cout<<"Net salary :"<<mn.man_net[0]<<endl;
                         break;
                         
               case 14 :
                        cout<<"Employee ID: "<<m.id_man[1]<<endl;
                         cout<<"Name : "<<m.name_man[1]<<endl;
                         cout<<"Gender : "<<m.ge_man[1]<<endl;
                         cout<<"Contact No.: "<<m.mob_man[1]<<endl;
                         cout<<"Email Add: "<<m.e_man[1]<<endl;
                         cout<<"City : "<<m.add_man[1]<<endl;
                         cout<<"Overtime Salary: "<<o.ovPay_man[1]<<endl;
                         cout<<"Holidays: "<<h.ho_man[1]<<endl;
                         cout<<"Experience : "<<m.exp_man[1]<<endl;
                         cout<<"Date of joining: "<<d.D_manager[1]<<endl;
                         cout<<"Project :"<<p.nameP_man[1]<<endl;
                         cout<<"Status : "<<"Active"<<endl;
                         cout<<"Gross salary :"<<g.managerSal<<endl;
                         cout<<"Net salary :"<<mn.man_net[1]<<endl;
                         break;
               case 15 :
                        cout<<"Employee ID: "<<m.id_man[2]<<endl;
                         cout<<"Name : "<<m.name_man[2]<<endl;
                         cout<<"Gender : "<<m.ge_man[2]<<endl;
                         cout<<"Contact No.: "<<m.mob_man[2]<<endl;
                         cout<<"Email Add: "<<m.e_man[2]<<endl;
                         cout<<"City : "<<m.add_man[2]<<endl;
                         cout<<"Overtime Salary: "<<o.ovPay_man[2]<<endl;
                         cout<<"Holidays: "<<h.ho_man[2]<<endl;
                         cout<<"Experience : "<<m.exp_man[2]<<endl;
                         cout<<"Date of joining: "<<d.D_manager[2]<<endl;
                         cout<<"Project :"<<p.nameP_man[2]<<endl;
                         cout<<"Status : "<<"Active"<<endl;
                         cout<<"Gross salary :"<<g.managerSal<<endl;
                         cout<<"Net salary :"<<mn.man_net[2]<<endl;
                         break;
               case 16 :
                         cout<<"Employee ID: "<<m.id_man[3]<<endl;
                         cout<<"Name : "<<m.name_man[3]<<endl;
                         cout<<"Gender : "<<m.ge_man[3]<<endl;
                         cout<<"Contact No.: "<<m.mob_man[3]<<endl;
                         cout<<"Email Add: "<<m.e_man[3]<<endl;
                         cout<<"City : "<<m.add_man[3]<<endl;
                         cout<<"Overtime Salary: "<<o.ovPay_man[3]<<endl;
                         cout<<"Holidays: "<<h.ho_man[3]<<endl;
                         cout<<"Experience : "<<m.exp_man[3]<<endl;
                         cout<<"Date of joining: "<<d.D_manager[3]<<endl;
                         cout<<"Project :"<<p.nameP_man[3]<<endl;
                         cout<<"Status : "<<"Active"<<endl;
                         cout<<"Gross salary :"<<g.managerSal<<endl;
                         cout<<"Net salary :"<<mn.man_net[3]<<endl;
                         break;
               case 17 :
                        cout<<"Employee ID: "<<m.id_man[4]<<endl;
                         cout<<"Name : "<<m.name_man[4]<<endl;
                         cout<<"Gender : "<<m.ge_man[4]<<endl;
                         cout<<"Contact No.: "<<m.mob_man[4]<<endl;
                         cout<<"Email Add: "<<m.e_man[4]<<endl;
                         cout<<"City : "<<m.add_man[4]<<endl;
                         cout<<"Overtime Salary: "<<o.ovPay_man[4]<<endl;
                         cout<<"Holidays: "<<h.ho_man[4]<<endl;
                         cout<<"Experience : "<<m.exp_man[4]<<endl;
                         cout<<"Date of joining: "<<d.D_manager[4]<<endl;
                         cout<<"Project :"<<p.nameP_man[4]<<endl;
                         cout<<"Status : "<<"Active"<<endl;
                         cout<<"Gross salary :"<<g.managerSal<<endl;
                         cout<<"Net salary :"<<mn.man_net[4]<<endl;
                         break;
               case 18 :
                        cout<<"Employee ID: "<<m.id_man[5]<<endl;
                         cout<<"Name : "<<m.name_man[5]<<endl;
                         cout<<"Gender : "<<m.ge_man[5]<<endl;
                         cout<<"Contact No.: "<<m.mob_man[5]<<endl;
                         cout<<"Email Add: "<<m.e_man[5]<<endl;
                         cout<<"City : "<<m.add_man[5]<<endl;
                         cout<<"Overtime Salary: "<<o.ovPay_man[5]<<endl;
                         cout<<"Holidays: "<<h.ho_man[5]<<endl;
                         cout<<"Experience : "<<m.exp_man[5]<<endl;
                         cout<<"Date of joining: "<<d.D_manager[5]<<endl;
                         cout<<"Project :"<<p.nameP_man[5]<<endl;
                         cout<<"Status : "<<"Active"<<endl;
                         cout<<"Gross salary :"<<g.managerSal<<endl;
                         cout<<"Net salary :"<<mn.man_net[5]<<endl;
                         break;
               case 19 :
                        cout<<"Employee ID: "<<e.id_eng[0]<<endl;
                         cout<<"Name : "<<e.name_eng[0]<<endl;
                         cout<<"Gender : "<<e.ge_eng[0]<<endl;
                         cout<<"Contact No.: "<<e.mob_eng[0]<<endl;
                         cout<<"Email Add: "<<e.e_eng[0]<<endl;
                         cout<<"City : "<<e.add_eng[0]<<endl;
                         cout<<"Overtime Salary: "<<o.ovPay_eng[0]<<endl;
                         cout<<"Holidays: "<<h.ho_eng[0]<<endl;
                         cout<<"Experience : "<<e.exp_eng[0]<<endl;
                         cout<<"Date of joining: "<<d.D_eng[0]<<endl;
                         cout<<"Project :"<<p.nameP_eng[0]<<endl;
                         cout<<"Status : "<<"Active"<<endl;
                         cout<<"Gross salary :"<<g.f_engSal<<endl;
                         cout<<"Net salary :"<<en.eng_net[0]<<endl;
                         break;
               case 20 :
                        cout<<"Employee ID: "<<e.id_eng[1]<<endl;
                         cout<<"Name : "<<e.name_eng[1]<<endl;
                         cout<<"Gender : "<<e.ge_eng[1]<<endl;
                         cout<<"Contact No.: "<<e.mob_eng[1]<<endl;
                         cout<<"Email Add: "<<e.e_eng[1]<<endl;
                         cout<<"City : "<<e.add_eng[1]<<endl;
                         cout<<"Overtime Salary: "<<o.ovPay_eng[1]<<endl;
                         cout<<"Holidays: "<<h.ho_eng[1]<<endl;
                         cout<<"Experience : "<<e.exp_eng[1]<<endl;
                         cout<<"Date of joining: "<<d.D_eng[1]<<endl;
                         cout<<"Project :"<<p.nameP_eng[1]<<endl;
                         cout<<"Status : "<<"Active"<<endl;
                         cout<<"Gross salary :"<<g.f_engSal<<endl;
                         cout<<"Net salary :"<<en.eng_net[1]<<endl;
                         break;
               case 21 :
                         cout<<"Employee ID: "<<e.id_eng[2]<<endl;
                         cout<<"Name : "<<e.name_eng[2]<<endl;
                         cout<<"Gender : "<<e.ge_eng[2]<<endl;
                         cout<<"Contact No.: "<<e.mob_eng[2]<<endl;
                         cout<<"Email Add: "<<e.e_eng[2]<<endl;
                         cout<<"City : "<<e.add_eng[2]<<endl;
                         cout<<"Overtime Salary: "<<o.ovPay_eng[2]<<endl;
                         cout<<"Holidays: "<<h.ho_eng[2]<<endl;
                         cout<<"Experience : "<<e.exp_eng[2]<<endl;
                         cout<<"Date of joining: "<<d.D_eng[2]<<endl;
                         cout<<"Project :"<<p.nameP_eng[2]<<endl;
                         cout<<"Status : "<<"Active"<<endl;
                         cout<<"Gross salary :"<<g.f_engSal<<endl;
                         cout<<"Net salary :"<<en.eng_net[2]<<endl;
                         break;
               case 22 :
                        cout<<"Employee ID: "<<e.id_eng[3]<<endl;
                         cout<<"Name : "<<e.name_eng[3]<<endl;
                         cout<<"Gender : "<<e.ge_eng[3]<<endl;
                         cout<<"Contact No.: "<<e.mob_eng[3]<<endl;
                         cout<<"Email Add: "<<e.e_eng[3]<<endl;
                         cout<<"City : "<<e.add_eng[3]<<endl;
                         cout<<"Overtime Salary: "<<o.ovPay_eng[3]<<endl;
                         cout<<"Holidays: "<<h.ho_eng[3]<<endl;
                         cout<<"Experience : "<<e.exp_eng[3]<<endl;
                         cout<<"Date of joining: "<<d.D_eng[3]<<endl;
                         cout<<"Project :"<<p.nameP_eng[3]<<endl;
                         cout<<"Status : "<<"Active"<<endl;
                         cout<<"Gross salary :"<<g.f_engSal<<endl;
                         cout<<"Net salary :"<<en.eng_net[3]<<endl;
                         break;
               case 23 :
                        cout<<"Employee ID: "<<e.id_eng[4]<<endl;
                         cout<<"Name : "<<e.name_eng[4]<<endl;
                         cout<<"Gender : "<<e.ge_eng[4]<<endl;
                         cout<<"Contact No.: "<<e.mob_eng[4]<<endl;
                         cout<<"Email Add: "<<e.e_eng[4]<<endl;
                         cout<<"City : "<<e.add_eng[4]<<endl;
                         cout<<"Overtime Salary: "<<o.ovPay_eng[4]<<endl;
                         cout<<"Holidays: "<<h.ho_eng[4]<<endl;
                         cout<<"Experience : "<<e.exp_eng[4]<<endl;
                         cout<<"Date of joining: "<<d.D_eng[4]<<endl;
                         cout<<"Project :"<<p.nameP_eng[4]<<endl;
                         cout<<"Status : "<<"Active"<<endl;
                         cout<<"Gross salary :"<<g.f_engSal<<endl;
                         cout<<"Net salary :"<<en.eng_net[4]<<endl;
                         break;
               case 24 : 
                         cout<<"Employee ID: "<<se.id_SeMan[0]<<endl;
                         cout<<"Name : "<<se.name_SeMan[0]<<endl;
                         cout<<"Gender : "<<se.ge_SeMan[0]<<endl;
                         cout<<"Contact No.: "<<se.mob_SeMan[0]<<endl;
                         cout<<"Email Add: "<<se.e_SeMan[0]<<endl;
                         cout<<"City : "<<se.add_SeMan[0]<<endl;
                         cout<<"Overtime Salary: "<<o.ovPay_SeMan[0]<<endl;
                         cout<<"Holidays: "<<h.ho_SeMan[0]<<endl;
                         cout<<"Experience : "<<se.exp_SeMan[0]<<endl;
                         cout<<"Date of joining: "<<d.D_seniorMan[0]<<endl;
                         cout<<"Project :"<<p.nameP_SeMan[0]<<endl;
                         cout<<"Status : "<<"Active"<<endl;
                         cout<<"Gross salary :"<<g.seniorManSal<<endl;
                         cout<<"Net salary :"<<sn.srMan_net[0]<<endl;
                         break;
               case 25 :
                        cout<<"Employee ID: "<<se.id_SeMan[1]<<endl;
                         cout<<"Name : "<<se.name_SeMan[1]<<endl;
                         cout<<"Gender : "<<se.ge_SeMan[1]<<endl;
                         cout<<"Contact No.: "<<se.mob_SeMan[1]<<endl;
                         cout<<"Email Add: "<<se.e_SeMan[1]<<endl;
                         cout<<"City : "<<se.add_SeMan[1]<<endl;
                         cout<<"Overtime Salary: "<<o.ovPay_SeMan[1]<<endl;
                         cout<<"Holidays: "<<h.ho_SeMan[1]<<endl;
                         cout<<"Experience : "<<se.exp_SeMan[1]<<endl;
                         cout<<"Date of joining: "<<d.D_seniorMan[1]<<endl;
                         cout<<"Project :"<<p.nameP_SeMan[1]<<endl;
                         cout<<"Status : "<<"Active"<<endl;
                         cout<<"Gross salary :"<<g.seniorManSal<<endl;
                         cout<<"Net salary :"<<sn.srMan_net[1]<<endl;
                         break;
               case 26 :
                        cout<<"Employee ID: "<<se.id_SeMan[2]<<endl;
                         cout<<"Name : "<<se.name_SeMan[2]<<endl;
                         cout<<"Gender : "<<se.ge_SeMan[2]<<endl;
                         cout<<"Contact No.: "<<se.mob_SeMan[2]<<endl;
                         cout<<"Email Add: "<<se.e_SeMan[2]<<endl;
                         cout<<"City : "<<se.add_SeMan[2]<<endl;
                         cout<<"Overtime Salary: "<<o.ovPay_SeMan[2]<<endl;
                         cout<<"Holidays: "<<h.ho_SeMan[2]<<endl;
                         cout<<"Experience : "<<se.exp_SeMan[2]<<endl;
                         cout<<"Date of joining: "<<d.D_seniorMan[2]<<endl;
                         cout<<"Project :"<<p.nameP_SeMan[2]<<endl;
                         cout<<"Status : "<<"Active"<<endl;
                         cout<<"Gross salary :"<<g.seniorManSal<<endl;
                         cout<<"Net salary :"<<sn.srMan_net[2]<<endl;
                         break;
          }

     }else{
          cout<<"please enter valid Password";
     }
     return 0;
}
