# ATmega32 KS0108 Animation Player
*A lightweight program for rendering smooth animations on KS0108 graphic LCDs using the ATmega32.*

![sonic-ezgif com-resize](https://github.com/user-attachments/assets/eccd0395-fa36-4cbf-b977-c6835f4917ef)


## 🛠 Hardware Setup
### Components
- ATmega32 microcontroller (or compatible AVR).

- KS0108-based 128x64 GLCD (e.g., JHD12864E).

![image](https://github.com/user-attachments/assets/c6bef027-094e-4123-b257-14e3d70595f4)


### Wiring
| ATmega32 pins | KS0108 pins | Connection |
|------------|---------|--------------|
| PORTA0 | DB0 | Data bit 0 |
| PORTA1 | DB1 | Data bit 1 |
| PORTA2 | DB2 | Data bit 2 |
| PORTA3 | DB3 | Data bit 3 |
| PORTA4 | DB4 | Data bit 4 |
| PORTA5 | DB5 | Data bit 5 |
| PORTA6 | DB6 | Data bit 6 |
| PORTA7 | DB7 | Data bit 7 |
| PORTB0 | E | Enable |
| PORTB1 | Read/Write |
| PORTB2 | DI | |
| PORTB3 | ~RST | |
| PORTB4 | CS1 | Chip select 2 |
| PORTB4 | CS2 | Chip select 2 |

## 📝 License
MIT License. See [License](license).

## 🤝 Contribute
If you want to:
- Report bugs via [Issues](https://github.com/RezaGooner/ATmega32-GLCD-KS0108-Animation/issues).

- Submit PR for optimizations/new features.
