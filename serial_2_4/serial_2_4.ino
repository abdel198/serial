/**********************************************************************************
**                                                                               **
**                             serial_2_4                                        **
**                                                                               **
**  NOM : ABDELLAZIZ AARAB          DATA :05/03/2017                             **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
//Definir la variable
int drive_gb = 100; //define 100 GB
int drive_mb; // Esta variable cambia el formato
//******************************** SETUP ******************************************
void setup()             
{
Serial.begin(9600);      // jecutar una cuando se inicia el arduino
  Serial.print("Your HD is "); // Primer texto en primera línea en el terminal
  Serial.print(drive_gb); // Puntua el número definido antes
  Serial.println(" GB large."); // Terminar la línea

  drive_mb = 1024 * drive_gb; //define the conversor type between GB and Megabytes

  Serial.print("It can store "); //first text on second line in terminal
  Serial.print(drive_mb); // the number of multiply 1024*100
  Serial.println(" Megabytes!"); // to end the line
  // The result is : Your HD is 100 GB large.It can store -28672 Megabytes!

}

//********************************* LOOP ******************************************
void loop()  //no program on loop part
{
}
//******************************* FUNCIONS ****************************************
