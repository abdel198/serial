/**********************************************************************************
**                            TITULO :                                           **
**                             serial_4                                          **
**                                                                               **
** ABDELLAZIZ AARAB                                    02/02/2017                **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************

//******************************** SETUP ******************************************
void setup()
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.println("Escoge un numero de la operacion que quieres realizar?");
  Serial.println("   1.  Comprobar numero de tarjeta de credito");
  Serial.println("   2.  Comprobar numero de cuenta bancaria");
  Serial.println("   3.  Buscar un digito perdido de tarjeta de credito");
  // prints explanatory text in new lines
}

//********************************* LOOP ******************************************
void loop(){

}

//******************************* FUNCIONS ****************************************
