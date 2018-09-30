// Kiara Wright
// Homework assignment # 1
// Title: House by Kiara Wright

//size(width, height)
size(1080, 720);
background(0, 150, 500); //background(r--red, g--green, b--blue);

//cloud1

noStroke(); 
ellipse(58, 80 ,100,100);
ellipse(140, 80 ,100,100);
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

//houes 
strokeWeight(4);
fill(100,0,0);
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
fill(0, 0, 0);
ellipse(600, 430, 20, 20);//ellipse(x1, y1, width, height);

//roof
fill(0, 0, 0);
triangle(380,200,580,50,770,200);
