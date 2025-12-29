#include<iostream>
#include<string>
using namespace std;

class Product{

    private:
        int tax;

    public:
        string name;
        int price;
        float rating;
        string genre;
        string comodity;
        int piece;

        //setter
        void setTax( int t){
            tax =t;
        }

        //getter
        int getTax(){
            return tax;
        }



};

int main(){
    Product p1;

    p1.name=" radhey flute";
    p1.rating=4.3;
    p1.genre=" music";
    p1.comodity="flute";
    p1.piece=1;
    p1.setTax(18);

     Product p2;

    p2.name=" rc power car ";
    p2.rating=4.1;
    p2.genre=" kids ";
    p2.comodity="rc car ";
    p2.piece=1;
    p2.setTax(25);

    cout<<"name="<<p1.name<<endl;
    cout<<"rating="<<p1.rating<<endl;
    cout<<"genre="<<p1.genre<<endl;
    cout<<"comodity="<<p1.comodity<<endl;
    cout<<"piece="<<p1.piece<<endl;
    cout<<"tax="<<p1.getTax()<<endl;

     cout<<"name="<<p2.name<<endl;
    cout<<"rating="<<p2.rating<<endl;
    cout<<"genre="<<p2.genre<<endl;
    cout<<"comodity="<<p2.comodity<<endl;
    cout<<"piece="<<p2.piece<<endl;
    cout<<"tax="<<p2.getTax()<<endl;




}