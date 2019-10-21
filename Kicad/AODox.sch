EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "AODox"
Date "2019-10-21"
Rev "v1"
Comp "AO Industries"
Comment1 ""
Comment2 "Author: Peter Adriano DeBiase"
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L AODox:ATMEGA32U4 U?
U 1 1 5DAE27ED
P 6000 3900
F 0 "U?" V 5900 3875 60  0000 L CNN
F 1 "ATMEGA32U4" V 6025 3625 60  0000 L CNN
F 2 "" H 6000 3900 60  0000 C CNN
F 3 "" H 6000 3900 60  0000 C CNN
	1    6000 3900
	0    1    1    0   
$EndComp
$Comp
L Connector:USB_C_Receptacle_USB2.0 J?
U 1 1 5DAE85C1
P 6300 950
F 0 "J?" V 6225 1700 50  0000 L CNN
F 1 "USB C Port" V 6350 1700 50  0000 L CNN
F 2 "" H 6450 950 50  0001 C CNN
F 3 "https://www.usb.org/sites/default/files/documents/usb_type-c.zip" H 6450 950 50  0001 C CNN
	1    6300 950 
	0    1    1    0   
$EndComp
$Comp
L keyboard_parts:XTAL_GND X?
U 1 1 5DAEEB3A
P 3850 3900
F 0 "X?" H 3950 3750 60  0000 C CNN
F 1 "XTAL_18p" H 3875 4050 60  0000 C CNN
F 2 "" H 3850 3900 60  0000 C CNN
F 3 "" H 3850 3900 60  0000 C CNN
	1    3850 3900
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C?
U 1 1 5DAEF537
P 4200 4100
F 0 "C?" H 4225 4175 50  0000 L CNN
F 1 "22p" H 4225 4025 50  0000 L CNN
F 2 "" H 4200 4100 50  0001 C CNN
F 3 "~" H 4200 4100 50  0001 C CNN
	1    4200 4100
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C?
U 1 1 5DAF087A
P 3500 4100
F 0 "C?" H 3525 4175 50  0000 L CNN
F 1 "22p" H 3525 4025 50  0000 L CNN
F 2 "" H 3500 4100 50  0001 C CNN
F 3 "~" H 3500 4100 50  0001 C CNN
	1    3500 4100
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5DAF2AC6
P 3850 4350
F 0 "#PWR?" H 3850 4100 50  0001 C CNN
F 1 "GND" H 3855 4177 50  0000 C CNN
F 2 "" H 3850 4350 50  0001 C CNN
F 3 "" H 3850 4350 50  0001 C CNN
	1    3850 4350
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C?
U 1 1 5DAF6260
P 2350 2650
F 0 "C?" H 2375 2725 50  0000 L CNN
F 1 "0.1u" H 2375 2575 50  0000 L CNN
F 2 "" H 2350 2650 50  0001 C CNN
F 3 "~" H 2350 2650 50  0001 C CNN
	1    2350 2650
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C?
U 1 1 5DAF8777
P 2600 2650
F 0 "C?" H 2625 2725 50  0000 L CNN
F 1 "0.1u" H 2625 2575 50  0000 L CNN
F 2 "" H 2600 2650 50  0001 C CNN
F 3 "~" H 2600 2650 50  0001 C CNN
	1    2600 2650
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C?
U 1 1 5DAF8AF0
P 2850 2650
F 0 "C?" H 2875 2725 50  0000 L CNN
F 1 "0.1u" H 2875 2575 50  0000 L CNN
F 2 "" H 2850 2650 50  0001 C CNN
F 3 "~" H 2850 2650 50  0001 C CNN
	1    2850 2650
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C?
U 1 1 5DAF8E8B
P 3100 2650
F 0 "C?" H 3125 2725 50  0000 L CNN
F 1 "0.1u" H 3125 2575 50  0000 L CNN
F 2 "" H 3100 2650 50  0001 C CNN
F 3 "~" H 3100 2650 50  0001 C CNN
	1    3100 2650
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C?
U 1 1 5DAF9226
P 3350 2650
F 0 "C?" H 3375 2725 50  0000 L CNN
F 1 "4.7u" H 3375 2575 50  0000 L CNN
F 2 "" H 3350 2650 50  0001 C CNN
F 3 "~" H 3350 2650 50  0001 C CNN
	1    3350 2650
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5DAF971E
P 2350 2950
F 0 "#PWR?" H 2350 2700 50  0001 C CNN
F 1 "GND" H 2355 2777 50  0000 C CNN
F 2 "" H 2350 2950 50  0001 C CNN
F 3 "" H 2350 2950 50  0001 C CNN
	1    2350 2950
	1    0    0    -1  
