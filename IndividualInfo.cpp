#include<iostream>
#include<string>
using namespace std;
class Post{
    public : int no_ceo,no_manager,no_seniorMan;
             int no_eng;
    public : Post(){
                no_ceo=1;
                no_manager=6;
                no_seniorMan=3;
                no_eng=5;
            }
            ~Post(){}
};

class Joining : public Post{
    public : string D_ceo[1],D_manager[6],D_seniorMan[3];
             string D_eng[5];
    public :  Joining(){
                D_ceo[0]="1-Jan-2020";
                // it is date of Starting of Company.
                D_manager[0]="2-Feb-2024";
                D_manager[1]="3-Mar-2022";
                D_manager[2]="5-May-2021";             
                D_manager[3]="5-Jul-2021";
                D_manager[4]="3-Mar-2020";
                D_manager[5]="6-Dec-2020";
                D_seniorMan[0]="20-Jul-2022";
                D_seniorMan[1]="2-Jan-2020";
                D_seniorMan[2]="5-Mar-2023";
                D_eng[0]="5-Apr-2023";
                D_eng[1]="4-Jan-2021";
                D_eng[2]="6-Feb-2024";
                D_eng[3]="3-Aug-2023";
                D_eng[4]="10-May-2020";
             }
             ~Joining(){}
};

