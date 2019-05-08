void zapal(int x, int y, int z){ 
  wylaczPoza(y);
  switch(y){
    case(1):
            switch(x){
                case(1):
                    expander1.pinMode(0, OUTPUT);
                    expander1.digitalWrite(0, LOW);
                    expander1.pinMode(1, INPUT);
                    expander1.pinMode(2, INPUT);
                    expander1.pinMode(3, INPUT);
                    expander1.pinMode(4, INPUT);
                    expander1.pinMode(5, INPUT);
                    expander1.pinMode(6, INPUT);
                    expander1.pinMode(7, INPUT);
                break;
                case(2):
                    expander1.pinMode(0, INPUT);
                    expander1.pinMode(1, OUTPUT);
                    expander1.digitalWrite(1, LOW);
                    expander1.pinMode(2, INPUT);
                    expander1.pinMode(3, INPUT);
                    expander1.pinMode(4, INPUT);
                    expander1.pinMode(5, INPUT);
                    expander1.pinMode(6, INPUT);
                    expander1.pinMode(7, INPUT);
                break;
                case(3):
                    expander1.pinMode(0, INPUT);
                    expander1.pinMode(1, INPUT);
                    expander1.pinMode(2, OUTPUT);
                    expander1.digitalWrite(2, LOW);
                    expander1.pinMode(3, INPUT);
                    expander1.pinMode(4, INPUT);
                    expander1.pinMode(5, INPUT);
                    expander1.pinMode(6, INPUT);
                    expander1.pinMode(7, INPUT);
                break;
                case(4):
                    expander1.pinMode(0, INPUT);
                    expander1.pinMode(1, INPUT);
                    expander1.pinMode(2, INPUT);
                    expander1.pinMode(3, OUTPUT);
                    expander1.digitalWrite(3, LOW);
                    expander1.pinMode(4, INPUT);
                    expander1.pinMode(5, INPUT);
                    expander1.pinMode(6, INPUT);
                    expander1.pinMode(7, INPUT);
                break;
                case(5):
                    expander1.pinMode(0, INPUT);
                    expander1.pinMode(1, INPUT);
                    expander1.pinMode(2, INPUT);
                    expander1.pinMode(3, INPUT);
                    expander1.pinMode(4, OUTPUT);
                    expander1.digitalWrite(4, LOW);
                    expander1.pinMode(5, INPUT);
                    expander1.pinMode(6, INPUT);
                    expander1.pinMode(7, INPUT);
                break;
                case(6):
                    expander1.pinMode(0, INPUT);
                    expander1.pinMode(1, INPUT);
                    expander1.pinMode(2, INPUT);
                    expander1.pinMode(3, INPUT);
                    expander1.pinMode(4, INPUT);
                    expander1.pinMode(5, OUTPUT);
                    expander1.digitalWrite(5, LOW);
                    expander1.pinMode(6, INPUT);
                    expander1.pinMode(7, INPUT);
                break;
                case(7):
                    expander1.pinMode(0, INPUT);
                    expander1.pinMode(1, INPUT);
                    expander1.pinMode(2, INPUT);
                    expander1.pinMode(3, INPUT);
                    expander1.pinMode(4, INPUT);
                    expander1.pinMode(5, INPUT);
                    expander1.pinMode(6, OUTPUT);
                    expander1.digitalWrite(6, LOW);
                    expander1.pinMode(7, INPUT);
                break;
                case(8):
                    expander1.pinMode(0, INPUT);
                    expander1.pinMode(1, INPUT);
                    expander1.pinMode(2, INPUT);
                    expander1.pinMode(3, INPUT);
                    expander1.pinMode(4, INPUT);
                    expander1.pinMode(5, INPUT);
                    expander1.pinMode(6, INPUT);
                    expander1.pinMode(7, OUTPUT);
                    expander1.digitalWrite(7, LOW);
                break;
              }        
    break;
    case(2):
          switch(x){
                case(1):
                    expander2.pinMode(0, OUTPUT);
                    expander2.digitalWrite(0, LOW);
                    expander2.pinMode(1, INPUT);
                    expander2.pinMode(2, INPUT);
                    expander2.pinMode(3, INPUT);
                    expander2.pinMode(4, INPUT);
                    expander2.pinMode(5, INPUT);
                    expander2.pinMode(6, INPUT);
                    expander2.pinMode(7, INPUT);
                break;
                case(2):
                    expander2.pinMode(0, INPUT);
                    expander2.pinMode(1, OUTPUT);
                    expander2.digitalWrite(1, LOW);
                    expander2.pinMode(2, INPUT);
                    expander2.pinMode(3, INPUT);
                    expander2.pinMode(4, INPUT);
                    expander2.pinMode(5, INPUT);
                    expander2.pinMode(6, INPUT);
                    expander2.pinMode(7, INPUT);
                break;
                case(3):
                    expander2.pinMode(0, INPUT);
                    expander2.pinMode(1, INPUT);
                    expander2.pinMode(2, OUTPUT);
                    expander2.digitalWrite(2, LOW);
                    expander2.pinMode(3, INPUT);
                    expander2.pinMode(4, INPUT);
                    expander2.pinMode(5, INPUT);
                    expander2.pinMode(6, INPUT);
                    expander2.pinMode(7, INPUT);
                break;
                case(4):
                    expander2.pinMode(0, INPUT);
                    expander2.pinMode(1, INPUT);
                    expander2.pinMode(2, INPUT);
                    expander2.pinMode(3, OUTPUT);
                    expander2.digitalWrite(3, LOW);
                    expander2.pinMode(4, INPUT);
                    expander2.pinMode(5, INPUT);
                    expander2.pinMode(6, INPUT);
                    expander2.pinMode(7, INPUT);
                break;
                case(5):
                    expander2.pinMode(0, INPUT);
                    expander2.pinMode(1, INPUT);
                    expander2.pinMode(2, INPUT);
                    expander2.pinMode(3, INPUT);
                    expander2.pinMode(4, OUTPUT);
                    expander2.digitalWrite(4, LOW);
                    expander2.pinMode(5, INPUT);
                    expander2.pinMode(6, INPUT);
                    expander2.pinMode(7, INPUT);
                break;
                case(6):
                    expander2.pinMode(0, INPUT);
                    expander2.pinMode(1, INPUT);
                    expander2.pinMode(2, INPUT);
                    expander2.pinMode(3, INPUT);
                    expander2.pinMode(4, INPUT);
                    expander2.pinMode(5, OUTPUT);
                    expander2.digitalWrite(5, LOW);
                    expander2.pinMode(6, INPUT);
                    expander2.pinMode(7, INPUT);
                break;
                case(7):
                    expander2.pinMode(0, INPUT);
                    expander2.pinMode(1, INPUT);
                    expander2.pinMode(2, INPUT);
                    expander2.pinMode(3, INPUT);
                    expander2.pinMode(4, INPUT);
                    expander2.pinMode(5, INPUT);
                    expander2.pinMode(6, OUTPUT);
                    expander2.digitalWrite(6, LOW);
                    expander2.pinMode(7, INPUT);
                break;
                case(8):
                    expander2.pinMode(0, INPUT);
                    expander2.pinMode(1, INPUT);
                    expander2.pinMode(2, INPUT);
                    expander2.pinMode(3, INPUT);
                    expander2.pinMode(4, INPUT);
                    expander2.pinMode(5, INPUT);
                    expander2.pinMode(6, INPUT);
                    expander2.pinMode(7, OUTPUT);
                    expander2.digitalWrite(7, LOW);
                break;
              }    
    break;
    case(3):
            switch(x){
                case(1):
                    expander3.pinMode(0, OUTPUT);
                    expander3.digitalWrite(0, LOW);
                    expander3.pinMode(1, INPUT);
                    expander3.pinMode(2, INPUT);
                    expander3.pinMode(3, INPUT);
                    expander3.pinMode(4, INPUT);
                    expander3.pinMode(5, INPUT);
                    expander3.pinMode(6, INPUT);
                    expander3.pinMode(7, INPUT);
                break;
                case(2):
                    expander3.pinMode(0, INPUT);
                    expander3.pinMode(1, OUTPUT);
                    expander3.digitalWrite(1, LOW);
                    expander3.pinMode(2, INPUT);
                    expander3.pinMode(3, INPUT);
                    expander3.pinMode(4, INPUT);
                    expander3.pinMode(5, INPUT);
                    expander3.pinMode(6, INPUT);
                    expander3.pinMode(7, INPUT);
                break;
                case(3):
                    expander3.pinMode(0, INPUT);
                    expander3.pinMode(1, INPUT);
                    expander3.pinMode(2, OUTPUT);
                    expander3.digitalWrite(2, LOW);
                    expander3.pinMode(3, INPUT);
                    expander3.pinMode(4, INPUT);
                    expander3.pinMode(5, INPUT);
                    expander3.pinMode(6, INPUT);
                    expander3.pinMode(7, INPUT);
                break;
                case(4):
                    expander3.pinMode(0, INPUT);
                    expander3.pinMode(1, INPUT);
                    expander3.pinMode(2, INPUT);
                    expander3.pinMode(3, OUTPUT);
                    expander3.digitalWrite(3, LOW);
                    expander3.pinMode(4, INPUT);
                    expander3.pinMode(5, INPUT);
                    expander3.pinMode(6, INPUT);
                    expander3.pinMode(7, INPUT);
                break;
                case(5):
                    expander3.pinMode(0, INPUT);
                    expander3.pinMode(1, INPUT);
                    expander3.pinMode(2, INPUT);
                    expander3.pinMode(3, INPUT);
                    expander3.pinMode(4, OUTPUT);
                    expander3.digitalWrite(4, LOW);
                    expander3.pinMode(5, INPUT);
                    expander3.pinMode(6, INPUT);
                    expander3.pinMode(7, INPUT);
                break;
                case(6):
                    expander3.pinMode(0, INPUT);
                    expander3.pinMode(1, INPUT);
                    expander3.pinMode(2, INPUT);
                    expander3.pinMode(3, INPUT);
                    expander3.pinMode(4, INPUT);
                    expander3.pinMode(5, OUTPUT);
                    expander3.digitalWrite(5, LOW);
                    expander3.pinMode(6, INPUT);
                    expander3.pinMode(7, INPUT);
                break;
                case(7):
                    expander3.pinMode(0, INPUT);
                    expander3.pinMode(1, INPUT);
                    expander3.pinMode(2, INPUT);
                    expander3.pinMode(3, INPUT);
                    expander3.pinMode(4, INPUT);
                    expander3.pinMode(5, INPUT);
                    expander3.pinMode(6, OUTPUT);
                    expander3.digitalWrite(6, LOW);
                    expander3.pinMode(7, INPUT);
                break;
                case(8):
                    expander3.pinMode(0, INPUT);
                    expander3.pinMode(1, INPUT);
                    expander3.pinMode(2, INPUT);
                    expander3.pinMode(3, INPUT);
                    expander3.pinMode(4, INPUT);
                    expander3.pinMode(5, INPUT);
                    expander3.pinMode(6, INPUT);
                    expander3.pinMode(7, OUTPUT);
                    expander3.digitalWrite(7, LOW);
                break;
             } 
    break;
    case(4):
            switch(x){
                case(1):
                    expander4.pinMode(0, OUTPUT);
                    expander4.digitalWrite(0, LOW);
                    expander4.pinMode(1, INPUT);
                    expander4.pinMode(2, INPUT);
                    expander4.pinMode(3, INPUT);
                    expander4.pinMode(4, INPUT);
                    expander4.pinMode(5, INPUT);
                    expander4.pinMode(6, INPUT);
                    expander4.pinMode(7, INPUT);
                break;
                case(2):
                    expander4.pinMode(0, INPUT);
                    expander4.pinMode(1, OUTPUT);
                    expander4.digitalWrite(1, LOW);
                    expander4.pinMode(2, INPUT);
                    expander4.pinMode(3, INPUT);
                    expander4.pinMode(4, INPUT);
                    expander4.pinMode(5, INPUT);
                    expander4.pinMode(6, INPUT);
                    expander4.pinMode(7, INPUT);
                break;
                case(3):
                    expander4.pinMode(0, INPUT);
                    expander4.pinMode(1, INPUT);
                    expander4.pinMode(2, OUTPUT);
                    expander4.digitalWrite(2, LOW);
                    expander4.pinMode(3, INPUT);
                    expander4.pinMode(4, INPUT);
                    expander4.pinMode(5, INPUT);
                    expander4.pinMode(6, INPUT);
                    expander4.pinMode(7, INPUT);
                break;
                case(4):
                    expander4.pinMode(0, INPUT);
                    expander4.pinMode(1, INPUT);
                    expander4.pinMode(2, INPUT);
                    expander4.pinMode(3, OUTPUT);
                    expander4.digitalWrite(3, LOW);
                    expander4.pinMode(4, INPUT);
                    expander4.pinMode(5, INPUT);
                    expander4.pinMode(6, INPUT);
                    expander4.pinMode(7, INPUT);
                break;
                case(5):
                    expander4.pinMode(0, INPUT);
                    expander4.pinMode(1, INPUT);
                    expander4.pinMode(2, INPUT);
                    expander4.pinMode(3, INPUT);
                    expander4.pinMode(4, OUTPUT);
                    expander4.digitalWrite(4, LOW);
                    expander4.pinMode(5, INPUT);
                    expander4.pinMode(6, INPUT);
                    expander4.pinMode(7, INPUT);
                break;
                case(6):
                    expander4.pinMode(0, INPUT);
                    expander4.pinMode(1, INPUT);
                    expander4.pinMode(2, INPUT);
                    expander4.pinMode(3, INPUT);
                    expander4.pinMode(4, INPUT);
                    expander4.pinMode(5, OUTPUT);
                    expander4.digitalWrite(5, LOW);
                    expander4.pinMode(6, INPUT);
                    expander4.pinMode(7, INPUT);
                break;
                case(7):
                    expander4.pinMode(0, INPUT);
                    expander4.pinMode(1, INPUT);
                    expander4.pinMode(2, INPUT);
                    expander4.pinMode(3, INPUT);
                    expander4.pinMode(4, INPUT);
                    expander4.pinMode(5, INPUT);
                    expander4.pinMode(6, OUTPUT);
                    expander4.digitalWrite(6, LOW);
                    expander4.pinMode(7, INPUT);
                break;
                case(8):
                    expander4.pinMode(0, INPUT);
                    expander4.pinMode(1, INPUT);
                    expander4.pinMode(2, INPUT);
                    expander4.pinMode(3, INPUT);
                    expander4.pinMode(4, INPUT);
                    expander4.pinMode(5, INPUT);
                    expander4.pinMode(6, INPUT);
                    expander4.pinMode(7, OUTPUT);
                    expander4.digitalWrite(7, LOW);
                break;
              } 
    break;
    case(5):
            switch(x){
                case(1):
                    expander5.pinMode(0, OUTPUT);
                    expander5.digitalWrite(0, LOW);
                    expander5.pinMode(1, INPUT);
                    expander5.pinMode(2, INPUT);
                    expander5.pinMode(3, INPUT);
                    expander5.pinMode(4, INPUT);
                    expander5.pinMode(5, INPUT);
                    expander5.pinMode(6, INPUT);
                    expander5.pinMode(7, INPUT);
                break;
                case(2):
                    expander5.pinMode(0, INPUT);
                    expander5.pinMode(1, OUTPUT);
                    expander5.digitalWrite(1, LOW);
                    expander5.pinMode(2, INPUT);
                    expander5.pinMode(3, INPUT);
                    expander5.pinMode(4, INPUT);
                    expander5.pinMode(5, INPUT);
                    expander5.pinMode(6, INPUT);
                    expander5.pinMode(7, INPUT);
                break;
                case(3):
                    expander5.pinMode(0, INPUT);
                    expander5.pinMode(1, INPUT);
                    expander5.pinMode(2, OUTPUT);
                    expander5.digitalWrite(2, LOW);
                    expander5.pinMode(3, INPUT);
                    expander5.pinMode(4, INPUT);
                    expander5.pinMode(5, INPUT);
                    expander5.pinMode(6, INPUT);
                    expander5.pinMode(7, INPUT);
                break;
                case(4):
                    expander5.pinMode(0, INPUT);
                    expander5.pinMode(1, INPUT);
                    expander5.pinMode(2, INPUT);
                    expander5.pinMode(3, OUTPUT);
                    expander5.digitalWrite(3, LOW);
                    expander5.pinMode(4, INPUT);
                    expander5.pinMode(5, INPUT);
                    expander5.pinMode(6, INPUT);
                    expander5.pinMode(7, INPUT);
                break;
                case(5):
                    expander5.pinMode(0, INPUT);
                    expander5.pinMode(1, INPUT);
                    expander5.pinMode(2, INPUT);
                    expander5.pinMode(3, INPUT);
                    expander5.pinMode(4, OUTPUT);
                    expander5.digitalWrite(4, LOW);
                    expander5.pinMode(5, INPUT);
                    expander5.pinMode(6, INPUT);
                    expander5.pinMode(7, INPUT);
                break;
                case(6):
                    expander5.pinMode(0, INPUT);
                    expander5.pinMode(1, INPUT);
                    expander5.pinMode(2, INPUT);
                    expander5.pinMode(3, INPUT);
                    expander5.pinMode(4, INPUT);
                    expander5.pinMode(5, OUTPUT);
                    expander5.digitalWrite(5, LOW);
                    expander5.pinMode(6, INPUT);
                    expander5.pinMode(7, INPUT);
                break;
                case(7):
                    expander5.pinMode(0, INPUT);
                    expander5.pinMode(1, INPUT);
                    expander5.pinMode(2, INPUT);
                    expander5.pinMode(3, INPUT);
                    expander5.pinMode(4, INPUT);
                    expander5.pinMode(5, INPUT);
                    expander5.pinMode(6, OUTPUT);
                    expander5.digitalWrite(6, LOW);
                    expander5.pinMode(7, INPUT);
                break;
                case(8):
                    expander5.pinMode(0, INPUT);
                    expander5.pinMode(1, INPUT);
                    expander5.pinMode(2, INPUT);
                    expander5.pinMode(3, INPUT);
                    expander5.pinMode(4, INPUT);
                    expander5.pinMode(5, INPUT);
                    expander5.pinMode(6, INPUT);
                    expander5.pinMode(7, OUTPUT);
                    expander5.digitalWrite(7, LOW);
                break;
              } 
    break;
    case(6):
            switch(x){
                case(1):
                    expander6.pinMode(0, OUTPUT);
                    expander6.digitalWrite(0, LOW);
                    expander6.pinMode(1, INPUT);
                    expander6.pinMode(2, INPUT);
                    expander6.pinMode(3, INPUT);
                    expander6.pinMode(4, INPUT);
                    expander6.pinMode(5, INPUT);
                    expander6.pinMode(6, INPUT);
                    expander6.pinMode(7, INPUT);
                break;
                case(2):
                    expander6.pinMode(0, INPUT);
                    expander6.pinMode(1, OUTPUT);
                    expander6.digitalWrite(1, LOW);
                    expander6.pinMode(2, INPUT);
                    expander6.pinMode(3, INPUT);
                    expander6.pinMode(4, INPUT);
                    expander6.pinMode(5, INPUT);
                    expander6.pinMode(6, INPUT);
                    expander6.pinMode(7, INPUT);
                break;
                case(3):
                    expander6.pinMode(0, INPUT);
                    expander6.pinMode(1, INPUT);
                    expander6.pinMode(2, OUTPUT);
                    expander6.digitalWrite(2, LOW);
                    expander6.pinMode(3, INPUT);
                    expander6.pinMode(4, INPUT);
                    expander6.pinMode(5, INPUT);
                    expander6.pinMode(6, INPUT);
                    expander6.pinMode(7, INPUT);
                break;
                case(4):
                    expander6.pinMode(0, INPUT);
                    expander6.pinMode(1, INPUT);
                    expander6.pinMode(2, INPUT);
                    expander6.pinMode(3, OUTPUT);
                    expander6.digitalWrite(3, LOW);
                    expander6.pinMode(4, INPUT);
                    expander6.pinMode(5, INPUT);
                    expander6.pinMode(6, INPUT);
                    expander6.pinMode(7, INPUT);
                break;
                case(5):
                    expander6.pinMode(0, INPUT);
                    expander6.pinMode(1, INPUT);
                    expander6.pinMode(2, INPUT);
                    expander6.pinMode(3, INPUT);
                    expander6.pinMode(4, OUTPUT);
                    expander6.digitalWrite(4, LOW);
                    expander6.pinMode(5, INPUT);
                    expander6.pinMode(6, INPUT);
                    expander6.pinMode(7, INPUT);
                break;
                case(6):
                    expander6.pinMode(0, INPUT);
                    expander6.pinMode(1, INPUT);
                    expander6.pinMode(2, INPUT);
                    expander6.pinMode(3, INPUT);
                    expander6.pinMode(4, INPUT);
                    expander6.pinMode(5, OUTPUT);
                    expander6.digitalWrite(5, LOW);
                    expander6.pinMode(6, INPUT);
                    expander6.pinMode(7, INPUT);
                break;
                case(7):
                    expander6.pinMode(0, INPUT);
                    expander6.pinMode(1, INPUT);
                    expander6.pinMode(2, INPUT);
                    expander6.pinMode(3, INPUT);
                    expander6.pinMode(4, INPUT);
                    expander6.pinMode(5, INPUT);
                    expander6.pinMode(6, OUTPUT);
                    expander6.digitalWrite(6, LOW);
                    expander6.pinMode(7, INPUT);
                break;
                case(8):
                    expander6.pinMode(0, INPUT);
                    expander6.pinMode(1, INPUT);
                    expander6.pinMode(2, INPUT);
                    expander6.pinMode(3, INPUT);
                    expander6.pinMode(4, INPUT);
                    expander6.pinMode(5, INPUT);
                    expander6.pinMode(6, INPUT);
                    expander6.pinMode(7, OUTPUT);
                    expander6.digitalWrite(7, LOW);
                break;
              } 
    break;
    case(7):
            switch(x){
                case(1):
                    expander7.pinMode(0, OUTPUT);
                    expander7.digitalWrite(0, LOW);
                    expander7.pinMode(1, INPUT);
                    expander7.pinMode(2, INPUT);
                    expander7.pinMode(3, INPUT);
                    expander7.pinMode(4, INPUT);
                    expander7.pinMode(5, INPUT);
                    expander7.pinMode(6, INPUT);
                    expander7.pinMode(7, INPUT);
                break;
                case(2):
                    expander7.pinMode(0, INPUT);
                    expander7.pinMode(1, OUTPUT);
                    expander7.digitalWrite(1, LOW);
                    expander7.pinMode(2, INPUT);
                    expander7.pinMode(3, INPUT);
                    expander7.pinMode(4, INPUT);
                    expander7.pinMode(5, INPUT);
                    expander7.pinMode(6, INPUT);
                    expander7.pinMode(7, INPUT);
                break;
                case(3):
                    expander7.pinMode(0, INPUT);
                    expander7.pinMode(1, INPUT);
                    expander7.pinMode(2, OUTPUT);
                    expander7.digitalWrite(2, LOW);
                    expander7.pinMode(3, INPUT);
                    expander7.pinMode(4, INPUT);
                    expander7.pinMode(5, INPUT);
                    expander7.pinMode(6, INPUT);
                    expander7.pinMode(7, INPUT);
                break;
                case(4):
                    expander7.pinMode(0, INPUT);
                    expander7.pinMode(1, INPUT);
                    expander7.pinMode(2, INPUT);
                    expander7.pinMode(3, OUTPUT);
                    expander7.digitalWrite(3, LOW);
                    expander7.pinMode(4, INPUT);
                    expander7.pinMode(5, INPUT);
                    expander7.pinMode(6, INPUT);
                    expander7.pinMode(7, INPUT);
                break;
                case(5):
                    expander7.pinMode(0, INPUT);
                    expander7.pinMode(1, INPUT);
                    expander7.pinMode(2, INPUT);
                    expander7.pinMode(3, INPUT);
                    expander7.pinMode(4, OUTPUT);
                    expander7.digitalWrite(4, LOW);
                    expander7.pinMode(5, INPUT);
                    expander7.pinMode(6, INPUT);
                    expander7.pinMode(7, INPUT);
                break;
                case(6):
                    expander7.pinMode(0, INPUT);
                    expander7.pinMode(1, INPUT);
                    expander7.pinMode(2, INPUT);
                    expander7.pinMode(3, INPUT);
                    expander7.pinMode(4, INPUT);
                    expander7.pinMode(5, OUTPUT);
                    expander7.digitalWrite(5, LOW);
                    expander7.pinMode(6, INPUT);
                    expander7.pinMode(7, INPUT);
                break;
                case(7):
                    expander7.pinMode(0, INPUT);
                    expander7.pinMode(1, INPUT);
                    expander7.pinMode(2, INPUT);
                    expander7.pinMode(3, INPUT);
                    expander7.pinMode(4, INPUT);
                    expander7.pinMode(5, INPUT);
                    expander7.pinMode(6, OUTPUT);
                    expander7.digitalWrite(6, LOW);
                    expander7.pinMode(7, INPUT);
                break;
                case(8):
                    expander7.pinMode(0, INPUT);
                    expander7.pinMode(1, INPUT);
                    expander7.pinMode(2, INPUT);
                    expander7.pinMode(3, INPUT);
                    expander7.pinMode(4, INPUT);
                    expander7.pinMode(5, INPUT);
                    expander7.pinMode(6, INPUT);
                    expander7.pinMode(7, OUTPUT);
                    expander7.digitalWrite(7, LOW);
                break;
              }   
    break;
    case(8):
             switch(x){
                case(1):
                    expander8.pinMode(0, OUTPUT);
                    expander8.digitalWrite(0, LOW);
                    expander8.pinMode(1, INPUT);
                    expander8.pinMode(2, INPUT);
                    expander8.pinMode(3, INPUT);
                    expander8.pinMode(4, INPUT);
                    expander8.pinMode(5, INPUT);
                    expander8.pinMode(6, INPUT);
                    expander8.pinMode(7, INPUT);
                break;
                case(2):
                    expander8.pinMode(0, INPUT);
                    expander8.pinMode(1, OUTPUT);
                    expander8.digitalWrite(1, LOW);
                    expander8.pinMode(2, INPUT);
                    expander8.pinMode(3, INPUT);
                    expander8.pinMode(4, INPUT);
                    expander8.pinMode(5, INPUT);
                    expander8.pinMode(6, INPUT);
                    expander8.pinMode(7, INPUT);
                break;
                case(3):
                    expander8.pinMode(0, INPUT);
                    expander8.pinMode(1, INPUT);
                    expander8.pinMode(2, OUTPUT);
                    expander8.digitalWrite(2, LOW);
                    expander8.pinMode(3, INPUT);
                    expander8.pinMode(4, INPUT);
                    expander8.pinMode(5, INPUT);
                    expander8.pinMode(6, INPUT);
                    expander8.pinMode(7, INPUT);
                break;
                case(4):
                    expander8.pinMode(0, INPUT);
                    expander8.pinMode(1, INPUT);
                    expander8.pinMode(2, INPUT);
                    expander8.pinMode(3, OUTPUT);
                    expander8.digitalWrite(3, LOW);
                    expander8.pinMode(4, INPUT);
                    expander8.pinMode(5, INPUT);
                    expander8.pinMode(6, INPUT);
                    expander8.pinMode(7, INPUT);
                break;
                case(5):
                    expander8.pinMode(0, INPUT);
                    expander8.pinMode(1, INPUT);
                    expander8.pinMode(2, INPUT);
                    expander8.pinMode(3, INPUT);
                    expander8.pinMode(4, OUTPUT);
                    expander8.digitalWrite(4, LOW);
                    expander8.pinMode(5, INPUT);
                    expander8.pinMode(6, INPUT);
                    expander8.pinMode(7, INPUT);
                break;
                case(6):
                    expander8.pinMode(0, INPUT);
                    expander8.pinMode(1, INPUT);
                    expander8.pinMode(2, INPUT);
                    expander8.pinMode(3, INPUT);
                    expander8.pinMode(4, INPUT);
                    expander8.pinMode(5, OUTPUT);
                    expander8.digitalWrite(5, LOW);
                    expander8.pinMode(6, INPUT);
                    expander8.pinMode(7, INPUT);
                break;
                case(7):
                    expander8.pinMode(0, INPUT);
                    expander8.pinMode(1, INPUT);
                    expander8.pinMode(2, INPUT);
                    expander8.pinMode(3, INPUT);
                    expander8.pinMode(4, INPUT);
                    expander8.pinMode(5, INPUT);
                    expander8.pinMode(6, OUTPUT);
                    expander8.digitalWrite(6, LOW);
                    expander8.pinMode(7, INPUT);
                break;
                case(8):
                    expander8.pinMode(0, INPUT);
                    expander8.pinMode(1, INPUT);
                    expander8.pinMode(2, INPUT);
                    expander8.pinMode(3, INPUT);
                    expander8.pinMode(4, INPUT);
                    expander8.pinMode(5, INPUT);
                    expander8.pinMode(6, INPUT);
                    expander8.pinMode(7, OUTPUT);
                    expander8.digitalWrite(7, LOW);
                break;
              }  
       break;
              
}  
  
  switch(z){
    case(1):     //Pin 12
      pinMode(12, OUTPUT);
      digitalWrite(12, HIGH);
      pinMode(11, INPUT);
      pinMode(10, INPUT);
      pinMode(9, INPUT);
      pinMode(8, INPUT);
      pinMode(7, INPUT);
      pinMode(6, INPUT);
      pinMode(5, INPUT);
    break;
    case(2):      //Pin 11
      pinMode(12, INPUT);
      pinMode(11, OUTPUT);
      digitalWrite(11, HIGH);
      pinMode(10, INPUT);
      pinMode(9, INPUT);
      pinMode(8, INPUT);
      pinMode(7, INPUT);
      pinMode(6, INPUT);
      pinMode(5, INPUT);
    break;
    case(3):      //Pin 10
      pinMode(12, INPUT);
      pinMode(11, INPUT);
      pinMode(10, OUTPUT);
      digitalWrite(10, HIGH);
      pinMode(9, INPUT);
      pinMode(8, INPUT);
      pinMode(7, INPUT);
      pinMode(6, INPUT);
      pinMode(5, INPUT);
    break;
    case(4):    //Pin 9
      pinMode(12, INPUT);
      pinMode(11, INPUT);
      pinMode(10, INPUT);
      pinMode(9, OUTPUT);
      digitalWrite(9, HIGH);
      pinMode(8, INPUT);
      pinMode(7, INPUT);
      pinMode(6, INPUT);
      pinMode(5, INPUT);
    break;
    case(5):     //pin 8
      pinMode(12, INPUT);
      pinMode(11, INPUT);
      pinMode(10, INPUT);
      pinMode(9, INPUT);
      pinMode(8, OUTPUT);
      digitalWrite(8, HIGH);
      pinMode(7, INPUT);
      pinMode(6, INPUT);
      pinMode(5, INPUT);
    break;
    case(6):    //Pin 7
      pinMode(12, INPUT);
      pinMode(11, INPUT);
      pinMode(10, INPUT);
      pinMode(9, INPUT);
      pinMode(8, INPUT);
      pinMode(7, OUTPUT);
      digitalWrite(7, HIGH);
      pinMode(6, INPUT);
      pinMode(5, INPUT);
    break;
    case(7):    //pin 6
      pinMode(12, INPUT);
      pinMode(11, INPUT);
      pinMode(10, INPUT);
      pinMode(9, INPUT);
      pinMode(8, INPUT);
      pinMode(7, INPUT);
      pinMode(6, OUTPUT);
      digitalWrite(6, HIGH);
      pinMode(5, INPUT);
    break;
    case(8):  //Pin 5
      pinMode(12, INPUT);
      pinMode(11, INPUT);
      pinMode(10, INPUT);
      pinMode(9, INPUT);
      pinMode(8, INPUT);
      pinMode(7, INPUT);
      pinMode(6, INPUT);
      pinMode(5, OUTPUT);
      digitalWrite(5, HIGH);
    break; 
  }
}

