import serial
import csv

# Configure your port
ser = serial.Serial('COM7', 115200, timeout=1) #usually COM7, double check before running
file_name = "motor_step_data.csv"

print("Waiting for data dump from STM32...")

with open(file_name, "w", newline='') as f:
    writer = csv.writer(f)
    writer.writerow(["Sample", "Current_mA"])
    
    count = 0
    try:
        while True:
            line = ser.readline().decode('utf-8').strip()
            if line:
                writer.writerow([count, line])
                print(f"Captured: {line} mA")
                count += 1
    except KeyboardInterrupt:
        print("Done! Data saved to " + file_name)