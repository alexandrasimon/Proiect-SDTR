# Proiect-SDTR
Sistem de măsurare ultrasunete cu indicatori acustici și transmitere de date prin Bluethooth pentru o trecere de pietoni

# Descriere proiect:
Sistem de măsurare ultrasunete cu indicatori acustici și transmitere de date prin Bluethooth pentru o trecere de pietoni indeplineste urmatoarele functii:
La anumite distante unde este intampinat un obstacol/pieton se va aprinde un LED, pentru aceasta se fac anumite teste.

# Teste/Task-uri parcurse:
Se vor pune 2 senzori STANGA-DREAPTA, acestia reprezentand o parte si a alta a unei treceri.
Daca obstacolul/pietonul se afla la o distanta intre 0-20 cm se va aprinde LED ROSU si se va activa BUZZER-ul care va emite sunete. – Acesta inseamna ca cineva este foarte aproape de trecere si va transmite distanta la care se afla (regula valabila pentru ambii senzori).
Daca obstacolul/pietonul se afla la o distanta mai mare de 20 cm  sim ai mica de 40 cm se va aprinde LED VERDE si BUZZER mut. – Acesta inseamna ca cineva se afla in “zona verde” de trecere, adica nu este suficient de aproape si nu se stie daca va traversa si va transmite distanta la care se afla (regula valabila pentru ambii senzori).
Daca obstacolul/pietonul se afla la o distanta mai mare de 40 cm ambele LED-ui vor fi STINSE si BUZZER mut. – Acesta inseamna ca nu este  cineva care se aproroie de a traversa trecea si va transmite distanta la care se afla doar pentru monitorizare (regula valabila pentru ambii senzori) .


# In acest proiect se regasesc urmatoarele componente :
-	Placa Arduino Uno 
- Senzorii HC-SR04
- 4 led-uri (2 rosii, 2 verzi)
-	Buzzer
-	4 rezistente (1K)
-Modul bluetooth HC-05

 # 1.	Senzorul HC-SR04
  Descriere:
 Senzorul HC-SR04 utilizează un sonar pentru a determina distanța față de un obiect, ca și liliecii. Oferă o detectare excelentă a gamei fără contact,de la 2 cm la 400 cm, cu o acuratețe ridicată și citiri stabile într-un pachet ușor de utilizat,
Funcționarea acestuia nu este afectată de lumina soarelui sau de materialul negru, cum ar fi telemetrele (deși material acustic moale, cum ar fi stofa, poate fi dificil de detectat). Acesta vine complet, cu modul de transmitere și recepție cu ultrasunete

 Caracteristici
-	Alimentare: + 5V DC
-	Curent static: < 2 mA
-	Curent de lucru: 15 mA
- Unghiul efectiv: <15°
-	Distanță: 2 cm - 400 cm
-	Rezoluție: 0,3 cm
-	Unghiul de măsurare: 30 de grade
-	Trigger Input Lățimea impulsului de intrare declanșare: 10uS
-	Dimensiuni: 45 mm x 20 mm x 15 mm

# 2.	Modul Bluetooth HC-05
Descriere:
HC-05 este un modul ușor de folosit în proiectele cu Arduino. Configurarea lui implicită este în mod Slave, cu numele HC-05, și setările pentru interfața serială compatibile cu setările implicite ale Arduino (Baud Rate 9600, fără paritate, 8 biți de date, 1 bit de stop). Modulul poate fi comercializat în variantele cu 4 pini (VCC, GND, RX și TX), sau în varianta cu 6 pini, care permite configurarea și verificarea stării prin program.
Caracteristici
- Tensiune de alimentare: 3.6 - 6V;
-	Curent consumat: maxim 30mA;
-	Pinii de I/O sunt compatibili pentru 3.3V;
-	Comunică pe serială UART;
-	Baudrate: 9600 - 460800 bps;
-	Distanță de transmisie până la 10m;
-	Putere de transmisie: +4dBm;
-	Senzitivitate recepție: -80dBm.
Pini
-	EN (Uneori cu numele KEY): Dacă e conectat la nivel logic 1 înainte de a se alimenta modulul, acesta intră în modul de configurare (LED-ul clipește lent, o dată la 2 secunde). În acest mod modulul așteaptă comenzi de tip AT prin interfața serială, la un Baud Rate de 38400 biți pe secundă. Pentru operare normală, lăsați acest pin neconectat!
-	VCC: +5v – pin de alimentare, se conectează la Arduino la un pin de 5 V. 
-	GND: pin de masă, se conectează la un pin GND al Arduino. 
-	TXD: Pin de transmisie al interfeței seriale, se conectează la un RXn al Arduino (de exemplu la RX1, pentru lucrarea de față). 
-	RXD: Pin de recepție al interfeței seriale, se conectează la un TXn al Arduino (de exemplu la TX1, pentru lucrarea de față).
- STATE: spune dacă este conectat sau nu. Acest pin este conectat la LED-ul de pe modul. În funcție de modul în care clipește acest LED, modulul este în una din cele trei stări: a) Clipire odată la 2 secunde: Modulul este în modul de configurare (de comandă). 
b) Clipire rapidă: Modulul așteaptă conexiuni – acest mod ar trebui să fie activ la pornirea sistemului.
c)  Clipire de două ori în 1 secundă: Conexiune stabilită, se pot transmite și recepționa date.

# 3.	Placa de dezvoltare Arduino Uno
Descriere 
Placa Arduino UNO  este cea mai bună metodă pentru a începe cu electronica și codarea. Placa UNO este cea mai utilizată din întreaga familie Arduino. Arduino Uno este o placă de dezvoltare bazat pe microcontrolerul ATmega328P. Are 14 pini digitali I / O, 6 intrări analogice, un cristal de cuarț de 16 MHz, o conexiune USB, o mufă de alimentare, un set de pini ICSP și un buton de resetare. Conține tot ce este necesar pentru a susține microcontrolerul, pur și simplu conectați-l la un computer cu un cablu USB sau alimentați-l cu un adaptor AC-DC sau cu o baterie
Caracteristici
-	Microcontroller Atmel ATmega328P
-	Tensiune de lucru de 5V
-	Tensiune maximă de alimentare de la 6V la 20V
-	14 x Pini digitali I / O
-	Memorie Flash:16KB
- Poate fi alimentat prin conexiunea USB sau cu o sursă externă de alimentare
- Dimensiune: 68.6mm x 53.4mm
-	Greutate: 25gr




