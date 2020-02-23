#define segA 3
#define segB 4
#define segC 8
#define segD 9
#define segE 10
#define segF 5
#define segG 6
#define Dot 7

int count=0;//count integer for 0-9 increment

void setup()
{
    for (int i=3;i<=10;i++) pinMode(i, OUTPUT);
}

void loop()
{
switch (count)
    {
      case 0://when count value is zero show”0” on disp
      digitalWrite(segA, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, HIGH);
      digitalWrite(Dot, LOW);
      break;

      case 1:// when count value is 1 show”1” on disp
      digitalWrite(segA, HIGH);
      digitalWrite(segB, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);
      digitalWrite(Dot, LOW);
      break;

      case 2:// when count value is 2 show”2” on disp
      digitalWrite(segA, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, LOW);
      digitalWrite(Dot, LOW);
      break;

      case 3:// when count value is 3 show”3” on disp
      digitalWrite(segA, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segD, LOW);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, LOW);
      digitalWrite(Dot, LOW);
      break;

      case 4:// when count value is 4 show”4” on disp
      digitalWrite(segA, HIGH);
      digitalWrite(segB, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);
      digitalWrite(Dot, LOW);
      break;

      case 5:// when count value is 5 show”5” on disp
      digitalWrite(segA, LOW);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, LOW);
      digitalWrite(segD, LOW);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);
      digitalWrite(Dot, LOW);
      break;

      case 6:// when count value is 6 show”6” on disp
      digitalWrite(segA, LOW);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, LOW);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);
      digitalWrite(Dot, LOW);
      break;

      case 7:// when count value is 7 show”7” on disp
      digitalWrite(segA, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);
      digitalWrite(Dot, LOW);
      break;

      case 8:// when count value is 8 show”8” on disp
      digitalWrite(segA, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);
      digitalWrite(Dot, LOW);
      break;

      case 9:// when count value is 9 show”9” on disp
      digitalWrite(segA, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segD, LOW);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);
      digitalWrite(Dot, LOW);
      break;

      break;
    }

    if (count<10)
      {
        count++;
        delay(1000);
      }
      
      if (count==10)
      {
        count=0;
        delay(1000);
      }
    }
