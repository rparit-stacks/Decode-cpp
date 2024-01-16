// Create a class representing a Car with attributes like make, model, and year. Include a method to display information about the car.

#include <iostream>
using namespace std;

class car
{
private:
    int year;
    string model, brand;

public:
    // set year
    int setYear(int year)
    {
        this->year = year;
    }
    // print year
    void getYear()
    {
        cout << year;
    }
    // set model and brand
    void setModelBrand(string m, string b)
    {
        model = m;
        brand = b;
    }
    // print model and brand
    void getModelBrand()
    {
        cout << "Model : " << model << "\nBrand : " << brand << endl;
    }
};

int main()
{
    // Declare an object of class 'car' and initialize it.
    car baleno;

    baleno.setModelBrand("XLS","maruti suzuki");
    baleno.setYear(2020);

    cout<<"I have a car name baleno of year "; 
    baleno.getYear(); 
    cout<<"\nIt is a ";
    baleno.getModelBrand();

}