$EndComp
Wire Wire Line
	3500 4000 3500 3900
Wire Wire Line
	3500 3900 3550 3900
Wire Wire Line
	4150 3900 4200 3900
Wire Wire Line
	4200 3900 4200 4000
Wire Wire Line
	3500 4200 3500 4250
Wire Wire Line
	4200 4200 4200 4250
Wire Wire Line
	3500 4250 3850 4250
Wire Wire Line
	3850 4100 3850 4250
Connection ~ 3850 4250
Wire Wire Line
	3850 4250 4200 4250
Wire Wire Line
	3850 4350 3850 4250
Wire Wire Line
	4200 3900 4700 3900
Connection ~ 4200 3900
Wire Wire Line
	3500 3900 3500 3650
Wire Wire Line
	3500 3650 4200 3650
Wire Wire Line
	4200 3650 4200 3800
Wire Wire Line
	4200 3800 4700 3800
Connection ~ 3500 3900
Wire Wire Line
	2350 2550 2350 2450
$Comp
L power:VCC #PWR?
U 1 1 5DAFA77E
P 2350 2350
F 0 "#PWR?" H 2350 2200 50  0001 C CNN
F 1 "VCC" H 2367 2523 50  0000 C CNN
F 2 "" H 2350 2350 50  0001 C CNN
F 3 "" H 2350 2350 50  0001 C CNN
	1    2350 2350
	1    0    0    -1  
$EndComp
Wire Wire Line
	2350 2450 2600 2450
Wire Wire Line
	2600 2450 2600 2550
Wire Wire Line
	2600 2450 2850 2450
Wire Wire Line
	2850 2450 2850 2550
Connection ~ 2600 2450
Wire Wire Line
	2850 2450 3100 2450
Wire Wire Line
	3100 2450 3100 2550
Connection ~ 2850 2450
Wire Wire Line
	3100 2450 3350 2450
Wire Wire Line
	3350 2450 3350 2550
Connection ~ 3100 2450
Wire Wire Line
	2350 2950 2350 2850
Wire Wire Line
	2350 2450 2350 2350
Connection ~ 2350 2450
Wire Wire Line
	2350 2850 2600 2850
Wire Wire Line
	2600 2850 2600 2750
Connection ~ 2350 2850
Wire Wire Line
	2350 2850 2350 2750
Connection ~ 2600 2850
Wire Wire Line
	4150 3200 4150 3100
Wire Wire Line
	4150 3500 4150 3400
Wire Wire Line
	4050 3500 4150 3500
Wire Wire Line
	3550 3500 3650 3500
$Comp
L power:VCC #PWR?
U 1 1 5DB0B43C
P 4150 3100
F 0 "#PWR?" H 4150 2950 50  0001 C CNN
F 1 "VCC" H 4167 3273 50  0000 C CNN
F 2 "" H 4150 3100 50  0001 C CNN
F 3 "" H 4150 3100 50  0001 C CNN
	1    4150 3100
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5DB0AD48
P 3550 3500
F 0 "#PWR?" H 3550 3250 50  0001 C CNN
F 1 "GND" V 3555 3372 50  0000 R CNN
F 2 "" H 3550 3500 50  0001 C CNN
F 3 "" H 3550 3500 50  0001 C CNN
	1    3550 3500
	0    1    1    0   
$EndComp
$Comp
L Switch:SW_Push SW?
U 1 1 5DB09B68
P 3850 3500
F 0 "SW?" H 3850 3650 50  0000 C CNN
F 1 "SW_Push" H 3850 3450 50  0000 C CNN
F 2 "" H 3850 3700 50  0001 C CNN
F 3 "~" H 3850 3700 50  0001 C CNN
	1    3850 3500
	1    0    0    -1  
