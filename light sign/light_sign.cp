#line 1 "C:/Users/mosma/Desktop/New folder/pic/light sign/light_sign.c"
void seven_seg_c(int i);
void seven_seg_d(int i);
void main() {
 TRISB = 0;
 TRISC = 0;
 TRISD = 0;
 PORTB = 0;
 PORTC = 0;
 PORTD = 0;
 while(1){
 int i,j;

 for(i = 3;i>=0;i--){
 seven_seg_c(i);
 PORTB = 0b00000001;
 for(j = 9;j >= 0;j--){
 seven_seg_d(j);
 Delay_ms(50);
 }
 }


 for(i = 0;i>=0;i--){
 seven_seg_c(i);
 PORTB = 0b00000010;
 for(j = 5;j >= 0;j--){
 seven_seg_d(j);
 Delay_ms(50);
 }
 }

 for(i = 1;i>=0;i--){
 seven_seg_c(i);
 PORTB = 0b00000100;
 for(j = 9;j >= 0;j--){
 seven_seg_d(j);
 Delay_ms(50);
 }
 }
 }
}

void seven_seg_c (int i){

if (i == 0){
 portc = 0b01000000;
}

if (i == 1){
 portc = 0b01111001;
}

else if (i == 2){
 PORTc = 0b00100100;
}

else if (i == 3){
 PORTc = 0b00110000;
}

else if (i == 4){
 PORTc = 0b00011001;
}

else if (i == 5){
 PORTc = 0b00010010;
}

else if (i == 6){
 PORTc = 0b00000010;
}

else if (i == 7){
 PORTc = 0b01111000;
}

else if (i == 8){
 PORTc = 0b00000000;
}

else if (i == 9){
 PORTc = 0b00010000;
}
}
void seven_seg_d (int i){

if (i == 0){
 portd = 0b01000000;
}

if (i == 1){
 portd = 0b01111001;
}

else if (i == 2){
 PORTD = 0b00100100;
}

else if (i == 3){
 PORTD = 0b00110000;
}

else if (i == 4){
 PORTD = 0b00011001;
}

else if (i == 5){
 PORTD = 0b00010010;
}

else if (i == 6){
 PORTD = 0b00000010;
}

else if (i == 7){
 PORTD = 0b01111000;
}

else if (i == 8){
 PORTD = 0b00000000;
}

else if (i == 9){
 PORTD = 0b00010000;
}
}
