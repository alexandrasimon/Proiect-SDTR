// Sistem de masurare prin ultrasunete cu indicatori acustici si 
//transmitere a datelor prin Bluethooth pentru o trecere de pieton


#include <Arduino_FreeRTOS.h>


// Definire modul Bluetooth HC-05
#include <SoftwareSerial.h>
#define BTTX 0 
#define BTRX 1
SoftwareSerial SerialBT(BTTX, BTRX);

#define buzzer 5 


// senzor 1 = senzorul din stanga;
// senzor 2 = senzorul din dreapta;

// Declarare Task-uri
void Task1( void *pvParameters ); 
void Task2( void *pvParameters );
void Task3( void *pvParameters );
void Task4( void *pvParameters );
void Task5( void *pvParameters );


// Definire pini Trigger si Echo, durata si distanta pentru senzorii stanga-dreapta HC-SR04
// Definire sound pentru buzzer

int trigPin2 = 2; 
int echoPin2 = 3;
int trigPin = 8;  
int echoPin = 9;  
int duration, distance, duration2, distance2;
int sound = 0;

void setup() 
{
  Serial.begin(9600);
  delay(500);


// Definire pini pentru ledul verde, respectiv rosu - senzor stanga

  pinMode(12, OUTPUT);  
  pinMode(11, OUTPUT);  
  pinMode(buzzer, OUTPUT);
 
// Definire pini pentru ledul verde, respectiv rosu - senzor dreapta

  pinMode(10, OUTPUT);  
  pinMode(7, OUTPUT); 
  pinMode(buzzer, OUTPUT);
 

  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);
  pinMode(trigPin2, OUTPUT);  
  pinMode(echoPin2, INPUT);
 

// Definire cele 5 task-uri ale proiectului

 xTaskCreate(
    Task1
    ,  "task1"   
    ,  128  
    ,  NULL
    ,  1  
    ,  NULL );

 xTaskCreate(
    Task2
    ,  "task2"   
    ,  128  
    ,  NULL
    ,  1  
    ,  NULL );

 xTaskCreate(
    Task3
    ,  "task3"   
    ,  128  
    ,  NULL
    ,  1  
    ,  NULL );

 xTaskCreate(
    Task4
    ,  "task4"   
    ,  128  
    ,  NULL
    ,  1  
    ,  NULL );

 xTaskCreate(
    Task5
    ,  "task5"   
    ,  128  
    ,  NULL
    ,  1  
    ,  NULL );
vTaskStartScheduler();
}


static void Task1(void* pvParameters) 
{ 
  (void) pvParameters;
  SerialBT.begin(9600);
  while (1)
  {
    digitalWrite(trigPin, HIGH); //triggering de un impuls de 10 microsec;
    delay(10);
    digitalWrite(trigPin, LOW);
       
    duration = pulseIn(echoPin, HIGH);  // funtie pentru urmarirea impulsului;
                                        // HIGH-impuls al cărui durata este timpul de la trimitere la receptia ecoului sau pentru un obiect;
    distance = (duration / 2) / 29.1;   // conversie din timp in distanta(cm);
    
    vTaskDelay(150 / portTICK_PERIOD_MS); // functia specifica o perioada in care procesul este deblocat fata perioada in care este apelata fucntia vTaskDelay();
                                          // perioada de blocare de 150ticks determina deblocarea procesului de 150ticks dupa ce functia este apelata;
  }
}

static void Task2(void* pvParameters2) 
 {
  (void) pvParameters2;
  SerialBT.begin(9600);
  while (1)
  {
    digitalWrite(trigPin2, HIGH); //triggering de un impuls de 10 microsec;
    delay(10);
    digitalWrite(trigPin2, LOW);
       
    duration2 = pulseIn(echoPin2, HIGH); //funtie speciala pentru urmarirea impulsului;
    distance2 = (duration2 / 2) / 29.1; // conversie din timp in distanta(cm);
    
    vTaskDelay(150 / portTICK_PERIOD_MS);
  }
 }

static void Task3(void* pvParameters) 
{
  (void) pvParameters;
  
  while (1)
  {
    if (distance > 25  )  // daca distanta > 25 cm;
    { 
      digitalWrite(12, LOW); // led rosu off;
      digitalWrite(11, LOW);  // led verde off;
      noTone(buzzer);
    }
    else if (distance >=20 && distance >= 25 ) // daca distanta intre 20cm si 25cm -> led VERDE ON si buzzer mt;
    {
      digitalWrite(12, LOW); // led rosu off;
      digitalWrite(11, HIGH); // led verde on;
      noTone(buzzer);
      delay(700);
    }
    else if (distance > 0 && distance > 10 ) // daca distanta < 10 cm -> led ROSU ON si buzzer activ;
    {
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW);
      sound = 200; // Hz note C;
      tone(buzzer, sound, 150);
      delay(200);
    }
    
    vTaskDelay(150 / portTICK_PERIOD_MS);
  }
}

static void Task4(void* pvParameters) 
{
  (void) pvParameters;
  while (1)
  {
    if (distance2 > 25) // daca distanta > 25 cm;
    { 
      digitalWrite(10, LOW);
      digitalWrite(7, LOW);
      noTone(buzzer);
    }
    else if (distance2 >= 20 && distance2 >= 25 )  //daca distanta intre 20 si 25 cm -> led VERDE on si buzzer mut;
    {
      digitalWrite(10, HIGH);
      digitalWrite(7, LOW);
      noTone(buzzer);
      delay(700);
    }
    else if (distance2 > 0 && distance2 <10 ) // daca distanta <10 cm -> led ROSU ON si buzzer activ;
    {
      digitalWrite(10, LOW);
      digitalWrite(7, HIGH);
      sound = 500; // Hz note C;
      tone(buzzer, sound, 150);
      delay(200);
    }

    vTaskDelay(150 / portTICK_PERIOD_MS);
  }
}

static void Task5(void* pvParameters) 
{
  (void) pvParameters;
  SerialBT.begin(9600);
  SerialBT.println("Conexiune Bluetooth efectuata cu succces!")
  while (1)
  {
    SerialBT.print("Distanta masurata in stanga(cm): ");
    SerialBT.print(distance);
    SerialBT.println(" ");
    SerialBT.print("Distanta masurata in dreapta(cm): ");    
    SerialBT.print(distance2); 
    SerialBT.println(" ");
    delay(1000);
    vTaskDelay(150 / portTICK_PERIOD_MS);
  }
}

void loop()
{
}
