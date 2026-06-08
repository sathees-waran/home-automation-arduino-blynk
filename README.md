# IoT-Based Home Automation System

A simulated home automation solution built using Arduino Uno (PICSimLab) and 
the Blynk IoT mobile application. The system controls garden lights, temperature, 
and water tank inlet/outlet valves through a smartphone interface.

---

## Project Overview

This project simulates a home automation system where all peripherals are 
virtually interfaced using PICSimLab simulator. The Blynk IoT mobile application 
serves as the control interface, allowing users to monitor and control home devices 
remotely in real time.

---

## Features

- Garden Lights Control — Auto brightness control based on LDR sensor readings
- Temperature Monitoring — Real-time temperature display using LM35 sensor on CLCD
- Heater and Cooler Control — ON/OFF control via Blynk app button widgets
- Threshold Temperature Alert — Auto heater shutoff above 35 degrees Celsius
- Water Tank Monitoring — Real-time water volume display via serial communication
- Inlet and Outlet Valve Control — Manual control via Blynk app
- Auto Inlet Valve — Turns ON automatically when water level drops below 2000 litres
- Blynk Notifications — Alerts sent to mobile app on threshold events

---

## Hardware and Software Used

| Component | Details |
|-----------|---------|
| Microcontroller | Arduino Uno |
| Simulator | PICSimLab |
| IoT Platform | Blynk IoT Mobile Application |
| Temperature Sensor | LM35 |
| Light Sensor | LDR |
| Display | CLCD (Character LCD) |
| Virtual Serial Port | For connecting virtual water tank |
| Communication | Serial Communication (UART) |

---

## System Architecture

Blynk IoT Mobile App
|
Button / Gauge / Terminal Widgets
|
Arduino Uno (PICSimLab Simulation)
|
|           |                 |
Garden      Temperature       Water Tank
Lights      System            (Serial Comm)
(LDR+LED)   (LM35+Heater      (Inlet/Outlet
+Cooler)          Valve Control)

---

## Functional Requirements

### 1. Garden Lights Control
- Input: LDR Sensor
- Process: Read LDR value and vary LED brightness accordingly
- Output: Garden lights brightness adjusted based on sunlight availability

### 2. Temperature Control System
- Input: LM35 Temperature Sensor
- Process: Read temperature and display on CLCD and Blynk Gauge widget
- Output: Temperature displayed on app and CLCD

### 3. Cooler Control
- Input: Button widget on Blynk app
- Output: Cooler turns ON at logic HIGH, OFF at logic LOW

### 4. Heater Control
- Input: Button widget on Blynk app
- Output: Heater turns ON at logic HIGH, OFF at logic LOW

### 5. Threshold Temperature Control
- Input: LM35 Temperature Sensor
- Process: Compare temperature with 35 degrees Celsius
- Output: If temperature exceeds 35 degrees, heater turns OFF automatically
  and notification sent to Blynk app and CLCD

### 6. Water Tank Volume Display
- Input: Serial communication from virtual water tank
- Output: Volume displayed on Gauge widget and CLCD

### 7. Inlet Valve Control
- Input: Button widget on Blynk app
- Output: Inlet valve opens/closes via serial communication command

### 8. Outlet Valve Control
- Input: Button widget on Blynk app
- Output: Outlet valve opens/closes via serial communication command

### 9. Auto Inlet Valve Control
- Input: Serial tank volume data
- Process: Monitor water level continuously
- Output: If volume drops below 2000 litres, inlet valve turns ON
  and notification sent to Blynk app and CLCD

---

## Blynk App Interface

### Tab 1 — Water Tank Control
- Button widget: Inlet valve control
- Button widget: Outlet valve control
- Gauge widget: Water volume display
- Terminal widget: Notifications and alerts

### Tab 2 — Temperature Control
- Button widget: Heater control
- Button widget: Cooler control
- Gauge widget: Temperature display

---

## Threshold Alerts

| Event | Action |
|-------|--------|
| Temperature above 35 degrees | Heater turns OFF, notification sent to app and CLCD |
| Water tank full | Inlet valve turns OFF, notification sent to app and CLCD |
| Water below 2000 litres | Inlet valve turns ON automatically |

---

## Tools Required

| Tool | Purpose | Download |
|------|---------|---------|
| PICSimLab | Arduino Uno simulation | [Download PICSimLab (Windows)](https://sourceforge.net/projects/picsim/) |
| Virtual Serial Port | Connect virtual water tank | [Download Virtual Serial Port (Windows)](https://www.virtual-serial-port.org/) |
| Arduino IDE | Code development and upload | [Download Arduino IDE](https://www.arduino.cc/en/software) |
| Blynk App | IoT control interface | [Download on Play Store](https://play.google.com/store/apps/details?id=cc.blynk) |

> Note: PICSimLab and Virtual Serial Port links are for Windows only.

---

## Setup Instructions

1. Install PICSimLab and load the Arduino Uno simulation
2. Install Virtual Serial Port driver and configure virtual COM ports
3. Open the project code in Arduino IDE
4. Upload the code to the simulated Arduino in PICSimLab
5. Install Blynk app on your Android device
6. Create a new project in Blynk and add the following widgets:
   - Button widgets for Heater, Cooler, Inlet valve, Outlet valve
   - Gauge widgets for Temperature and Water volume
   - Terminal widget for notifications
7. Connect Blynk app to the simulation using your Auth Token
8. Run the simulation and test all features

---

## Conclusion

Using the Blynk IoT application and PICSimLab simulator, this project successfully 
simulates a home automation system where LED resembles garden lights, LM35 resembles 
a temperature sensor, and the serial tank resembles a real water tank. The CLCD 
acts as a dashboard for displaying events, while Blynk widgets provide remote 
control and monitoring capabilities.

---

## Project Details
**Version:** 0.1
**Author:** Satheeswaran M
