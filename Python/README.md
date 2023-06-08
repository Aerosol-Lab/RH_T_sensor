# Python
We use Python to read the serial monitor and save the data to files for future post-processing. To run this code you need the following Python libraries:

* serial (Be careful install it like this in Ubuntu "pip install pyserial")
* threading
* tkinter
* numpy
* datetime

Open the file "RH_T_serial_read_write.ipynb" and modify the directory where the output data will be stored. The output data will have the date and time according to the computer clock and the Arduino serial output for each line. The data is saved after an user-defined number of lines (100 by default) into files containing a number and the date/time for post-processing. Also, when running this code, make sure to correctly indicate the COM# where your Arduino board is connected to the computer. After the directory and the COM# have been adapted to your case, you should run the whole script. Then a GUI will pop-up (see the image below) where you should click on "Start monitoring". At the bottom of this GUI, the Serial output and the corresponding date/time will be displayed.

![Screenshot from 2023-06-08 07-29-49](https://github.com/Aerosol-Lab/RH_T_sensor/assets/62391931/85d008f0-60e9-4dfe-8d3b-9bd5a2bc77c8)
