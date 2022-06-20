
#include "tash.h"
#include "dispacher"

Task task1(){
  while(true){
    
   /* do process 1 */
    co_await std::suspend_always;  
    
  }
  
  
}

Task task2(){
  
  while(true){
    
   /* do process 2 */
    co_await std::suspend_always; 
    
  }
  
}

void main(){
  
  Dispacher simple_dispacher;
  
  auto t1=task1();
  auto t2=task2();  
  
  simple_dispacher.addTask(&t1);
  simple_dispacher.addTask(&t2);
  
  simple_dispacher.start();
  

  
}
