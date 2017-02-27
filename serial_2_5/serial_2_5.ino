/****************************************************************
**                                                             **                                                             
**                       titulo :                              **                                                             
**                       serial_2_4                            **
**                                                             ** 
**    NOM : ABDELLAZIZ AARAB          DATA : 13/02/2017        **                       
****************************************************************/                       
//************************ INCUDE *******************************



//*********************** VARIABLES *****************************
int drive_gb =100;
int drive_mb;
//************************* SETUP *******************************
 void setup()             // Ejecutar una vez, cuando se inicia el boceto
{
  Serial.begin(9600);     // 
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = 1024 * drive_gb;

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}

//************************* LOOP ********************************
void loop()     // we need this to be here even though its empty
{
}


//************************* FUNCIONS ****************************
