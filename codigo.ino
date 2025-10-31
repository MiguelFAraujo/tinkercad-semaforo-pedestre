// Pinos dos LEDs do semáforo de veículos
int pinoVermelho = 2;
int pinoAmarelo = 3;
int pinoVerde = 4;

// Pinos dos LEDs do semáforo de pedestres
int pinoVermelhoPedestre = 9;
int pinoVerdePedestre = 8;

// Tempos de cada estado do semáforo em milissegundos
int tempoVermelho = 5000;  // 5 segundos
int tempoAmarelo = 2000;   // 2 segundos
int tempoVerde = 5000;     // 5 segundos

void setup() {
  // Define os pinos dos LEDs como saídas
  pinMode(pinoVermelho, OUTPUT);
  pinMode(pinoAmarelo, OUTPUT);
  pinMode(pinoVerde, OUTPUT);
  
  // Define os pinos dos LEDs do semáforo de pedestres como saídas
  pinMode(pinoVermelhoPedestre, OUTPUT);
  pinMode(pinoVerdePedestre, OUTPUT);
}

  void loop() {
  // Semáforo de veículos
  digitalWrite(pinoVermelho, HIGH);   // Liga o vermelho dos veículos
  digitalWrite(pinoAmarelo, LOW);     // Desliga o amarelo dos veículos
  digitalWrite(pinoVerde, LOW);        // Desliga o verde dos veículos
  
  // Semáforo de pedestres
  digitalWrite(pinoVermelhoPedestre, LOW);  // Desliga o vermelho do pedestre
  digitalWrite(pinoVerdePedestre, HIGH);    // Liga o verde do pedestre
  
  delay(tempoVermelho);  // Aguarda o tempo do vermelho dos veículos
  
  // Semáforo de veículos
  digitalWrite(pinoVermelho, LOW);       // Desliga o vermelho dos veículos
  digitalWrite(pinoAmarelo, HIGH);       // Liga o amarelo dos veículos
  digitalWrite(pinoVerde, LOW);          // Desliga o verde dos veículos
  
  // Semáforo de pedestres
  digitalWrite(pinoVermelhoPedestre, HIGH);  // Liga o vermelho do pedestre
  digitalWrite(pinoVerdePedestre, LOW);      // Desliga o verde do pedestre
  
  delay(tempoAmarelo);  // Aguarda o tempo do amarelo dos veículos
  
  // Semáforo de veículos
  digitalWrite(pinoVermelho, LOW);     // Desliga o vermelho dos veículos
  digitalWrite(pinoAmarelo, LOW);      // Desliga o amarelo dos veículos
  digitalWrite(pinoVerde, HIGH);       // Liga o verde dos veículos
  
  // Semáforo de pedestres
  digitalWrite(pinoVermelhoPedestre, HIGH);  // Liga o vermelho do pedestre
  digitalWrite(pinoVerdePedestre, LOW);      // Desliga o verde do pedestre
  
  delay(tempoVerde);  // Aguarda o tempo do verde dos veículos
}
