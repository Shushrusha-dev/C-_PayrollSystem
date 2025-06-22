#include<iostream>
#include<string>
using namespace std;
class OverHr{
    public :
            int hr_man[6],hr_SeMan[3];
            int hr_eng[5];
    public :
            OverHr(){
            hr_man[0]=4;
            hr_man[1]=6;
            hr_man[2]=7;
            hr_man[3]=9;
            hr_man[4]=10;
            hr_man[5]=16;
            hr_SeMan[0]=5;
            hr_SeMan[1]=8;
            hr_SeMan[2]=9;
            hr_eng[0]=8;
            hr_eng[1]=9;
            hr_eng[2]=10;
            hr_eng[3]=11;
            hr_eng[4]=12;
            }
            ~OverHr(){}
};
class OverCharge{
       public :
            int Och_man,Och_SeMan;
            int Och_eng;
       public :
                OverCharge(){
                    //charges per hr.
                    Och_man=1000;
                    
                    Och_SeMan=1200;
                    Och_eng=800;
                }
                ~OverCharge(){}
};
class Holidays{
        public : 
                int ho_man[6],ho_SeMan[3];
                int ho_eng[5];
        public :
                Holidays(){
                    ho_man[0]=1;
                    ho_man[1]=3;
                    ho_man[2]=1;
                    ho_man[3]=3;
                    ho_man[4]=1;
                    ho_man[5]=5;
                    ho_SeMan[0]=2;
                    ho_SeMan[1]=3;
                    ho_SeMan[2]=2;
                    ho_eng[0]=3;
                    ho_eng[1]=1;
                    ho_eng[2]=5;
                    ho_eng[3]=3;
                    ho_eng[4]=2;
                }
                ~Holidays(){}
};
class Project{
      public : 
              string nameP_man[6];
              string nameP_SeMan[3];
              string nameP_eng[5];
      public :
              Project(){
              nameP_man[0]="Civic Connect";
              nameP_man[1]="Unity Hub";;
              nameP_man[2]="Smart Pollution Control";
              nameP_man[3]="Civic Connect";
              nameP_man[4]="Civic Connect";
              nameP_man[5]="Smart Pollution Control";
              nameP_SeMan[0]="Unity Hub";
              nameP_SeMan[1]="Civic Connect";
              nameP_SeMan[2]="Smart Pollution Control";
              nameP_eng[0]="Civic Connect";
              nameP_eng[1]="Unity Hub";
              nameP_eng[2]="Smart Pollution Control";
              nameP_eng[3]="Smart Pollution Control";
              nameP_eng[4]="Unity Hub";

              }
              ~Project(){}
};

class OvPay:public OverHr,public OverCharge{
       public : int ovPay_man[6],ovPay_SeMan[3];
                int ovPay_eng[5];
      public : 
                OvPay() : OverHr(),OverCharge(){
                 ovPay_man[0]=hr_man[0]*Och_man;
                 ovPay_man[1]=hr_man[1]*Och_man;
                 ovPay_man[2]=hr_man[2]*Och_man;
                 ovPay_man[3]=hr_man[3]*Och_man;
                 ovPay_man[4]=hr_man[4]*Och_man;
                 ovPay_man[5]=hr_man[5]*Och_man;
                 ovPay_SeMan[0]=hr_SeMan[0]*Och_SeMan;
                 ovPay_SeMan[1]=hr_SeMan[1]*Och_SeMan;
                 ovPay_SeMan[2]=hr_SeMan[2]*Och_SeMan;
                 ovPay_eng[0]=hr_eng[0]*Och_eng;
                 ovPay_eng[1]=hr_eng[1]*Och_eng;
                 ovPay_eng[2]=hr_eng[2]*Och_eng;
                 ovPay_eng[3]=hr_eng[3]*Och_eng;
                 ovPay_eng[4]=hr_eng[4]*Och_eng;
               }
               ~OvPay(){}
};

