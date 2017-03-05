/****************************************************************                                                             
**                       titulo :                              **                                                             
**                       Control Structures_1                  **                 
**                                                             ** 
**    NOM : ABDELLAZIZ AARAB          DATA : 05/03/2017        **                       
****************************************************************/                       
//************************ INCUDE *******************************

//*********************** VARIABLES *****************************

int tempAigua = 99;

//************************* SETUP *******************************
 
void setup()                                                  // run once time

{
  
  Serial.begin(9600);                                         // set up Serial library at 9600 bps

  if ( tempAigua >= 100)                                       // Measures the value of the variable
  {
    Serial.print("Aigua bullint!");     // If the condition is met do print

  }

   else 
 {
    Serial.print("Aigua encara no bull"); // If the condition is met do print
 }

}

//************************* LOOP ********************************

void loop ()

{
 
}


//*********************** FUNCIONS *************************************************
