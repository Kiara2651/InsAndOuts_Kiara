//Kiara Wright
//Galick Gun
//9,27,18
PImage img;
float offset = 0 ;
float easing = 0.05;
float fadein = 0;
float fadeout = 1;
//PImage img2; 
void setup(){
  size(570,420);
  textAlign(CENTER);
  textSize(44);
  img = loadImage("vegeta2.jpg");
  //img = loadImage("Mario.png");
}

void draw(){
 image(img, 0,0);
 fill(fadein);
  text ("GALICK GUN!!!", width/2, height/2 - 50);  //displays text
  fadein= fadein+fadeout;
  if (fadein> 255 || fadein< 0) {
    fadeout= -fadeout;
  }   
  //image(img2, 0,0);
  float dx = (mouseX-img.width/2) - offset;
  offset += dx * easing; 
  tint(255, 127);  // Display at half opacity
  image(img, offset, 0);
  
  println("mouseX: " + mouseX);
  println("mouseY: " + mouseY);
}
