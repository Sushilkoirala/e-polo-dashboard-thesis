# Epolo-Dashboard Overview
The complete implementation of a real-time embedded dashboard system for a converted electric Volkswagen Polo (E-Polo) may be found in this repository. The dashboard user interface is built using the STM32F103 (an ARM Cortex-M3) microcontroller and a 2.4” TFT touchscreen display. The dashboard functions to monitor real-time electric vehicle parameters through the thesis work initiated for the M.Sc. High Integrity Systems program at Frankfurt University of Applied Sciences, which assisted in the design of this project

The dashboard system replaces the aging analog instrumentation of internal combustion engine (ICE) vehicles converted to electric propulsion. User interaction occurs via a touchscreen interface showcasing real-time data, while the system may integrate either a simulated or live BMS (Battery Management System). A Python-developed optional desktop GUI mirrors the dashboard through a serial link for the purposes of debugging and external monitoring.


## Technologies Used

- **STM32F103** (ARM Cortex-M3)
- **Arduino Framework** (PlatformIO/Arduino IDE)
- **Pygame** (Python-based serial interface visualization)
- **C++** (BMS Emulator)
- **UART Communication Protocol** (Custom protocol as per documentation)

## Features

- **Modular Firmware Design**: Separate UI modules for speedometer and efficiency meter.
- **Touchscreen Interface**: 2.4” TFT display with touch controls for switching dashboard modes.
- **Real-Time Monitoring**: Displays speed, battery voltage, current, and energy efficiency in real time.
- **Python Serial Monitor**: Lightweight serial monitor for desktop visualization using Pygame.
- **BMS Emulator**: Simulates the battery communication protocol for development without hardware.
- **Documented Communication Protocol**: Reference for UART data format used between BMS and dashboard.


## Notes

- he communication protocol is given by **Prof. Dr. Matthias Deegener (FraUAS)**  and detailed in a document named `Kommunikation_App_BMS_Charger.txt` file.
- Check for valid pin mapping and power configuration on deployment of the hardware.
- Python monitor requires `pygame` and `pyserial`.

## 📦 Installation & Usage

1. Clone the repository
2. Flash dashboard.ino to your STM32F103 board using PlatformIO or Arduino IDE.
3. For Python Serial Monitor
`pip install pygame pyserial`
`python python_serial_monitor.py`.

>  **Note**: There are three distinct dashboard files:
> - `dashboard.ino`: The main dashboard firmware used in production.
> - `dashboard_efficiencymeter.ino`:  for energy efficiency visualization.
> - `dashboard_speedometer.ino`: for showing a speedometer.

##  Further Reading

Refer to the supporting thesis associated with this project for details on system architecture, implementation decisions, and performance analysis. A copy can be requested or accessed via the contacting the author directly.

## Contact

Questions and discussions, as well as requests for thesis access, are welcome.

**Sushil Koirala**  
📧[sushil.koirala@stud.fra-uas.de](mailto:sushil.koirala@stud.fra-uas.de)
