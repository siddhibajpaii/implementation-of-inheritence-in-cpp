#include<iostream>
#include<string>
using namespace std;

class Food {
    public:
    string cuisine="Indian";
    void type(){
        cout<<"Indian Subcontinental"<<endl;
    }
};
class Dish: public Food {
    public:
    string dish="Kabab Paratha";
};
class Restaurant: public Dish {
    public:
    string name="Ziddi's Kitchen";
};

int main(){
    Restaurant f3;
    f3.type();
    cout<<f3.cuisine<<": "<<f3.dish<<endl;
    cout<<"Restaurant: "<<f3.name;
}

//Output:
//Indian Subcontinental
//Indian: Kabab Paratha
//Restaurant: Ziddi's Kitchen
