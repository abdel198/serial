/****************************************************************
**                                                             **                                                             
**                       titulo :                              **                                                             
**                      serial_2_2                             **
**                                                             ** 
**    NOM : ABDELLAZIZ AARAB          DATA : 06/02/2017        **                       
****************************************************************/                       
//************************ INCUDE *******************************



//*********************** VARIABLES *****************************
int a = 3;
int b = 4;
int h;
//************************* SETUP *******************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.println("Here is some math: ");
  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("h = ");
  h = sqrt(pow(a,2)+ pow(b,2));
  Serial.print(h);
}
//************************* LOOP ********************************
void loop()
{
}


//************************* FUNCIONS ****************************