$EndComp
Connection ~ 3100 2850
Wire Wire Line
	3350 2850 3350 2750
Wire Wire Line
	3100 2850 3350 2850
Connection ~ 2850 2850
Wire Wire Line
	3100 2850 3100 2750
Wire Wire Line
	2850 2850 3100 2850
Wire Wire Line
	2850 2850 2850 2750
Wire Wire Line
	2600 2850 2850 2850
Connection ~ 4150 3500
$Comp
L Device:R_Small R?
U 1 1 5DB0A7CA
P 4150 3300
F 0 "R?" H 4209 3346 50  0000 L CNN
F 1 "10k" H 4209 3255 50  0000 L CNN
F 2 "" H 4150 3300 50  0001 C CNN
F 3 "~" H 4150 3300 50  0001 C CNN
	1    4150 3300
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small R?
U 1 1 5DB181EB
P 6500 5400
F 0 "R?" H 6559 5446 50  0000 L CNN
F 1 "10k" H 6559 5355 50  0000 L CNN
F 2 "" H 6500 5400 50  0001 C CNN
F 3 "~" H 6500 5400 50  0001 C CNN
	1    6500 5400
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5DB19020
P 6500 5600
F 0 "#PWR?" H 6500 5350 50  0001 C CNN
F 1 "GND" H 6505 5427 50  0000 C CNN
F 2 "" H 6500 5600 50  0001 C CNN
F 3 "" H 6500 5600 50  0001 C CNN
	1    6500 5600
	1    0    0    -1  
$EndComp
Wire Wire Line
	6500 5200 6500 5300
Wire Wire Line
	6500 5500 6500 5600
Wire Wire Line
	6100 1550 6200 1550
Wire Wire Line
	6300 1550 6400 1550
$Comp
L power:GND #PWR?
U 1 1 5DB1C0A7
P 5300 950
F 0 "#PWR?" H 5300 700 50  0001 C CNN
F 1 "GND" H 5305 777 50  0000 C CNN
F 2 "" H 5300 950 50  0001 C CNN
F 3 "" H 5300 950 50  0001 C CNN
	1    5300 950 
	1    0    0    -1  
$EndComp
Wire Wire Line
	5300 950  5400 950 
NoConn ~ 5400 650 
NoConn ~ 5700 1550
NoConn ~ 5800 1550
$Comp
L Device:R R?
U 1 1 5DB2D6C5
P 6600 1800
F 0 "R?" H 6450 1800 50  0000 L CNN
F 1 "5.1k" V 6600 1700 50  0000 L CNN
F 2 "" V 6530 1800 50  0001 C CNN
F 3 "~" H 6600 1800 50  0001 C CNN
	1    6600 1800
	1    0    0    -1  
$EndComp
$Comp
L Device:R R?
U 1 1 5DB2E11A
P 6700 1800
F 0 "R?" H 6750 1800 50  0000 L CNN
F 1 "5.1k" V 6700 1700 50  0000 L CNN
F 2 "" V 6630 1800 50  0001 C CNN
F 3 "~" H 6700 1800 50  0001 C CNN
	1    6700 1800
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5DB2E530
P 6650 2050
F 0 "#PWR?" H 6650 1800 50  0001 C CNN
F 1 "GND" H 6655 1877 50  0000 C CNN
F 2 "" H 6650 2050 50  0001 C CNN
F 3 "" H 6650 2050 50  0001 C CNN
	1    6650 2050
	1    0    0    -1  
$EndComp
Wire Wire Line
	6600 1950 6600 2000
Wire Wire Line
	6600 2000 6650 2000
Wire Wire Line
	6650 2000 6650 2050
Wire Wire Line
	6650 2000 6700 2000
Wire Wire Line
	6700 2000 6700 1950
Connection ~ 6650 2000
Wire Wire Line
	6600 1550 6600 1650
Wire Wire Line
	6700 1650 6700 1550
$Comp
L Device:R R?
U 1 1 5DB31C0A
P 6200 2050
F 0 "R?" H 6050 2050 50  0000 L CNN
F 1 "22" V 6200 2000 50  0000 L CNN
F 2 "" V 6130 2050 50  0001 C CNN
F 3 "~" H 6200 2050 50  0001 C CNN
	1    6200 2050
	1    0    0    -1  
