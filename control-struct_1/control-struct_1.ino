/****************************************************************
**                                                             **                                                             
**                       titulo :                              **                                                             
**                       Control Structures_1                  **                 
**                                                             ** 
**    NOM : ABDELLAZIZ AARAB          DATA : 05/03/2017        **                       
****************************************************************/                       
//************************ INCUDE *******************************

//*********************** VARIABLES *****************************
int tempAigua = 100;

//********** Setup ****************************************************************
 

void setup()                                                  // run once time

{
  
  Serial.begin(9600);                                         // set up Serial library at 9600 bps

  if ( tempAigua > 100)                                       // Measures the value of the variable
  {
    Serial.print("Aigua supera els 100C, esta bullint!");     // If the condition is met do print
  } 

}
//********** Loop ****************************************************************
void loop ()

{
 
}


//*********************** FUNCIONS *************************************************

// Condicionals 
