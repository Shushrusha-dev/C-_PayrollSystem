#include<iostream>
#include<string>
using namespace std;
class CEO{
     public :string id_ceo,name_ceo,ge_ceo;
             string mob_ceo;
             string e_ceo,add_ceo;
             int pass_ceo,exp_ceo;
    public :CEO(){
            id_ceo="PRN112";
            name_ceo="Om Rajput";
            ge_ceo="male";
              mob_ceo="9910287654";
             e_ceo="o@gmail.com";
             add_ceo="Pune";
              pass_ceo=12;
              exp_ceo=10;
            }
            ~CEO(){}
};
class Manager{
       public:
              string id_man[6],name_man[6],ge_man[6];
              string mob_man[6];
             string e_man[6],add_man[6];
             int pass_man[6],exp_man[6];
       public :
               Manager(){
                id_man[0]="PRN113";
                name_man[0]="Devid Jones";
                ge_man[0]="Male";
                mob_man[0]="9970875645";
                e_man[0]="d@gmail.com";
                add_man[0]="Aurangabad";
                pass_man[0]=13;
                exp_man[0]=5;
                id_man[1]="PRN114";
                name_man[1]="De James";
                ge_man[1]="Male";
                mob_man[1]="9970843565";
                e_man[1]="de@gmail.com";
                add_man[1]="Mumbai";
                pass_man[1]=14;
                exp_man[1]=6;
                id_man[2]="PRN115";
                name_man[2]="William Shake";
                ge_man[2]="Male";
                mob_man[2]="9934251634";
                e_man[2]="wil@gmail.com";
                add_man[2]="Pune";
                pass_man[2]=15;
                exp_man[2]=7;
                id_man[3]="PRN116";
                name_man[3]="Shiv Sen";
                ge_man[3]="Male";
                mob_man[3]="9923457890";
                e_man[3]="shiv@gmail.com";
                add_man[3]="Pune";
                pass_man[3]=16;
                exp_man[3]=5;
                id_man[4]="PRN117";
                name_man[4]="Nik Johan";
                ge_man[4]="Male";
                mob_man[4]="9956437890";
                e_man[4]="nik@gmail.com";
                add_man[4]="Mumbai";
                pass_man[4]=17;
                exp_man[4]=6;
                id_man[5]="PRN118";
                name_man[5]="Devid Warner";
                ge_man[5]="Male";
                mob_man[5]="9954321389";
                e_man[5]="devid@gmail.com";
                add_man[5]="Pune";
                pass_man[5]=18;
                exp_man[5]=3;
               }
               ~Manager(){}
};

class Engineer{
        public :string id_eng[5],name_eng[5],ge_eng[5];
                string mob_eng[5];
                string e_eng[5],add_eng[5];
                int pass_eng[5],exp_eng[5];
        public : 
                Engineer(){
                id_eng[0]="PRN119";
                name_eng[0]="John Smith";
                ge_eng[0]="male";
                mob_eng[0]="9345678934";
                e_eng[0]="jo@gmail.com";
                add_eng[0]="Pune";
                pass_eng[0]=19;
                exp_eng[0]=3;
                id_eng[1]="PRN120";
                name_eng[1]="S Michael";
                ge_eng[1]="male";
                mob_eng[1]="9432578934";
                e_eng[1]="mi@gmail.com";
                add_eng[1]="Mumbai";
                pass_eng[1]=20;
                exp_eng[1]=3;
                id_eng[2]="PRN121";
                name_eng[2]="K Daniel";
                ge_eng[2]="Female";
                mob_eng[2]="1234567890";
                e_eng[2]="kp@gmail.com";
                add_eng[2]="Mumbai";
                pass_eng[2]=21;
                exp_eng[2]=5;
                id_eng[3]="PRN122";
                name_eng[3]="A David";
                ge_eng[3]="Female";
                mob_eng[3]="4524367890";
                e_eng[3]="as@gmail.com";
                add_eng[3]="Pune";
                pass_eng[3]=22;
                exp_eng[3]=2;
                id_eng[4]="PRN123";
                name_eng[4]="Z James";
                ge_eng[4]="male";
                mob_eng[4]="9435627994";
                e_eng[4]="zu@gmail.com";
                add_eng[4]="Pune";
                pass_eng[4]=23;
                exp_eng[4]=1;
                }
                ~Engineer(){}
};

class SeMan{
        public :string id_SeMan[3],name_SeMan[3],ge_SeMan[3];
                string mob_SeMan[3];
                string e_SeMan[3],add_SeMan[3];
                int pass_SeMan[3],exp_SeMan[3];
        public :
                SeMan(){
                id_SeMan[0]="PRN124";
                name_SeMan[0]="S Charles";
                ge_SeMan[0]="Female";
                mob_SeMan[0]="2345674599";
                e_SeMan[0]="s@gmail.com";
                add_SeMan[0]="Pune";
                pass_SeMan[0]=24;
                exp_SeMan[0]=8;
                id_SeMan[1]="PRN125";
                name_SeMan[1]="S Thomas";
                ge_SeMan[1]="Female";
                mob_SeMan[1]="7219878459";
                e_SeMan[1]="sr@gmail.com";
                add_SeMan[1]="Pune";
                pass_SeMan[1]=25;
                exp_SeMan[1]=9;
                id_SeMan[2]="PRN126";
                name_SeMan[2]="R Paul";
                ge_SeMan[2]="Male";
                mob_SeMan[2]="2453678905";
                e_SeMan[2]="r@gmail.com";
                add_SeMan[2]="Pune";
                pass_SeMan[2]=26;
                exp_SeMan[2]=7;
                }
                ~SeMan(){}
};

