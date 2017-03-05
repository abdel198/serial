/****************************************************************
**                                                             **                                                             
**                       titulo :                              **                                                             
**                       serial_2_4                            **
**                                                             ** 
**    NOM : ABDELLAZIZ AARAB          DATA : 05/03/2017        **                       
****************************************************************/                       
//************************ INCUDE *******************************
int drive_gb = 100;
long drive_mb;     // we changed the type from "int" to "long"

//*********************** VARIABLES *****************************
//Definir la variable
long drive_gb = 100; //Define 100 GB
long drive_mb; // Cambiar int por mucho tiempo para obtener más números
//************************* SETUP *******************************
void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);    // set up Serial library at 9600 bps

  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = 1024 * drive_gb;

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}

//************************* LOOP ********************************
void loop()   // we need this to be here even though its empty
{
}

//************************* FUNCIONS ****************************
