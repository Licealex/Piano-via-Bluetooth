#define C 2093
#define D 2349
#define E 2637
#define F 2794
#define G 3136
#define A 3520
#define B 3951

const int pinoSom = 9;

void setup() {
  pinMode(pinoSom, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  if (Serial.available()){
    char nota = Serial.read();

  switch (nota){
  case 'C':
    tone( pinoSom,C,1000);
  break;
  case 'D':
    tone( pinoSom,D,1000);
  break;
  case 'E':
    tone( pinoSom,E,1000);
  break;
  case 'F':
    tone( pinoSom,F,1000);
  break;
  case 'G':
    tone( pinoSom,G,1000);
  break;
  case 'A':
    tone( pinoSom,D,1000);
  break;
  case 'B':
    tone( pinoSom,B,1000);

    break;
    default:
    break;
  }

  delay(1000);
   noTone(pinoSom);
  }
}
