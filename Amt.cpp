#include<iostream>
#include<string>
using namespace std;
class Expend{
    public : 
            int ExDrink_Ch,diLu_Ch; 
            Expend(){
                ExDrink_Ch=100;
                diLu_Ch=200;
            }
            ~Expend(){}
};

class Manager_Ex:public Expend{
    public : 
            int Man_Ex[6];
    public : 
            Manager_Ex(){
               Man_Ex[0]=(25*ExDrink_Ch)+(10*diLu_Ch);
               Man_Ex[1]=(35*ExDrink_Ch)+(11*diLu_Ch);
               Man_Ex[2]=(10*ExDrink_Ch)+(9*diLu_Ch);
               Man_Ex[3]=(29*ExDrink_Ch)+(5*diLu_Ch);
               Man_Ex[4]=(25*ExDrink_Ch)+(23*diLu_Ch);
               Man_Ex[5]=(28*ExDrink_Ch)+(45*diLu_Ch);
            }
            ~Manager_Ex(){}
};

class SrMan_Ex: public Expend{
       public : 
                int SrMa_Ex[3];
       public :
                SrMan_Ex(){
               SrMa_Ex[0]=(30*ExDrink_Ch)+(12*diLu_Ch);
               SrMa_Ex[1]=(35*ExDrink_Ch)+(14*diLu_Ch);
               SrMa_Ex[2]=(56*ExDrink_Ch)+(36*diLu_Ch);
               }
               ~SrMan_Ex(){}
};

class Eng_Ex : public Expend{
     public :
              int eng_Ex[5];
     public : 
              Eng_Ex(){
               eng_Ex[0]=(21*ExDrink_Ch)+(10*diLu_Ch);
               eng_Ex[1]=(3*ExDrink_Ch)+(1*diLu_Ch);
               eng_Ex[2]=(10*ExDrink_Ch)+(9*diLu_Ch);
               eng_Ex[3]=(22*ExDrink_Ch)+(15*diLu_Ch);
               eng_Ex[4]=(25*ExDrink_Ch)+(22*diLu_Ch);
               
              }
              ~Eng_Ex(){}
};

class Ceo_Ex:public Expend{
           public :
                    int ceo_Ex;
           public :
                    Ceo_Ex(){
                       ceo_Ex=(50*ExDrink_Ch)+(10*diLu_Ch);
                    }
                    ~Ceo_Ex(){}
};
class Gross{
         public :  float ceoSal;
                float managerSal;
                float seniorManSal;
                float f_engSal;
         public: 
                Gross(){
                ceoSal=450000;
                managerSal=150000;
                seniorManSal=300000;
                f_engSal=50000;
                }
                ~Gross(){}
};

class Tax{
   public :
           virtual void calculate()=0;
};
class ManagerTax: public Gross,public Tax{
    public : float man_Tax[6];
     public : void calculate(){
                for(int i=0;i<6;i++){
                   man_Tax[i]=(5*managerSal)/100;
                } 
             }
};

class SrManTax: public Gross,public Tax{
    public : float srMan_Tax[3];
     public :  
               void calculate(){
                for(int i=0;i<3;i++){
                   srMan_Tax[i]=(5*seniorManSal)/100;
               } 
            }
};

class EngTax: public Gross,public Tax{
    public : float eng_Tax[5];
    public :         
               void calculate(){
                for(int i=0;i<5;i++){
                   eng_Tax[i]=(5*f_engSal)/100;
                } 
             }
};

class CeoTax : public Gross,public Tax{
    public : float ceo_Tax;
         public : 
                 void calculate(){
                ceo_Tax=(8*ceoSal)/100;
               }
};

class Man_Net:public Manager_Ex,public ManagerTax{
        public : 
                float man_net[6];
        public : 
                Man_Net():Manager_Ex(),ManagerTax(){
                  calculate();
                  man_net[0]=150000-(Man_Ex[0]+man_Tax[0]);
                  man_net[1]=150000-(Man_Ex[1]+man_Tax[1]);
                  man_net[2]=150000-(Man_Ex[2]+man_Tax[2]);
                  man_net[3]=150000-(Man_Ex[3]+man_Tax[3]);
                  man_net[4]=150000-(Man_Ex[4]+man_Tax[4]);
                  man_net[5]=150000-(Man_Ex[5]+man_Tax[5]);
                }
                ~Man_Net(){}

};

class SrMan_Net:public SrMan_Ex,public SrManTax{
        public : 
                float srMan_net[3];
        public : 
                SrMan_Net():SrMan_Ex(),SrManTax(){
                  calculate();
                  srMan_net[0]=300000-(SrMa_Ex[0]+srMan_Tax[0]);
                  srMan_net[1]=300000-(SrMa_Ex[1]+srMan_Tax[1]);
                  srMan_net[2]=300000-(SrMa_Ex[2]+srMan_Tax[2]);
                  
                }
                ~SrMan_Net(){}

};

class Eng_Net:public Eng_Ex,public EngTax{
        public : 
                float eng_net[5];
        public : 
                Eng_Net() : Eng_Ex(),EngTax(){
                  calculate();
                  eng_net[0]=50000-(eng_Ex[0]+eng_Tax[0]);
                  eng_net[1]=50000-(eng_Ex[1]+eng_Tax[1]);
                  eng_net[2]=50000-(eng_Ex[2]+eng_Tax[2]);
                  eng_net[3]=50000-(eng_Ex[3]+eng_Tax[3]);
                  eng_net[4]=50000-(eng_Ex[4]+eng_Tax[4]);
                  
                }
                ~Eng_Net(){} 

};

class Ceo_Net:public Ceo_Ex,public CeoTax{
        public : 
                float ceo_net;
        public : 
                Ceo_Net() : Ceo_Ex(),CeoTax(){
                  calculate();
                  ceo_net=450000-(ceo_Ex+ceo_Tax);
                }
                 ~Ceo_Net(){}
};

