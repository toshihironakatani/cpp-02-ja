
class Vehicle {
protected:
  double velocity;
  double fuel;
};

class Car : public Vehicle {
private:
  int car_type;

};

class Motorcycle : public Vehicle {
private:
  int cycle_type;
};

int main() {
  Car car;
  Motorcycle motor;


}