$EndComp
$Comp
L Device:R R?
U 1 1 5DB32FF9
P 6300 2050
F 0 "R?" H 6350 2050 50  0000 L CNN
F 1 "22" V 6300 2000 50  0000 L CNN
F 2 "" V 6230 2050 50  0001 C CNN
F 3 "~" H 6300 2050 50  0001 C CNN
	1    6300 2050
	1    0    0    -1  
$EndComp
Wire Wire Line
	6300 2600 6300 2200
Wire Wire Line
	6300 1900 6300 1550
Connection ~ 6300 1550
Wire Wire Line
	6200 1900 6200 1550
Connection ~ 6200 1550
Wire Wire Line
	6200 2200 6200 2600
$Comp
L power:VCC #PWR?
U 1 1 5DB3945C
P 7200 1550
F 0 "#PWR?" H 7200 1400 50  0001 C CNN
F 1 "VCC" H 7217 1723 50  0000 C CNN
F 2 "" H 7200 1550 50  0001 C CNN
F 3 "" H 7200 1550 50  0001 C CNN
	1    7200 1550
	1    0    0    -1  
$EndComp
Wire Wire Line
	6900 1550 7200 1550
Wire Wire Line
	6400 2600 6400 2450
Wire Wire Line
	6400 2450 6900 2450
Wire Wire Line
	6900 2450 6900 1550
Connection ~ 6900 1550
$Comp
L Device:C_Small C?
U 1 1 5DB3C818
P 6000 2400
F 0 "C?" H 5900 2475 50  0000 L CNN
F 1 "1u" H 5875 2325 50  0000 L CNN
F 2 "" H 6000 2400 50  0001 C CNN
F 3 "~" H 6000 2400 50  0001 C CNN
	1    6000 2400
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5DB3D6B5
P 6000 2200
F 0 "#PWR?" H 6000 1950 50  0001 C CNN
F 1 "GND" V 6005 2072 50  0000 R CNN
F 2 "" H 6000 2200 50  0001 C CNN
F 3 "" H 6000 2200 50  0001 C CNN
	1    6000 2200
	0    1    1    0   
$EndComp
Wire Wire Line
	6000 2600 6000 2500
Wire Wire Line
	6000 2300 6000 2200
Text Label 7300 3400 0    50   ~ 0
VCC
Text Label 7300 3500 0    50   ~ 0
GND
Text Label 7300 4400 0    50   ~ 0
VCC
Text Label 7300 4300 0    50   ~ 0
GND
Text Label 5600 5200 3    50   ~ 0
VCC
Text Label 5500 5200 3    50   ~ 0
GND
Text Label 4700 3600 2    50   ~ 0
VCC
Text Label 4700 3700 2    50   ~ 0
GND
Text Label 6100 2600 1    50   ~ 0
GND
Wire Wire Line
	4150 3500 4450 3500
$Comp
L Connector:Conn_01x06_Male J?
U 1 1 5DB41B5C
P 4650 1800
F 0 "J?" V 4725 1425 50  0000 R CNN
F 1 "MCU Prog" V 4575 1950 50  0000 R CNN
F 2 "" H 4650 1800 50  0001 C CNN
F 3 "~" H 4650 1800 50  0001 C CNN
	1    4650 1800
	0    -1   1    0   
$EndComp
Wire Wire Line
	4450 2000 4450 3500
Connection ~ 4450 3500
Wire Wire Line
	4450 3500 4700 3500
Wire Wire Line
	5500 2600 4550 2600
Wire Wire Line
	4550 2600 4550 2000
Wire Wire Line
	5600 2600 5600 2500
Wire Wire Line
	5600 2500 4650 2500
Wire Wire Line
	4650 2500 4650 2000
Wire Wire Line
	5700 2600 5700 2400
Wire Wire Line
	5700 2400 4750 2400
Wire Wire Line
	4750 2400 4750 2000
Text Label 4850 2000 3    50   ~ 0
VCC
Text Label 4950 2000 3    50   ~ 0
GND
$EndSCHEMATC
