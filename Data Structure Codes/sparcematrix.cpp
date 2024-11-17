#include<iostream>
using namespace std;
struct element{
    int row;
    int col;
    int value;
};

class spasematrix{
    private:
            element element[10];
            int count;
    
    public:
            spasematrix():count(0){}

            void insert(int row, int col, int value){
                if(value!=0 && count<10){
                    element[count++]={row,col,value};

                }
            }

            void display(){
                for (int i=0;i<count;i++){
                    cout<<" Row "<< element[i].row 
                        <<" Col "<< element[i].col 
                        <<" Value "<< element[i].value <<endl;
                }
            }

};

int main(){
    spasematrix s;
    s.insert(0,0,5);
    s.insert(0,0,1);
    s.insert(3,0,2);
    s.display();
    return 0;

}