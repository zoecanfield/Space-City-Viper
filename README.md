# Space City VIPER Simulator 🛰️🤖

An object-oriented C++ flight telemetry and robotics software application modeled to simulate autonomous hazard avoidance workflows on a lunar rover exploration asset. This project is inspired by NASA's robotic planetary missions managed at Johnson Space Center (JSC) in Houston.

## 🚀 Architectural Systems
* **Object-Oriented Sensing:** Built with modular C++ namespaces (`SpaceCityViperOS`) containing structured telemetry parameters tracking positional data and sensory state variables.
* **Sense-Plan-Act Pipeline:** Implements real-time cyclic sensor feedback loops (simulating LiDAR variance) mapped directly to autonomous motor responses.
* **Proactive Threshold Interceptors:** Includes automated threshold telemetry checks that immediately trigger emergency braking protocols to protect the rover chassis when lunar obstacles cross the critical safety floor.

## 🛠️ Built With
* **C++17:** Leverages strict modern object-oriented code architecture.
* **CMake:** Configured with a cross-platform compilation script (`CMakeLists.txt`) for immediate deployment across developer environments.

## 📝 Author
Created by **Zoe Canfield** | Space City VIPER Project
