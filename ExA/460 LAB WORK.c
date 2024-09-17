
/*
 * File:   main.c
 * Author: Author: Samiul Haque, Elias Poitras-Whitecalf, Arsalan Something
 *
 * Created on: Created on September 13, 2024, 12:14 PM
 */

// FBS
#pragma config BWRP = OFF               // Table Write Protect Boot (Boot segment may be written)
#pragma config BSS = OFF                // Boot segment Protect (No boot program Flash segment)

// FGS
#pragma config GWRP = OFF               // General Segment Code Flash Write Protection bit (General segment may be written)
#pragma config GCP = OFF                // General Segment Code Flash Code Protection bit (No protection)

// FOSCSEL
#pragma config FNOSC = FRCDIV           // Oscillator Select (8 MHz FRC oscillator with divide-by-N (FRCDIV))
#pragma config IESO = ON                // Internal External Switch Over bit (Internal External Switchover mode enabled (Two-Speed Start-up enabled))

// FOSC
#pragma config POSCMOD = NONE           // Primary Oscillator Configuration bits (Primary oscillator disabled)
#pragma config OSCIOFNC = ON            // CLKO Enable Configuration bit (CLKO output disabled; pin functions as port I/O)
#pragma config POSCFREQ = HS            // Primary Oscillator Frequency Range Configuration bits (Primary oscillator/external clock input frequency greater than 8 MHz)
#pragma config SOSCSEL = SOSCHP         // SOSC Power Selection Configuration bits (Secondary oscillator configured for high-power operation)
#pragma config FCKSM = CSECMD           // Clock Switching and Monitor Selection (Clock switching is enabled, Fail-Safe Clock Monitor is disabled)

// FWDT
#pragma config WDTPS = PS32768          // Watchdog Timer Postscale Select bits (1:32,768)
#pragma config FWPSA = PR128            // WDT Prescaler (WDT prescaler ratio of 1:128)
#pragma config WINDIS = OFF             // Windowed Watchdog Timer Disable bit (Standard WDT selected; windowed WDT disabled)
#pragma config FWDTEN = OFF             // Watchdog Timer Enable bit (WDT disabled (control is placed on the SWDTEN bit))

// FPOR
#pragma config BOREN = BOR3             // Brown-out Reset Enable bits (Brown-out Reset enabled in hardware; SBOREN bit disabled)
#pragma config PWRTEN = ON              // Power-up Timer Enable bit (PWRT enabled)
#pragma config I2C1SEL = PRI            // Alternate I2C1 Pin Mapping bit (Default location for SCL1/SDA1 pins)
#pragma config BORV = V18               // Brown-out Reset Voltage bits (Brown-out Reset set to lowest voltage (1.8V))
#pragma config MCLRE = ON               // MCLR Pin Enable bit (MCLR pin enabled; RA5 input pin disabled)

// FICD
#pragma config ICS = PGx2               // ICD Pin Placement Select bits (PGC2/PGD2 are used for programming and debugging the device)

// FDS
#pragma config DSWDTPS = DSWDTPSF       // Deep Sleep Watchdog Timer Postscale Select bits (1:2,147,483,648 (25.7 Days))
#pragma config DSWDTOSC = LPRC          // DSWDT Reference Clock Select bit (DSWDT uses LPRC as reference clock)
#pragma config RTCOSC = SOSC            // RTCC Reference Clock Select bit (RTCC uses SOSC as reference clock)
#pragma config DSBOREN = ON             // Deep Sleep Zero-Power BOR Enable bit (Deep Sleep BOR enabled in Deep Sleep)
#pragma config DSWDTEN = ON             // Deep Sleep Watchdog Timer Enable bit (DSWDT enabled)

// #pragma config statements should precede project file includes.




#include <xc.h>
#define PB1 PORTAbits.RA2   // Push button 1
#define PB2 PORTBbits.RB4   // Push button 2
#define PB3 PORTAbits.RA4   // Push button 3

