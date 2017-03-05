/****************************************************************
**                                                             **                                                             
**                       titulo :                              **                                                             
**                      serial_7                               **
**                                                             ** 
**    NOM : ABDELLAZIZ AARAB          DATA :05/03/2017         **                       
****************************************************************/                       
//************************ INCUDE *******************************

//*********************** VARIABLES *****************************
//Definir la variable
int test = 32767;
//******************************** SETUP ******************************************
void setup()
{
  Serial.begin(9600);      // Ejecutar una cuando se inicia el arduino
  Serial.print("Test value is:"); //Primera línea en la terminal
  Serial.println(test); //Leer la variable en la misma línea
  
  test = test + 1; // Más uno a variable 32767

  Serial.print("Now it is "); //Segunda línea en la terminal
  Serial.println(test); // El número de resultado
  //* 32767 es el último número en una variable de 32 bytes y el número
}

//********************************* LOOP ******************************************
void loop()  //no programa en loop 
{
}
//******************************* FUNCIONS ****************************************

