/****************************************************************
**                                                             **                                                             
**                       titulo :                              **                                                             
**                       serial_9                              **
**                                                             ** 
**    NOM : ABDELLAZIZ AARAB          DATA : 05/03/2017        **                       
****************************************************************/                       
//************************ INCUDE *******************************



//*********************** VARIABLES *****************************
float a = 3;
float b = 2;
float d;
//************************* SETUP *******************************
void setup()               // run once, when the sketch starts
{
  Serial.begin(9600);      // set up Serial library at 9600 bps
 Serial.println("Here is division: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);

  d = a / b;
 
  Serial.print("a / b = ");
  Serial.println(d);

}
//************************* LOOP ********************************
void loop()    // we need this to be here even though its empty
{
}
//************************* FUNCIONS ****************************

