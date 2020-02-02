# include "iGraphics.h"

int x=1, y=0, r=50,p=50,q=565;
int n=510,dx,dy;
/*
	function iDraw() is called again and again by the system.

	*/

void iDraw() {
	//place your drawing codes here
	iClear();
	iSetColor(20, 200, 200);
	iFilledRectangle(x,y,120,10);
	iLine(x,y,x,y+50);
	iLine(x+120,y,x+120,y+50);
	iSetColor(20, 200, 200);
	iFilledRectangle(0,500,1500,10);
	iSetColor(0,0,255);
	iFilledEllipse(p,q,35,50);
	iSetColor(255,0,0);
	iFilledCircle(p,q+50,r/2);
	iSetColor(0,0,0);
	iFilledCircle(p-8,q+55,r/10);
	iSetColor(0,0,0);
	iFilledCircle(p+8,q+55,r/10);
	iSetColor(184,134,11);
	iFilledCircle(p,n,r/5);//egg




	//iFilledRectangle(10, 30, 20, 20);
//	iSetColor(20, 200, 0);
//	iText(40, 40, "Hi, I am iGraphics");
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my) {
//	printf("x = %d, y= %d\n",mx,my);
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my) {
//	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
//		//place your codes here
//		//	printf("x = %d, y= %d\n",mx,my);
//		x += 10;
//		y += 10;
//	}
//	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
//		//place your codes here
//		x -= 10;
//		y -= 10;
//	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key) {
	if (key == 'q') {
		exit(0);
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenever user hits special keys like-
	function keys, home, end, pg up, pg down, arrows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key) {

	if (key == GLUT_KEY_RIGHT) {
		x+=20;}
    if(key==GLUT_KEY_LEFT){
        x-=20;
	}
	if(x>1380)
        x=1380;
    if(x<1)
        x=1;
	//place your codes for other keys here
}
void eggChange(){

	n-= dy;
	if(n<10)
        n=510;
//
//	if(ball_x > 400 || ball_x < 0)dx = -dx;
//	if(ball_y > 400 || ball_y < 0)dy = -dy;
}
void objchange()
{
    p+=dx;
    if(p>1400||p<100)
        dx=-dx;
}


int main() {

	//place your own initialization codes here.
    int t,i;
    srand(time(NULL));
    for( i=0;i<10;i++)
      t=rand()%1000;

    iSetTimer(50, eggChange);
    dy = 10;
    iSetTimer(3200, objchange);
    dx = t;
//    if (p>x&&p<(x+120))
//        n=20;

    iInitialize(1500, 800, "catch the egg!!!");
	return 0;
}
