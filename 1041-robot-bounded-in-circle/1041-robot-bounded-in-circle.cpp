class Solution {
public:
    bool isRobotBounded(string instructions) {
        
        int pin=0;
        for(int i=0; i<instructions.size(); i++){
            if(instructions[i] == 'R'){
                pin = (pin+1)%4;
            }
            else if(instructions[i] == 'L'){
                pin = pin -1;
                if(pin < 0) pin+=4;
            }
        }
        // we got the person will face towards direction of pin
        if(pin == 1 or pin == 2 or pin == 3) return true;
        
        int x=0;
        int y=0;
        char direction ='n';
        
        
        for(int i=0; i<instructions.size(); i++){
            
            if(instructions[i]=='G'){
                if(direction=='n'){
                   y=y+1; 
                }else if(direction=='s'){
                   y=y-1; 
                }else if(direction=='e'){
                   x=x+1; 
                }else{
                   x=x-1; 
                }
            }else{
                if(instructions[i]=='L'){        //left direction instruction
                    if(direction=='n'){
                    direction='w'; 
                    }else if(direction=='s'){
                    direction='e';
                    }else if(direction=='e'){
                    direction='n'; 
                    }else if(direction=='w'){
                    direction='s';
                    } 
                }else if(instructions[i]=='R'){            //right direction 
                    if(direction=='n'){
                      direction='e';
                    }else if(direction=='s'){
                      direction='w'; 
                    }else if(direction=='e'){
                      direction='s'; 
                    }else if(direction=='w'){
                     direction='n';
                   }  
                }
            }
        }
        return (x==0 && y==0)?true:false;
    }
};