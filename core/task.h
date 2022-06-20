struct Task{
  
  struct promise_type{
    
    ~promise_type(){}
    
    Task get_return_object(){
      return Task(std::coroutine_handler<promise_type>::from_promise(*this);
    }
    
    void return_void(){
      ;
    }
    
    std::suspend_never initial_suspend(){
      return {};
    }
    
    std::suspend_always final_suspend(){
      return {};
    }
    
    void unhandled_exception(){
     ; 
    }
    
  };
  
  
  
};
