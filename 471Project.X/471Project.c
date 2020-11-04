/* 
 * File:   471Project.c
 * Author: Austin Sypolt and Casey Sobecks
 *
 * <=                             PIC18F4331
 * <=                   +------------:_:------------+
 * <=     PK3_VPP ->  1 : RE3/MCLR/VPP      PGD/RB7 : 40 <> PK3_PGD
 * <=    T Singal <>  2 : RA0/AN0           PGC/RB6 : 39 <> PK3_PGC
 * <=             <>  3 : RA1/AN1           PGM/RB5 : 38 <> 
 * <=             <>  4 : RA2/AN2               RB4 : 37 <> 
 * <=             <>  5 : RA3/AN3               RB3 : 36 <> 
 * <=             <>  6 : RA4/AN4               RB2 : 35 <> 
 * <=             <>  7 : RA5/AN5               RB1 : 34 <> 
 * <=             <>  8 : RE0/AN6               RB0 : 33 <> 
 * <=             <>  9 : RE1/AN7               VDD : 32 <- 5v0
 * <=             <> 10 : RE2/AN8               VSS : 31 <- GND
 * <=         5v0 -> 11 : VDD                   RD7 : 30 -> LCD D7
 * <=         GND -> 12 : VSS                   RD6 : 29 -> LCD D6
 * <=             <> 13 : RA7/OSC1              RD5 : 28 -> LCD D5
 * <=             <> 14 : RA6/OSC2              RD4 : 27 -> LCD D4
 * <=             <> 15 : RC0/SOSCO          RX/RC7 : 26 <> 
 * <=             <> 16 : RC1/SOSCI          TX/RC6 : 25 <> 
 * <=             <> 17 : RC2/CCP1              RC5 : 24 <> 
 * <=             <> 18 : RC3/INT0              RC4 : 23 <> 
 * <=             <> 19 : RD0               SCK/RD3 : 22 -> LCD E
 * <=             <> 20 : RD1/SDO           SDI/RD2 : 21 <> LCD RW
 * <=                   +---------------------------:
 * <=                            DIP-40
 * <= 
 * <= Description:
 */

#include "ConfigurationBits.h"
#define _XTAL_FREQ 4000000  /* <= Default frequency for internal oscillator */

#define RS RD2
#define EN RD3
#define D4 RD4
#define D5 RD5
#define D6 RD6
#define D7 RD7

#define Data_Dir TRISBbits.RB0
#define Data_Out LATB0
#define Data_In PORTBbits.RB0 

#include <xc.h>
#include <stdio.h>          /* <= Standard C library function not used this link should be removed */
#include <stdlib.h>         /* <= Standard C library function not used this link should be removed */
#include "lcd.h"
#include "TempSensor.h"



int main() {

    while(1)
    {
        
    }
    return (EXIT_SUCCESS);
}

