/*******************************************************
This program was created by the
CodeWizardAVR V3.12 Advanced
Automatic Program Generator
© Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 30/04/2025
Author  : 
Company : 
Comments: 


Chip type               : ATmega32
Program type            : Application
AVR Core Clock frequency: 8.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 512
*******************************************************/

#include <mega32.h>
#include <glcd.h>
#include <delay.h>
#include "frames/f1/f1.c"
#include "frames/f2/f2.c"
#include "frames/f3/f3.c"
#include "frames/f4/f4.c"
#include "frames/f5/f5.c"
#include "frames/f6/f6.c"
#include "frames/f7/f7.c"
#include "frames/f8/f8.c"
#include "frames/f9/f9.c"
#include "frames/f10/f10.c"
#include "frames/f11/f11.c"
#include "frames/f12/f12.c"
#include <font5x7.h>

void main(void)
{
    GLCDINIT_t glcd_init_data;

    // Port A initialization for GLCD data bus
    DDRA = 0xFF;
    PORTA = 0x00;

    // Port B initialization for GLCD control signals
    DDRB = (1<<DDB0) | (1<<DDB1) | (1<<DDB2) | (1<<DDB3) | (1<<DDB4) | (1<<DDB5);
    PORTB = 0x00;

    // Specify the current font for displaying text
    glcd_init_data.font = font5x7;
    glcd_init_data.readxmem = NULL;
    glcd_init_data.writexmem = NULL;

    glcd_init(&glcd_init_data);

    while (1)
    {      
        //glcd_clear();
        glcd_putimagef(0, 0, f1, GLCD_PUTCOPY);
        delay_ms(1);
        
        //glcd_clear();
        glcd_putimagef(0, 0, f2, GLCD_PUTCOPY);
        delay_ms(1);
        
        //glcd_clear();
        glcd_putimagef(0, 0, f3, GLCD_PUTCOPY);
        delay_ms(1);
        
        //glcd_clear();
        glcd_putimagef(0, 0, f4, GLCD_PUTCOPY);
        delay_ms(1);
        
        //glcd_clear();
        glcd_putimagef(0, 0, f5, GLCD_PUTCOPY);
        delay_ms(1);
        
        //glcd_clear();
        glcd_putimagef(0, 0, f6, GLCD_PUTCOPY);
        delay_ms(1);
        
        //glcd_clear();
        glcd_putimagef(0, 0, f7, GLCD_PUTCOPY);
        delay_ms(1);
        
        //glcd_clear();
        glcd_putimagef(0, 0, f8, GLCD_PUTCOPY);
        delay_ms(1);
        
        //glcd_clear();
        glcd_putimagef(0, 0, f9, GLCD_PUTCOPY);
        delay_ms(1);
        
        //glcd_clear();
        glcd_putimagef(0, 0, f10, GLCD_PUTCOPY);
        delay_ms(1);
        
        //glcd_clear();
        glcd_putimagef(0, 0, f11, GLCD_PUTCOPY);
        delay_ms(1);
        
        //glcd_clear();
        glcd_putimagef(0, 0, f12, GLCD_PUTCOPY);
        delay_ms(1);
    }
}