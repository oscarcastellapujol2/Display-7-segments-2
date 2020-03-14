/**************************************************************
 **
 **                       TITOL:                             **
 **
                    Display de 7 segments                    *
 **
 ** NOM:Òscar Castellà Pujol                 DATA:26/02/2019 **
 *************************************************************/
//*********************  INCLUDES  ****************************


//*********************  VARIABLES ****************************

int i;
int leds [8] = {5, 6, 7, 8, 9, 10, 11, 12};
int t = 500;
int a=5;
int b=6;
int c=7;
int d=8;
int e=9;
int f=10;
int g=11;
int h=12;

        //**********************   SETUP  *****************************

void setup()
{
  for (i = 0; i < 8; i++)
  {
    pinMode (leds[i], OUTPUT);
  }
}


  //************************   LOOP  *****************************
  void loop() 
  {               
    n0();
    delay(t);
    n1();
    delay(t);
    n2();
    delay(t);
    n3();
    delay(t);
    n4();
    delay(t);
    n5();
    delay(t);
    n6();
    delay(t);
    n7();
    delay(t);
    n8();
    delay(t);
    n9();
    delay(t);
  }

  //**********************   FUNCIONS  ***************************

  void n0()
  {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    digitalWrite(h, LOW);
  }

  void n1()
  {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(h, LOW);
  }

  void n2()
  {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    digitalWrite(h, LOW);
  }

  void n3()
  {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    digitalWrite(h, LOW);
  }

  void n4()
  {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(h, LOW);
  }

  void n5()
  { digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(h, LOW);
  }

  void n6()
  {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(h, LOW);
  }

  void n7()
  {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(h, LOW);
  }

  void n8()
  {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(h, LOW);
  }

  void n9()
  {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(h, LOW);
  }
