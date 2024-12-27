/*
File Name:「医院规则怪谈」2
IDE:
language:C++11 and C++14 (.cpp)
Last Update Time: 2024/12/01 
Production:2029huangtianyou、Dev-C++ 5.7.1 and Dev-C++ 5.11 and VS Code。
2028wangzishuo (王梓硕 东营市胜利第一小学（履刑者）)  2029zhangzhentian (张贞天_东营区行知实验学校) 赞助播出
*/
#include<iostream>
#include<windows.h>
using namespace std;
int x;

void Color(int a);
void wt();
void tc();
void shubiaolh(long long n);
int main()
{
	system("title 医院规则怪谈 2");
	system("color 0f");
    cout<<"                 医院规则怪谈 ";
    Color(4);
    cout<<"2";
    Color(0);
    cout<<"\n                Start(1)  Exit(2)  \n>>"; 
    cin>>x;
    while(x!=1&&x!=2)
    {
   	  cout<<"啊啊啊啊！都第二部了你还是不会输1和2！！！nm！！！"<<endl;
   	  cout<<">>";
   	  cin>>x;
    }
    Sleep(1000);
    if(x==1)
    {
      system("color 0f");
      system("cls");
      cout<<"提示：按\"↓\"键继续对话。（时间等输出不用）\n";
      Sleep(500);
      cout<<"经历了上次的事件后，你们总算平静了一段时间。";
	  wt();
	  cout<<"但是，最近的医院怪事越来越多...";
	  wt();
	  cout<<"时间:2024年11月30日 08:12 地点:医院门诊楼内 天气:?\n";
	  Sleep(1000);
	  cout<<"你:唉，又来上班了...自从上次的事后，我可不敢再待在住院部了，赶紧调到门诊问诊台...";
	  wt();
	  cout<<"病人1:哎，护士，请问住院部怎么走？";
	  wt();
	  cout<<"你:啊，出门往左拐，再往西走200米就到了。";
	  wt();
	  cout<<"病人1:好，谢谢你。";
	  wt();
	  cout<<"(那个病人出门走了，恍惚见，你感觉那个病人有点像4个月前离开的那位精神病患者...)";
	  wt(); 
	  cout<<"你:(...那是...)";
	  wt();
	  cout<<"你:(唉，一定是最近工作压力太大了，出现幻觉了吧...)";
	  wt();
	  cout<<"(之后的三天，风平浪静，什么也没有发生。)";
	  wt();
	  cout<<"(又到了你值夜班的日子了。)";
	  wt();
	  cout<<"时间:2024年12月3日 20:24 地点:医院急诊楼内 天气:?\n";
	  Sleep(1000);
	  cout<<"(你又来值夜班了。)";
	  wt();
	  cout<<"(这时，外面起了大雾，出现了一个模糊的人影...)";
	  wt(); 
	  cout<<"(你顿时紧张起来，全身的汗毛都立了起来...)";
	  wt();
	  cout<<"你:谁？";
	  wt();
	  cout<<"              走上前查看(1)    静等着(2)\n>>";
	  cin>>x;
	  if(x==1)
	  {
		cout<<"(你走了过去。)";
		wt();
		cout<<"(那个人就站在你面前，你很紧张，但只能强装镇定。)";
	  }
	  else
	  {

	  }
	}
	if(x==2)
	{
	  tc();
	}
    return 0;
}
//函数部分！ 
void tc()//退出  
{
	cout<<"再见。";
}
void shubiaolh(long long n)//鼠标乱晃 
{
	int i; 
	int x=GetSystemMetrics(SM_CXSCREEN);   
	int y=GetSystemMetrics(SM_CYSCREEN);//初始化鼠标乱晃 
for(i=0;i<n;i++)            //执行n次! 
	{ 
	  for(int i=1;i<=2;i++) 
	    SetCursorPos(rand()%y,rand()%x);//鼠标乱晃 
	}
}
void Color(int a)//颜色 
{
    if(a==0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
    if(a==1) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);
    if(a==2) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
    if(a==3) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE);
    if(a==4) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
    if(a==5) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
    if(a==6) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
    if(a==7) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN);
    if(a==8) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
    if(a==9) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|BACKGROUND_INTENSITY|BACKGROUND_RED);
    if(a==10) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE|BACKGROUND_INTENSITY|BACKGROUND_BLUE);
}
void wt()//等待 
{
	while(1)
	{
	  if(GetAsyncKeyState(VK_DOWN))
	    break;	
	} 
	Sleep(500);
	cout<<"\n";
	return;
} 