void ctr_func(int inp);
void button_press_check();
int main(void) {
    AD1PCFG = 0xFFFF; /* keep this line as it sets I/O pins that can also be analog to be digital */
    TRISAbits.TRISA2 = 1; //configuring as input for PB1
    TRISBbits.TRISB4 = 1; //RB4 for PB2
    TRISAbits.TRISA4 = 1; //RA4 for PB3
    TRISBbits.TRISB8 = 0; //configuring RB5 as OUTPUT for LED
    
    CNPU2bits.CN30PUE = 1;
    
    CNPU1bits.CN0PUE = 1;
   
    CNPU1bits.CN1PUE = 1;
   
    
    
    
    while(1)
    {
        int pb1 = !PB1;     //mixed up lows, as to not rewrite whole if else mess
        int pb2 = !PB2;
        int pb3 = !PB3;
        
        if((pb1 && pb2) || (pb2 && pb3) || (pb1 && pb3) || (pb1 && pb2 && pb3)){
            LATBbits.LATB8 = 1;
            ctr_func(0);
        }else if(pb1 && (!pb2 && !pb3)){ //pb1 pressed
            ctr_func(1);
            LATBbits.LATB8 = 1;         //on
            ctr_func(1);
            LATBbits.LATB8 = 0;         //off
        }else if (pb2 && (!pb1 && !pb3)){ //pb2 pressed
            ctr_func(2);
            LATBbits.LATB8 = 1;
            ctr_func(2);
            LATBbits.LATB8 = 0;
        }else if (pb3 && (!pb2 && !pb1)){
            ctr_func(3);
            LATBbits.LATB8 = 1;
            ctr_func(3);
            LATBbits.LATB8 = 0;
        }else{ //buttons unpressed
            LATBbits.LATB8 = 0;
        }
        
    }
    
    /** This is usually where you would add run-once code
     * e.g., peripheral initialization. For the first labs
     * you might be fine just having it here. For more complex
     * projects, you might consider having one or more initialize() functions
     */

 
    return 0;
}

button_press_check(){
    while(1)
    {
        int pb1 = !PB1;     //mixed up lows, as to not rewrite whole if else mess
        int pb2 = !PB2;
        int pb3 = !PB3;
        
        if((pb1 && pb2) || (pb2 && pb3) || (pb1 && pb3) || (pb1 && pb2 && pb3)){
            LATBbits.LATB8 = 1;
            ctr_func(0);
        }else if(pb1 && (!pb2 && !pb3)){ //pb1 pressed
            ctr_func(1);
            LATBbits.LATB8 = 1;         //on
            ctr_func(1);
            LATBbits.LATB8 = 0;         //off
        }else if (pb2 && (!pb1 && !pb3)){ //pb2 pressed
            ctr_func(2);
            LATBbits.LATB8 = 1;
            ctr_func(2);
            LATBbits.LATB8 = 0;
        }else if (pb3 && (!pb2 && !pb1)){
            ctr_func(3);
            LATBbits.LATB8 = 1;
            ctr_func(3);
            LATBbits.LATB8 = 0;
        }else{ //buttons unpressed
            LATBbits.LATB8 = 0;
        }
        
    }
}


ctr_func(int inp){
    uint32_t ctr = 0;
    if(inp == 1){
        ctr = 40000; // 0.25 sec
        while(ctr > 0){
            ctr--;
            button_press_check();
        }
    }
        
    else if(inp == 2){
        ctr = 320000; // 2 sec
        while(ctr > 0){
            ctr--;
            button_press_check();
        }
    }
        
    else if(inp == 3){
        ctr = 640000; // 4 sec
        while(ctr > 0){
            ctr--;
            button_press_check();
        }
    }else if (inp == 0){
        ctr = 0; // 0 sec
        while(ctr > 0){
            ctr--;
            button_press_check();
        }
    }
}

//test