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
        //initializing constructor
        Flower(string thisName, double thisHeight, int thisPetals){
            name = thisName;
            height = thisHeight;
            petals = thisPetals;
        }
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
        //function for changing petals (mutator)
        void setPetals(int* petals){
            cout << "How many petals does this flower have?" << endl;
            cin >> *petals;
        }
        //function to show the object info
        void displayFlower(){
            cout << "This flower is called a " << name << ". It is " << height << " inches tall." << "It has " << petals << " petals." << endl;
        }

};



int main(){

//test code
    Flower Tulip("tulip", 13.1, 5);
    Tulip.displayFlower();

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
            // Tulip.setPetals(&petals);
        }
        if(answer == "quit"){
            break;
        }
        if (answer == "displayFlower"){
            Tulip.displayFlower();
        }
    }
}