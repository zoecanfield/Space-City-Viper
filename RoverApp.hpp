#ifndef ROVER_APP_HPP
#define ROVER_APP_HPP

#include <iostream>
#include <string>

namespace SpaceCityViperOS {

    struct Position {
        double x;
        double y;
    };

    class LunarRover {
    private:
        std::string roverName;
        Position currentPos;
        double lidarSensorDistance; 
        bool motorsActive;

        void ReadLiDARSensor();
        void UpdateNavigation();

    public:
        LunarRover(std::string name);
        
        void BootUpSystem();
        void ProcessNavigationCycle();
        void DisplayTelemetry() const;
    };

} // namespace SpaceCityViperOS

#endif // ROVER_APP_HPP
