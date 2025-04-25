# Epolo-Dashboard
This repository contains the complete implementation of a real-time embedded dashboard system designed for a converted electric Volkswagen Polo (E-Polo). The dashboard is built on an STM32F103 (ARM Cortex-M3) microcontroller and uses a 2.4” TFT touchscreen display for real-time monitoring of electric vehicle parameters.
This project was developed as part of a master’s thesis in the M.Sc. High Integrity Systems program at Frankfurt University of Applied Sciences.

The dashboard system replaces outdated analog gauges in internal combustion engine (ICE) vehicles converted to electric power. It features touchscreen-based user interaction, real-time data display, and integration with a simulated or live BMS (Battery Management System). An optional desktop GUI developed in Python mirrors the dashboard via serial communication for debugging and external monitoring.


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

- The communication protocol was provided by **Prof. Dr. Matthias Deegener (FraUAS)** and is documented in the `Kommunikation_App_BMS_Charger.txt` file.
- Ensure correct pin mapping and power configuration when deploying to hardware.
- Python monitor requires `pygame` and `pyserial`.

## 📦 Installation & Usage

1. Clone the repository
2. Flash dashboard.ino to your STM32F103 board using PlatformIO or Arduino IDE.
3. For Python Serial Monitor
`pip install pygame pyserial`
`python python_serial_monitor.py`.

>  **Note**: There are three distinct dashboard files:
> - `dashboard.ino`: Main dashboard firmware used in production.
> - `dashboard_efficiencymeter.ino`: Used for energy efficiency visualization.
> - `dashboard_speedometer.ino`: Displays speedometer.

## 📘 Further Reading

For detailed system architecture, implementation decisions, and performance analysis, please refer to the **supporting thesis** associated with this project. A copy can be requested or accessed via the  contacting the author directly.

## 📩 Contact

For questions, collaboration, or thesis access, feel free to contact:

**Sushil Koirala**  
📧 [sushil.koirala@stud.fra-uas.de](mailto:sushil.koirala@stud.fra-uas.de)
