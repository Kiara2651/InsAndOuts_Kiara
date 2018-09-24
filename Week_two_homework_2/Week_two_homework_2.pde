// Kiara Wright
// Homework assignment # 1
// Title: interactive House by Kiara Wright


//for the house that is going to change color when any key is pressed
int end = #640000;
//for the rectangle that is going to change color when the mouse is pressed 
int value = 0;
//for the rectangle that moves 
float move= 0.1;


void setup(){
//size(width, height)
size(1080, 720);
}

void draw(){
background(0, 150, 500); //background(r--red, g--green, b--blue);

//cloud1

noStroke(); 
fill(255);
ellipse(58, 80 ,100,100);
fill(255);
ellipse(140, 80 ,100,100);
fill(255);
ellipse(98, 55 ,100,100);

//cloud2
ellipse(500, 80 ,100,100);
ellipse(580, 80 ,100,100);
ellipse(550, 55 ,100,100);

//cloud3
ellipse(800, 80 ,100,100);
ellipse(900, 80 ,100,100);
ellipse(850, 55 ,100,100);

//ground
stroke(0,0,0); 
fill(0, 100, 0);//fill(r,g,b); same as background
rect(0, 600,1080, 130);

//square moves on the ground 
//creates a rectangle using move variable for X position
fill(400,0,0);
rect(move, 600, 20,20);
fill(0,0,400);
rect(move, 630, 20, 20);
fill(400,0,0);
rect(move , 660, 20, 20);
fill(0,0,400);
rect(move, 690, 20 ,20);
move = move+0.1;
println("move: " + move);


//houes 
strokeWeight(4);
fill(end);
rect(400,200,350, 400);

//steps
//step1 
fill(100, 60, 0);
rect(425, 550, 300, 50);

//step2
fill(100, 60, 0);
rect(450, 500, 250, 50);

//door boarder 
fill(0,0,0);
rect(500, 300, 150, 200);

fill(100, 0, 0);
rect(525, 320, 100, 180);

//door knob
fill(0, 90, 0);
ellipse(600, 430, 20, 20);//ellipse(x1, y1, width, height);

//roof will change color = int value =0 
fill(value);
triangle(380,200,580,50,770,200);

}

void mousePressed(){
  if(value == 0){
    value = #10A275;
  } else {
    value = 0;
  }
}

void keyPressed(){
  if(end == #E8E100){
   end = #640000;
  } else {
    end = #E8E100;
  }
}
