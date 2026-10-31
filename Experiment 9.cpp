#include <iostream>
#include <iomanip>

// Abstract / Base Class
class Transport {
protected:
    double distance; // distance in kilometers

public:
    Transport(double dist) : distance(dist) {}

    // Virtual destructor for safe cleanup when deleting derived objects via base pointer
    virtual ~Transport() {}

    // Pure virtual function enforcing run-time polymorphism in derived classes
    virtual double fare() const = 0;

    // Helper method to display trip distance
    double getDistance() const {
        return distance;
    }
};

// Derived Class 1: Bus
class Bus : public Transport {
private:
    const double ratePerKm = 2.50; // Bus rate: ₹2.50 per km

public:
    Bus(double dist) : Transport(dist) {}

    // Overridden fare function for Bus
    double fare() const override {
        return distance * ratePerKm;
    }
};

// Derived Class 2: Train
class Train : public Transport {
private:
    const double ratePerKm = 1.20; // Train rate: ₹1.20 per km

public:
    Train(double dist) : Transport(dist) {}

    // Overridden fare function for Train
    double fare() const override {
        return distance * ratePerKm;
    }
};

int main() {
    double journeyDistance = 150.0; // 150 km journey

    // Creating derived class objects
    Bus myBus(journeyDistance);
    Train myTrain(journeyDistance);

    // Array of base class pointers storing addresses of derived class objects
    Transport* vehicles[2];
    vehicles[0] = &myBus;
    vehicles[1] = &myTrain;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "--- Journey Distance: " << journeyDistance << " km ---\n\n";

    // Demonstrating Run-Time Polymorphism:
    // The actual function called is resolved dynamically at runtime based on the object pointed to.
    for (int i = 0; i < 2; ++i) {
        std::cout << "Transport Option " << (i + 1) << ":" << std::endl;
        std::cout << "Calculated Fare: $" << vehicles[i]->fare() << std::endl;
        std::cout << "-----------------------------------" << std::endl;
    }

    return 0;
}
