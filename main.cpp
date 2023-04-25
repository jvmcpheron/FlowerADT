/* 
Programming Final Exam Part 1A
Jane McPheron
OOP UML Diagram
*/

 
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Flower{
    private:
        string name;
        double height;
        int petals;
        //default constructor
        Flower();
    public:
        //prototype initializing constructor
        Flower(string thisName, double thisHeight, int thisPetals);
        //function to access name (accessor)
        string getName(){
            return name;
        }
        //function to access height (accessor)
        double getHeight(){
            return height;
        }
        //function to access petals (accessor)
        int getPetals(){
            return petals;
        }
        //prototype function for changing petals (mutator)
        void setPetals(int* newPetals);
        //prototype function to show the object info
        void display();

};



int main(){

//test code
    Flower Tulip("tulip", -13.1, 5);
    Tulip.display();

    //user input
    while(true){
        string answer;
        cout << "What would you like to do? (getName, getHeight, getPetals, setPetals, displayFlower, quit)" << endl;
        cin >> answer;
        if (answer == "getName"){
            string temp = Tulip.getName();
            cout << "The flower is called " << temp << "." << endl;
        }
        if (answer == "getHeight"){
            double temp = Tulip.getHeight();
            cout << "The flower is " << temp << " inches tall." << endl;
        }
        if (answer == "getPetals"){
            int temp = Tulip.getPetals();
            cout << "The flower has " << temp << " petals." << endl;
        }
        if (answer == "setPetals"){
            int newPetals;
            Tulip.setPetals(&newPetals);
        }
        if(answer == "quit"){
            break;
        }
        if (answer == "displayFlower"){
            Tulip.display();
        }
    }
}
//constructor code
Flower::Flower(string thisName, double thisHeight, int thisPetals){
    name = thisName;
    if (thisHeight >= 0){
        height = thisHeight;
    }else{
        height = 0;
    }
    if (thisPetals >= 0){
        petals = thisPetals;
    }else{
        petals = 0;
    }
}
//mutator function code
void Flower::setPetals(int* newPetals){
    cout << "How many petals does this flower have?" << endl;
    cin >> *newPetals;
    petals = *newPetals;
    if (*newPetals >= 0){
        petals = *newPetals;
    }else{
        petals = 0;
    }
}
//display function code
void Flower::display(){
    cout << "This flower is called a " << name << ". It is " << height << " inches tall. " << "It has " << petals << " petals." << endl;
}