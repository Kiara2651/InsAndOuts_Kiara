//Kiara Wright
//Target practice
//for the background color that will be set to random 
float r = 255; 
float g = 255;
float b = 255;
//runs once
void setup(){
  size (1080,720);
  ellipseMode(CENTER);
}

//runs continuosly 
void draw (){
  background(r, g, b);
  //fill(50);
  //ellipse(540, 300, 60, 60);
  //ellipse will have no fill
  noFill();
  strokeWeight(60);
  ellipse(540, 360 , 1200, 1200);
  ellipse(540, 360, 900, 900);
  ellipse(540, 360, 600, 600);
  ellipse(540, 360, 300, 300);
  ellipse(540, 360, 50, 50);
 
  //Dots 
  fill(10);
  strokeWeight(4);
  ellipse(540, 275, 30, 30); //top
  ellipse(540, 450, 30, 30); //bottom
  ellipse(540, 140, 30, 30); //top
  ellipse(540, 590, 30 ,30); //bottom
  ellipse(540, 3, 30,30); //top
  ellipse(540 , 718, 30, 30);//bottom
  ellipse(455, 360, 30,30);//left
  ellipse(625, 360,30,30);//right
  ellipse(325,360,30,30);//left
  ellipse(760, 360, 30, 30);//right
  ellipse(165,360,30,30);//left
  ellipse(905,360,30,30);//right
  ellipse(30,360,30,30);//left
  ellipse(1055,360,30,30);//right
  
  //rollover if else
  fill(#1CBCBB);
   if (mouseX < 100 && mouseY < 100) {
        ellipse(0, 0, 400, 400);
      } else if (mouseX > 100 && mouseY < 100) {
        ellipse(1080, 0, 400, 400);
      } else if (mouseX < 100 && mouseY > 100) {
        ellipse(0, 720, 400, 400);
      } else if (mouseX > 100 && mouseY > 100) {
        ellipse(1080, 720, 400, 400);
      }
} 

void mousePressed(){
  //satement 
  r = random(200, 255);
  g = random(50, 150);
  b = random(0, 100);
}
  
