/****************************************************************
**                                                             **                                                             
**                       titulo :                              **                                                             
**                       nombre del programa                   **
**                                                             ** 
**    NOM : ABDELLAZIZ AARAB          DATA : xx/xx/2017        **                       
****************************************************************/                       
//************************ INCUDE *******************************



//*********************** VARIABLES *****************************

int thisByte = 33; 

//************************* SETUP *******************************
 
void setup()
{
  Serial.begin(9600);  //run one when the arduino starts
  Serial.println("ASCII Table ~ Character Map"); //first line on terminal
}

//************************* LOOP ********************************

void loop()
{
  
  Serial.write(thisByte); // to write the variable in a serial form

  // get the number in every form in the same line

  Serial.print(", dec: ");
  Serial.print(thisByte);
  Serial.print(", hex: ");
  Serial.print(thisByte, HEX);
  Serial.print(", oct: ");
  Serial.print(thisByte, OCT);
  Serial.print(", bin: ");
  Serial.println(thisByte, BIN);

  // if the variable is 126 stop when its true

  if (thisByte == 126) // if printed last visible character '~'
  {
    while (true)
    {
    }

    // to plus one

  }
  
  thisByte++;     // go on to the next character

}


//******************************* FUNCIONS ****************************************

