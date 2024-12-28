#include <iostream>

using namespace std;


 class car {

        private:
            string make;
            string model;
            string engineType;
            string color;

        public:

            car(string make, string model, string engineType, string color){
                setMake(make);
                setModel(model);
                setEngineType(engineType);
                setColor(color);
            };

            string getMake(){
                return this->make;
            };

            void setMake(string make){
                this->make = make;
            };

            string getModel(){
            return this->model;
            }

            void setModel(string model){
                this-> model = model;
            }

            string getEngineType(){
                return this->engineType;
            }

            void setEngineType(string engineType){
                this->engineType = engineType;
            }

            string getColor(){
                return this->color;
            }

            void setColor(string color){
                this->color = color;
            }

    };

    int main(){
        
        car corvette = car("Chevy", "Corvette", "V8", "Red");

        cout << corvette.getMake() << endl;
        cout << corvette.getModel() << endl;
        cout << corvette.getEngineType() << endl;
        cout << corvette.getColor() << endl;

        return 0;
    }
