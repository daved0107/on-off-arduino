// Este codigo permite que el estado del foco quede activo con solo pulsar el switch una vez, y la otra pulsacion 
// lo pone en estado low

int estado = 0;                 // Guarda el estado del boton
int estadoanterior = 0;         //Guarda el estado anterior del boton
int salida = 0;                 //0=Led apagado 1= Led encendido

void setup () {
    
    pinMode(8, INPUT);          //declaramos el switch como entrada
    pinMode(4, OUTPUT);         //declaramos el led como salida
    
}

void loop(){

    estado = digitalRead(8);    //Leer estado del switch
    if((estado ==HIGH) && (estadoanterior ==LOW)) {
        salida = 1 - salida;
        delay(20);
    }

    estadoanterior = estado;    //Guarda el valor actual
    if (salida==1) {            // si el estado esta en alto
        digitalWrite(4, HIGH);
    }
    else{
        digitalWrite(4, LOW);
    }

}

