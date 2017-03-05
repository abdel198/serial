/**********************************************************************************
**                                                                               **
**                             serial_2_4                                        **
**                                                                               **
**  NOM : ABDELLAZIZ AARAB          DATA :05/03/2017                             **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
//Definir la variable
int drive_gb = 100; //Define 100 GB
int drive_mb; // Esta variable cambia el formato
//******************************** SETUP ******************************************
void setup()             
{
Serial.begin(9600);      // Ejecutar una vez cuando se inicia el arduino
  Serial.print("Your HD is "); // Primer texto en primera línea en el terminal
  Serial.print(drive_gb); // Puntua el número definido antes
  Serial.println(" GB large."); // Terminar la línea

  drive_mb = 1024 * drive_gb; //Definir el tipo de conversor entre GB y Megabytes

  Serial.print("It can store "); //Primer texto en la segunda línea en el terminal
  Serial.print(drive_mb); // El número de multiplicar 1024 * 100
  Serial.println(" Megabytes!"); // Terminar la línea
  //El resultado es: Su HD es 100 GB grande. Puede almacenar -28672 Megabytes!

}

//********************************* LOOP ******************************************
void loop()  //Sin programa en la parte del bucle
{
}
//******************************* FUNCIONS ****************************************
