String comdata="";
void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);

}

void loop() {
  while(Serial.available()>0)
  {
    comdata+=char(Serial.read());
    delay(2);
  }
  for(int i=0;i<comdata.length();i++)
  {
    switch(comdata[i])
    {
      case 'a':dot();dash();break;
      case 'A':dot();dash();break;
      case 'b':dash();dot();dot();dot();break;
      case 'B':dash();dot();dot();dot();break;
      case 'c':dash();dot();dash();dot();break;
      case 'C':dash();dot();dash();dot();break;
      case 'd':dash();dot();dot();break;
      case 'D':dash();dot();dot();break;
      case 'e':dot();break;
      case 'E':dot();break;
      case 'f':dot();dot();dash();dot();break;
      case 'F':dot();dot();dash();dot();break;
      case 'g':dash();dash();dot();break;
      case 'G':dash();dash();dot();break;
      case 'h':dot();dot();dot();dot();dot();break;
      case 'H':dot();dot();dot();dot();dot();break;
      case 'i':dot();dot();break;
      case 'I':dot();dot();break;
      case 'j':dot();break;
      case 'J':dot();break;
      case 'k':dash();dot();dash();break;
      case 'K':dash();dot();dash();break;
      case 'l':dot();dash();dot();dot();break;
      case 'L':dot();dash();dot();dot();break;
      case 'm':dash();dash();break;
      case 'M':dash();dash();break;
      case 'n':dash();dot();break;
      case 'N':dash();dot();break;
      case 'o':dash();dash();dash();break;
      case 'O':dash();dash();dash();break;
      case 'p':dot();dash();dash();break;
      case 'P':dot();dash();dash();break;
      case 'q':dash();dash();dot();dash();break;
      case 'Q':dash();dash();dot();dash();break;
      case 'r':dot();dash();dot();break;
      case 'R':dot();dash();dot();break;
      case 's':dot;dot;break;
      case 'S':dot;dot;break;
      case 't':dash();break;
      case 'T':dash();break;
      case 'u':dot();dot();dash();break;
      case 'U':dot();dot();dash();break;
      case 'v':dot();dot();dot();dash();break;
      case 'V':dot();dot();dot();dash();break;
      case 'w':dot();dash();dash();break;
      case 'W':dot();dash();dash();break;
      case 'x':dash();dot();dot();dash();break;
      case 'X':dash();dot();dot();dash();break;
      case 'y':dash();dot();dash();dash();break;
      case 'Y':dash();dot();dash();dash();break;
      case 'z':dash();dash();dot();dot();break;
      case 'Z':dash();dash();dot();dot();break;
      case '0':dash();dash();dash();dash();dash();break;
      case '1':dot();dash();dash();dash();dash();break;
      case '2':dot();dot();dash();dash();break;
      case '3':dot();dot();dot();dash();dash();break;
      case '4':dot();dot();dot();dot();dash();break;
      case '5':dot();dot();dot();dot();dot();break;
      case '6':dash();dot();dot();dot();dot();break;
      case '7':dash();dash();dot();dot();dot();break;
      case '8':dash();dash();dash();dot();dot();break;
      case '9':dash();dash();dash();dash();dot();break;
      case ' ':digitalWrite(13,LOW);delay(750);break;
      case '/n':digitalWrite(13,LOW);delay(1750);break;
      default:break;
    }
    digitalWrite(13,LOW);delay(500);
  }

}

void dot()
{
  digitalWrite(13,HIGH);
  delay(250);
  digitalWrite(13,LOW);
  delay(250);
}
void dash()
{
  digitalWrite(13,HIGH);
  delay(750);
  digitalWrite(13,LOW);
  delay(250);
}
