#include <iostream>
#include <Windows.h>
#include "operate.h"
#include "display.h"
#include "util.h"
#include "difficultyLevel.h"


using std::cout;
using std::cin;
using std::endl;
using std::string;

//键盘输入监听 包括方向键
void keyEvent(int key, int x, int y)
{
	bool flag = false;

	switch (key)
	{
	case GLUT_KEY_UP:	flag = operate_UP();	break;
	case GLUT_KEY_DOWN: flag = operate_DOWN();	break;
	case GLUT_KEY_LEFT: flag = operate_LEFT();	break;
	case GLUT_KEY_RIGHT:flag = operate_RIGHT(); break;
	}

	if (flag)
		glutPostRedisplay();
}


//主函数
int main(int argc, char** argv)
{

	initRand();
	
	initData();
	int d;

	cout << "请 选 择 难 度 ：" << endl << endl;
	cout << "0     白   痴" << endl << endl;
	cout << "1     简   单" << endl << endl;
	cout << "2     普   通" << endl << endl;
	cout << "3     困   难" << endl << endl;
	cout << "4     变   态" << endl << endl;
	cin >> d;
	while (d != 0 && d != 1 && d != 2 && d != 3 && d != 4)
	{
		cout << "输入不合法，请重新选择难度  0 1 2 3 4" << endl;
		cin >> d;
	}

	difficulty(d);

	glutInit(&argc, argv);  //对GLUT进行初始化,必须一开始就初始化
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);  //设置显示方式
	glutInitWindowPosition(400, 100);  //设置程序窗口在屏幕中的位置
	glutInitWindowSize(400, 400);  //设置程序窗口的大小
	glutCreateWindow("2048");  //给程序窗口添加标题
	//启用纹理
	glEnable(GL_TEXTURE_2D);
	Init();
	glutSpecialFunc(&keyEvent);  //注册键盘事件
	glutMainLoop();  //启动消息循环后程序运行起来
	glDisable(GL_TEXTURE_2D);
	
	return 0;
}




