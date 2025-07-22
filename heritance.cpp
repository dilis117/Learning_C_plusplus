#include <iostream>   // Tarvitaan cout ja cin -komennoille
#include <string>     // Mahdollistaa string-tyypin käytön
using namespace std;

// class: Vehicle
class Vehicle
{
public:
  int weight;
  int topspeed;
  long distance_traveled;

  // constructor for vehicle
  Ajoneuvo(int weight, int topspeed, long distance_traveled);

  // method for adding driving distance
  void Aja(int driving_distance);

  // Getters
  int EnterWeight();
  int EnterTopSpeed();
  long EnterDistanceTravelled();
};

// implement constuctor
Vehicle::Vehicle(int Vw, int Vts, long Vdt)
{
  weight = Vw;
  topspeed = Vts;
  distance_traveled = Vdt;
}

// add driving distance to object
void Vehicle::Drive(int driving_distance)
{
  distance_traveled += driving_distance;
}

// return weight
int Vehicle::EnterWeight()
{
  return weight;
}

// return topspeed
int Vehicle::EnterTopSpeed()
{
  return topspeed;
}

// return driving distance
long Vehicle::EnterDistanceTravelled()
{
  return distance_traveled;
}

// class vehicle
class Car : public Vehicle {
private:
  // private variables for car info
  string brand, model, registration_num;
  bool engineOn; // Onko auto käynnissä vai ei

public:
  // constructor for heritance
   Auto(int vehicle_weight, int vehicle_topspeed, long vehicle_distance_traveled,
       string car_brand, string car_model, string car_registration_number, bool engineOn)
    : Vehicle(vehicle_weight, vehicle_topspeed, vehicle_distance_traveled),
      brand(car_brand), model(car_model), rekkari(car_registration_num), engineOn(isEngineOn) {}

  // Getters for car info
  string EnterBrand() {
    return brand;
  }

  string EnterModel() {
    return model;
  }

  string EnterRegistrationNumber() {
    return registration_num;
  }

  // print car info
  void inspect() {
    cout << "Car info: " << endl;
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Distance traveled: " << EnterDistanceTravelled() << endl;
    cout << "Weight: " << EnterWeight() << endl;
    cout << "Topspeed: " << EnterTopSpeed() << endl;
    cout << "Registration number: " << registration_num << endl;
    cout << (engineOn ? "Engine is running." : "Engine is not running.") << endl;
  }

  // start the engine, if not already on
  void startEngine() {
    if (!engineOn) {
      engineOn = true;
    }
    else {
      cout << "Engine is already running." << endl;
    }
  }
};


int main()
{
  int weight, speed;
  long km;
  string brand, model, registration_number;

  // ask and save the car info into variables
  cout << "Enter car brand: ";
  cin >> brand;

  cout << "Enter car model: ";
  cin >> model;

  cout << "Enter car registration number: ";
  cin >> registration_number;

  cout << "Enter car weight: ";
  cin >> paino;

  cout << "Enter car topspeed: ";
  cin >> speed;

  cout << "Enter car distance drived: ";
  cin >> km;
  cout << endl;

 // create Car-object with info provided
  Car carx(weight, speed, km, brand, model, registration_number, 0);

  // print car info and start the engine and drive 95 km
  autoX.inspect();
  autoX.startEngine();
  autoX.Drive(95);
  cout << endl;
  autoX.inspect();
}
