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
int a = 5;
int b = 6;
int c = 7;
int d = 8;
int e = 9;
int f = 10;
int g = 11;
int h = 12;

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

void display (int ad, int bd, int cd, int dd, int ed, int fd, int gd, int hd)
{
  digitalWrite(a, ad);
  digitalWrite(b, bd);
  digitalWrite(c, cd);
  digitalWrite(d, dd);
  digitalWrite(e, ed);
  digitalWrite(f, fd);
  digitalWrite(g, gd);
  digitalWrite(h, hd);
}
void n0()
{
  display (1, 1, 1, 1, 1, 1, 0, 0);
}

void n1()
{
  display (0, 1, 1, 0, 0, 0, 0, 0);
}

void n2()
{
  display (1, 1, 0, 1, 1, 0, 1, 0);
}

void n3()
{
  display (1, 1, 1, 1, 0, 0, 1, 0);
}

void n4()
{
  display (0, 1, 1, 0, 0, 1, 1, 0);
}

void n5()
{
  display (1, 0, 1, 1, 0, 1, 1, 0);
}

void n6()
{
  display (0, 0, 1, 1, 1, 1, 1, 0);
}

void n7()
{
  display (1, 1, 1, 0, 0, 0, 0, 0);
}

void n8()
{
  display (1, 1, 1, 1, 1, 1, 1, 0);
}

void n9()
{
  display (1, 1, 1, 0, 0, 1, 1, 0);
}
void punt()
{
  display (0, 0, 0, 0, 0, 0, 0, 1);
}
