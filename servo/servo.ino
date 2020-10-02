Useless Box Code

#include <Servo.h>
Servo doorServo;
Servo handServo;

int switch_pin = 2; 

int pos = 0;
int selectedMove = 0;             //move selector
int Testmove = 0;                 //test mode: set to move number to test only one selected move 
                                  //(set to Zero to run normally i.e: roundrobbin on amm moves)

void setup() {
  Serial.begin(9600);
  pinMode(switch_pin, INPUT);  
  
  doorServo.attach(0);           //set door servo on Pin 9 pwm
  handServo.attach(15);          //set hand servo on Pin 10 pwm
  doorServo.write(180);           //set door to hiding position 
  handServo.write(55);            //set hand to hiding position
  
}
void loop() {

  {
if (Testmove != 0) {
selectedMove = Testmove;
}

//if the switch is on, then move door and hand to switch it off...
  if(digitalRead(switch_pin) == HIGH)
  {
    
  //if (selectedMove > 9) { selectedMove = 0; } //when all moves are played, repeat the moves from beginning 

  selectedMove = random(0, 10);
  
  if (selectedMove == 0) { switchoff(); }
  else if (selectedMove == 1) { switchoff(); }
  else if (selectedMove == 2) { switchofftimid(); }
  else if (selectedMove == 3) { switchoffslow(); }
  else if (selectedMove == 4) { switchofftrickfast(); }
  else if (selectedMove == 5) { switchofftrickslow(); }
  else if (selectedMove == 6) { switchoffallslow(); }
  else if (selectedMove == 7) { switchoff1(); }
  else if (selectedMove == 8) { switchoff2(); }
  else if (selectedMove == 9) { switchoffmarys(); }
  //if (Testmove == 0) {
  //selectedMove++;         //swith to next move if not in test mode
  //}
  delay(2000);
}
}}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// basic move 
   void switchoff() 
   {    
    
   //Moving door
    for(pos = 180; pos > 100; pos -= 3)   
    {                                   
    doorServo.write(pos);              
    delay(15);                       
    }
   
   //Moving hand
    for(pos = 50; pos<=180; pos+=2)      
    {                                
    handServo.write(pos);               
    delay(15);                        
    } 
   
    //Hiding hand
    for(pos = 180; pos > 50; pos -= 2)  
    {                                   
    handServo.write(pos);               
    delay(15);                       
   }  
      
    //hiding door
    for(pos = 100; pos<=180; pos+=3)     
    {                                
    doorServo.write(pos);              
    delay(15);                      
    } 
   } 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   // move 3: open and wait, then move hand and wait, then switch of and hide  
    void switchofftimid()
   {
    
  //Moving door
    for(pos = 180; pos > 100; pos -= 3)   
    {                                   
    doorServo.write(pos);              
    delay(15);                       
    }
    delay(800); 
    
   //Moving hand
    for(pos = 50; pos<=110; pos+=2)      
    {                                
    handServo.write(pos);               
    delay(15);                        
    } 
    delay(1000); 
    for(pos = 110; pos < 180; pos += 2)  
    {                                   
    handServo.write(pos);               
    delay(15);                       
    }    
    
   //hiding hand
    for(pos = 180; pos>=50; pos-=5)      
    {                                
    handServo.write(pos);               
    delay(15);                        
    } 
      
   //hiding door
    for(pos = 100; pos<=180; pos+=3)     
    {                                
    doorServo.write(pos);              
    delay(15);                        
   }  
   }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   // move 4: open slowly, wait, then fast
    void switchoffslow()
   {
    
  //Moving door
    for(pos = 180; pos > 100; pos -= 3)   
    {                                   
    doorServo.write(pos);              
    delay(60);                       
    }
    delay(800); 
    
   //Moving hand
    for(pos = 50; pos<=180; pos+=2)      
    {                                
    handServo.write(pos);               
    delay(10);                        
    }   
    
   //hiding hand
    for(pos = 180; pos>=50; pos-=5)      
    {                                
    handServo.write(pos);               
    delay(10);                        
    } 
      
   //hiding door
    for(pos = 100; pos<=180; pos+=3)     
    {                                
    doorServo.write(pos);              
    delay(10);                        
   }  
   }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   // move 5 
    void switchofftrickfast()
   {
    
  //Moving door
    for(pos = 180; pos > 100; pos -= 3)   
    {                                   
    doorServo.write(pos);              
    delay(20);                       
    }
    delay(1000); 
    
   //Moving hand
    for(pos = 50; pos<=150; pos+=2)      
    {                                
    handServo.write(pos);               
    delay(15);                        
    } 
    delay(2000); 
    for(pos = 150; pos < 180; pos += 2)  
    {                                   
    handServo.write(pos);               
    delay(60);                       
    }    
    
   //hiding hand
    for(pos = 180; pos>=50; pos-=5)      
    {                                
    handServo.write(pos);               
    delay(15);                        
    } 
      
   //hiding door
    for(pos = 100; pos<=180; pos+=3)     
    {                                
    doorServo.write(pos);              
    delay(15);                        
   }  
   }

   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   // move 6
    void switchofftrickslow()
   {
    
  //Moving door
    for(pos = 180; pos > 100; pos -= 3)   
    {                                   
    doorServo.write(pos);              
    delay(20);                       
    }
    delay(1000); 
    
   //Moving hand
    for(pos = 50; pos<=120; pos+=2)      
    {                                
    handServo.write(pos);               
    delay(15);                        
    } 
    delay(2000); 
    for(pos = 140; pos < 180; pos += 2)  
    {                                   
    handServo.write(pos);               
    delay(15);                       
    }    
    
   //hiding hand
    for(pos = 180; pos>=50; pos-=5)      
    {                                
    handServo.write(pos);               
    delay(60);                        
    } 
      
   //hiding door
    for(pos = 100; pos<=180; pos+=3)     
    {                                
    doorServo.write(pos);              
    delay(15);                        
   }  
   }

 

   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// basic move slow
   void switchoffallslow() 
   {    
    
   //Moving door
    for(pos = 180; pos > 100; pos -= 3)   
    {                                   
    doorServo.write(pos);              
    delay(60);                       
    }
   
   //Moving hand
    for(pos = 50; pos<=180; pos+=2)      
    {                                
    handServo.write(pos);               
    delay(60);                        
    } 
   delay(1000);
    //Hiding hand
    for(pos = 180; pos > 50; pos -= 2)  
    {                                   
    handServo.write(pos);               
    delay(60);                       
   }  
      
    //hiding door
    for(pos = 100; pos<=180; pos+=3)     
    {                                
    doorServo.write(pos);              
    delay(60);                      
    } 
   } 

      /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// basic move 
   void switchoff1() 
   {    
    
   //Moving door
    for(pos = 180; pos > 100; pos -= 3)   
    {                                   
    doorServo.write(pos);              
    delay(15);                       
    }
   
   //Moving hand
    for(pos = 50; pos<=120; pos+=2)      
    {                                
    handServo.write(pos);               
    delay(15);                        
    } 
   delay(2000);
    //Hiding hand
    for(pos = 120; pos > 50; pos -= 2)  
    {                                   
    handServo.write(pos);               
    delay(15);                       
   }  
      
    //hiding door
    for(pos = 100; pos<=180; pos+=3)     
    {                                
    doorServo.write(pos);              
    delay(15);                      
    } 
   //Moving door
    for(pos = 180; pos > 100; pos -= 3)   
    {                                   
    doorServo.write(pos);              
    delay(10);                       
    }
   
   //Moving hand
    for(pos = 50; pos<=180; pos+=2)      
    {                                
    handServo.write(pos);               
    delay(10);                        
    } 
   
    //Hiding hand
    for(pos = 180; pos > 50; pos -= 2)  
    {                                   
    handServo.write(pos);               
    delay(10);                       
   }  
      
    //hiding door
    for(pos = 100; pos<=180; pos+=3)     
    {                                
    doorServo.write(pos);              
    delay(10);                      
    } 
}
       /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
   void switchoff2() 
   {    
    
   //Moving door
    for(pos = 180; pos > 100; pos -= 3)   
    {                                   
    doorServo.write(pos);              
    delay(15);                       
    }
   
   //Moving hand
    for(pos = 50; pos<=180; pos+=2)      
    {                                
    handServo.write(pos);               
    delay(15);                        
    } 
   delay(3000);
    //hiding door half
    for(pos = 100; pos<=140; pos+=3)     
    {                                
    doorServo.write(pos);              
    delay(15);                      
    } 
    delay(2000);
    //Moving door
    for(pos = 140; pos > 100; pos -= 3)   
    {                                   
    doorServo.write(pos);              
    delay(15);                       
    }
    
    //Hiding hand
    for(pos = 180; pos > 50; pos -= 2)  
    {                                   
    handServo.write(pos);               
    delay(40);                       
   }  
      
    //hiding door
    for(pos = 100; pos<=180; pos+=3)     
    {                                
    doorServo.write(pos);              
    delay(40);                      
    } 
   } 

   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// basic move 
   void switchoffmarys() 
   {    
    
   //Moving door
    for(pos = 180; pos > 100; pos -= 3)   
    {                                   
    doorServo.write(pos);              
    delay(15);                       
    }
   
//Moving hand
    for(pos = 50; pos<=100; pos+=2)      
    {                                
    handServo.write(pos);               
    delay(15);                        
    } 
   
    //Hiding hand
    for(pos = 100; pos > 70; pos -= 2)  
    {                                   
    handServo.write(pos);               
    delay(15);                       
   }  
delay(1000);
//Moving hand
    for(pos = 70; pos<=120; pos+=2)      
    {                                
    handServo.write(pos);               
    delay(15);                        
    } 
   
    //Hiding hand
    for(pos = 120; pos > 100; pos -= 2)  
    {                                   
    handServo.write(pos);               
    delay(15);                       
   } 
delay(1000);
//Moving hand
    for(pos = 100; pos<=140; pos+=2)      
    {                                
    handServo.write(pos);               
    delay(15);                        
    } 
   
    //Hiding hand
    for(pos = 140; pos > 120; pos -= 2)  
    {                                   
    handServo.write(pos);               
    delay(15);                       
   } 
delay(1000);

//Moving hand
    for(pos = 120; pos<=180; pos+=2)      
    {                                
    handServo.write(pos);               
    delay(15);                        
    } 
   
    //Hiding hand
    for(pos = 180; pos > 50; pos -= 2)  
    {                                   
    handServo.write(pos);               
    delay(15);                       
   }
      
    //hiding door
    for(pos = 100; pos<=180; pos+=3)     
    {                                
    doorServo.write(pos);              
    delay(15);                      
    } 
   } 
   
   
