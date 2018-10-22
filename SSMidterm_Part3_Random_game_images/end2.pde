void end2(){
  
  if (state== "End2"){
    //background (255);
    text("Lets make some squares appear.",width/2, height/2 );
    text("press Q to go back to the start.",width/2, height/2+50);
    //patterns
   
  if ( mousePressed ==true){
    frameRate(30);
      fill(random(0,255), random(0,255),random(0,255));
      //Using rectmode center throws off the calibration of the Mario sketch
     // rectMode(CENTER);
      rect(mouseX,mouseY,size ,size);
    //  fill(0);
     // ellipse(mouseX,mouseY,size ,size);
    }
    if(size <= 25){
      size = size + 10;
    } else if (size >= 50){
      size = 10;
    } else {
        size = size + 10;
    }
    
    
  }
  println (state); 

  
  
}
