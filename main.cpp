#include "RoverApp.hpp"
#include <chrono>
#include <thread>

int main() {
    std::cout << "==========================================\n";
    std::cout << "      SPACE CITY VIPER FLIGHT INTERFACE   \n";
    std::cout << "==========================================\n";

    // Instantiating your uniquely named rover
    SpaceCityViperOS::LunarRover myRover("VIPER_PROBE_HOUSTON");
    myRover.BootUpSystem();

    for (int second = 1; second <= 5; ++second) {
        std::cout << "------------------------------------------\n";
        myRover.ProcessNavigationCycle();
        myRover.DisplayTelemetry();
        
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }

    std::cout << "==========================================\n";
    std::cout << "[MISSION] Sequence completed. Telemetry link closed.\n";
    return 0;
}
