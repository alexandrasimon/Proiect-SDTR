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
 # Descriere:
 Senzorul HC-SR04 utilizează un sonar pentru a determina distanța față de un obiect, ca și liliecii. Oferă o detectare excelentă a gamei fără contact,de la 2 cm la 400 cm, cu o acuratețe ridicată și citiri stabile într-un pachet ușor de utilizat,
Funcționarea acestuia nu este afectată de lumina soarelui sau de materialul negru, cum ar fi telemetrele (deși material acustic moale, cum ar fi stofa, poate fi dificil de detectat). Acesta vine complet, cu modul de transmitere și recepție cu ultrasunete

# Caracteristici
-	Alimentare: + 5V DC
-	Curent static: < 2 mA
-	Curent de lucru: 15 mA
- Unghiul efectiv: <15°
-	Distanță: 2 cm - 400 cm
-	Rezoluție: 0,3 cm
-	Unghiul de măsurare: 30 de grade
-	Trigger Input Lățimea impulsului de intrare declanșare: 10uS
-	Dimensiuni: 45 mm x 20 mm x 15 mm

