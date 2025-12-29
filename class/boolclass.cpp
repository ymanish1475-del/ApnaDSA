#include<iostream>
#include<string>
using namespace std;

class Book{
    private:
         int copyrightId;
    public:
        string name;
        string author;
        string genre;
        int price;
        float rating;

        // /setter
        void setcopyrightID( int c){
            copyrightId= c;
        }

        // getter
        int getcopyrightId(){
            return copyrightId;
        }
        

        
};

int main(){

    Book r;
    r.name="rashmirathi";
    r.author="dinkar";
    r.genre="poem";
    r.price = 499;
    r.rating=4.2;
    r.setcopyrightID(123454321);

    cout<<"name="<<r.name<<endl;
    cout<<"author="<<r.author<<endl;
    cout<<"genre="<<r.genre<<endl;
    cout<<"price="<<r.price<<endl;
    cout<<"rating="<<r.rating<<endl;
    cout<<"copyrightId="<<r.getcopyrightId()<<endl;

}