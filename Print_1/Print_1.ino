/****************************************************************
**                                                             **                                                             
**                       titulo :                              **                                                             
**                       Print_1                               **
**                                                             ** 
**    NOM : ABDELLAZIZ AARAB          DATA : 05/03/2017        **                       
****************************************************************/                       
//************************ INCUDE *******************************


//*********************** VARIABLES *****************************

int num = 64;

//************************* SETUP *******************************
 
void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);    // set up Serial library at 9600 bps

  Serial.println("Different formats for the same number:");

  Serial.write(num);
  Serial.println();
  
  Serial.println(num);
  Serial.println(num,DEC);
  
  Serial.println(num,BIN);
  
  Serial.println(num,HEX);
  
  Serial.println(num,OCT);
}

//************************* LOOP ********************************

void loop()   // we need this to be here even though its empty
{
}
//************************* FUNCIONS ****************************
