#include "RoverApp.hpp"

namespace SpaceCityViperOS {

    LunarRover::LunarRover(std::string name) 
        : roverName(name), currentPos({0.0, 0.0}), lidarSensorDistance(10.0), motorsActive(false) {}

    void LunarRover::BootUpSystem() {
        std::cout << "[BOOT] " << roverName << " | JSC Robotics Subsystem Active.\n";
        motorsActive = true;
    }

    void LunarRover::ReadLiDARSensor() {
        static double mockDistance = 5.0;
        mockDistance -= 1.2; 
        lidarSensorDistance = mockDistance;
    }

    void LunarRover::UpdateNavigation() {
        if (!motorsActive) return;

        if (lidarSensorDistance <= 1.5) {
            std::cout << "[WARN] CRATER WALL DETECTED! Distance: " << lidarSensorDistance << "m. Engaging Emergency Braking System!\n";
            motorsActive = false; 
        } else {
            currentPos.x += 1.0;
            std::cout << "[NAV] Path clear. Driving forward... Grid X: " << currentPos.x << "\n";
        }
    }

    void LunarRover::ProcessNavigationCycle() {
        ReadLiDARSensor();
        UpdateNavigation();
    }

    void LunarRover::DisplayTelemetry() const {
        std::cout << "[TELEMETRY] Rover: " << roverName 
                  << " | Core Motors: " << (motorsActive ? "ACTIVE" : "HALTED")
                  << " | LiDAR: " << lidarSensorDistance << "m\n";
    }

} // namespace SpaceCityViperOS
