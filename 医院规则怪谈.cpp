//完整版！！！
#include<bits/stdc++.h>
#include<windows.h>
#include<time.h>   
#include<conio.h>
int p;
using namespace std;
void tc();
int shubiaolh(long long);
void Color(int);
void x23();
int main()
{
   int x1,x2,x3;
   system("color 0f");
   cout<<"                        医院规则怪谈"<<endl;
   cout<<"                  Start(1)      exit(2)"<<endl;
   cout<<">>";
   cin>>p; 
   
   while(p!=1&&p!=2)
   {
   	 cout<<"都说了要输1和2！1和2！nm!"<<endl;
   	 cout<<">>";
   	 cin>>p;
   }
   if(p==2)
   {
   	 tc();
   }
   if(p==1)
   {
   	 Sleep(2300);
   	 system("cls");
   	 cout<<"你是一家小医院的护士..."<<endl; 
   	 Sleep(2300); 
   	 cout<<"一天，你正在值夜班..."<<endl; 
	 Sleep(2300); 
   	 cout<<"时间:2024年8月3日 23:16 地点:医院住院部内 天气:?"<<endl; 
   	 Sleep(2300); 
   	 cout<<"你:啊 啊啊 啊啊啊 什么时候才下班啊..."<<endl;
	 Sleep(2300); 
   	 cout<<"医生:张护士，来推一下2号床。"<<endl; 
   	 Sleep(2300); 
   	 cout<<"你:来了!"<<endl;
   	 Sleep(2300); 
   	 cout<<"(恍惚间，你似乎听见床上躺着的病人说:去4号仓库！去4号仓库！)"<<endl;
   	 Sleep(2300); 
   	 cout<<"你:什么？"<<endl;
   	 Sleep(2300); 
   	 cout<<"医生:怎么了？"<<endl;
   	 Sleep(2300); 
   	 cout<<"你:啊....     (1)没事。  (2)我好像听见...有人在叫我..."<<endl;
   	 cout<<">>";
	 cin>>x1; 
	 if(x1==2)
	 { 
	 Sleep(2300); 
   	 cout<<"医生:是不是累到了？"<<endl;
   	 Sleep(2300); 
   	 cout<<"医生:你可要好好休息，不要为了钱伤了身体。"<<endl;
   	 Sleep(1000); 
	 cout<<"时间:2024年8月3日 23:22 地点:医院住院部病房内 天气:?"<<endl;  
   	 Sleep(2300); 
   	 cout<<"(你们一起把床推进了病房...)"<<endl;
   	 Sleep(2300); 
   	 cout<<"医生:把床放这里。"<<endl;
   	 Sleep(2300); 
   	 cout<<"医生:好，你回去休息吧。"<<endl;
   	 Sleep(2300); 
   	 cout<<"你:恩，好。"<<endl;
   	 } 
	 if(x1==1)
	 { 
	 Sleep(1000); 
	 cout<<"时间:2024年8月3日 23:22 地点:医院住院部病房内 天气:?"<<endl; 
	 cout<<"(你们一起把床推进了病房...)"<<endl;
	 Sleep(2300); 
   	 cout<<"医生:把床放这里。"<<endl;
   	 Sleep(2300); 
   	 cout<<"医生:好，你回去休息吧。"<<endl;
   	 Sleep(2300); 
   	 cout<<"你:恩，好。"<<endl;
   	 } 
   	 Sleep(2300); 
   	 cout<<"(你看了一眼麻药劲还没过在床上睡觉的病人...)"<<endl;
   	 Sleep(2300);
   	 cout<<"你:(他刚才真的叫我了吗？)"<<endl;
   	 Sleep(2300);
   	 cout<<"你:要去...4号仓库吗..."<<endl;
   	 Sleep(2300);
   	 cout<<"           去(1)   不去(2)"<<endl;
   	 cout<<">>";
	 cin>>x1;
	 if(x1==2)
	 {
	 	cout<<"(你没有去。)"<<endl;
   	    Sleep(2300);
   	    cout<<"你度过了一个晚上，到了早上6:30,你下班了。"<<endl;
   	    Sleep(2300);
   	    cout<<"                 达成结局:安全度过"<<endl;
   	    Sleep(2300);
   	    cout<<"                      游戏结束！"<<endl;
   	    Sleep(2300);
   	    cout<<"                      感谢游玩！"<<endl;
   	    Sleep(2300);
   	    return 0; 
	 } 
	 if(x1==1)
	 {
	 	cout<<"(你去了4号仓库，走了进去...)"<<endl;
   	    Sleep(1500);
	    cout<<"时间:2024年8月3日 23:25 地点:医院4号仓库 天气:阴"<<endl; 
   	    cout<<"(这个仓库不知什么原因突然废弃了...)"<<endl;
   	    Sleep(1500);
   	    cout<<"(你打开手电筒)"<<endl;
   	    Sleep(1500);
   	    cout<<"(灯光让你的心里有了一点安慰。)"<<endl;
   	    Sleep(1500);
   	    cout<<"(你走到了一个墙边)"<<endl;
   	    Sleep(1500);
   	    cout<<"(上面有一些鬼画符...)"<<endl;
   	    Sleep(1500);
   	    cout<<"(你试着翻译了一下...)"<<endl;
   	    Sleep(3000);
   	    cout<<"(上面写着)"<<endl;
   	    Sleep(1500);
   	    system("cls");
   	    Sleep(1500);
   	    shubiaolh(300); 
   	    cout<<"hi 我不知道你为什么来到了这里 但是请记住 遵守下面的规则 你才能活下去"<<endl;
   	    Sleep(2500);
   	    cout<<"1.请不要相信穿蓝粉衣服的护士"<<endl;
   	    Sleep(2500);
   	    cout<<"2.在24:00时，可能会有一位乞丐来，看见尽量不要与他对视，不要理他。"<<endl;
   	    Sleep(2500);
   	    cout<<"3.只有18:00~20:00家属才可以进入病房，如果在其他时间段看见穿蓝色条纹裤，上衣白大褂的人，请慢慢逃走，寻求医生的帮助。不要理他。"<<endl;
   	    Sleep(2500);
   	    Color(4); 
   	    cout<<"4.放心，这里没什么可以伤到你"<<endl;
   	    Sleep(2500);
		Color(0); 
   	    cout<<"你:(这是什么？)"<<endl;
   	    Sleep(2500);
   	    cout<<"你:(是...恶作剧吗...)"<<endl;
   	    Sleep(2500);
   	    cout<<"你:(应该是吧...)"<<endl;
   	    Sleep(2500);
   	    system("cls");
		Sleep(1000); 
	    cout<<"时间:2024年8月3日 23:59 地点:医院住院部内 天气:?"<<endl;  
   	    cout<<"(你回到了护士台)"<<endl;
   	    Sleep(2500);
   	    cout<<"你:(应该没事。)"<<endl;
   	    Sleep(2500);
   	    cout<<"(这时，午夜12点的闹钟响了...)"<<endl;
   	    Sleep(2500);
   	    cout<<"(门口出现了一个人...)"<<endl;
   	    Sleep(2500);
   	    cout<<"          走上前去查看(1)            装作没看见(2)"<<endl; 
   	    cout<<">>";
   	    cin>>x2;
   	    if(x2==1)
   	    {
   	      cout<<"(你走了上去)"<<endl;
   	      Sleep(2500);
   	      cout<<"(乞丐突然化作一道黑气，将你吞噬了...)"<<endl;
   	      shubiaolh(10000); 
   	      Sleep(2500);
   	      cout<<"你违反了第2条规则..."<<endl;
   	      Sleep(2500);
   	      cout<<"                  达成结局：他是谁？"<<endl;
   	      Sleep(2500);
   	      cout<<"                      游戏结束！"<<endl;
   	      Sleep(2300);
   	      cout<<"                      感谢游玩！"<<endl;
   	      Sleep(2300);
   	      return 0; 
   	  
   	    }
   	    if(x2==2)
   	    {
   	      cout<<"(你装作没有看见他...)"<<endl;
   	      Sleep(2300);
   	      cout<<"(过了一会,他走了...)"<<endl;
   	      Sleep(2300);
   	      cout<<"时间:2024年8月4日 00:37 地点:医院住院部内 天气:?"<<endl;
   	      cout<<"医生:张护士，跟我一起去取个货。"<<endl; 
   	      cout<<"                去(1)      不去(2)"<<endl; 
   	      cout<<">>";
   	      cin>>x2;
   	      if(x2==3)
   	      {
   	      	x23();
			  
   	      }
   	      if(x2==2)
   	      {
   	      	cout<<"你:啊 我还有事 你先找别人吧。"<<endl;
   	    	Sleep(2300);
   	    	cout<<"(你工作累了，望向窗外，在窗外有一个飘飘忽忽的影子，你很疑惑)"<<endl;
   	    	Sleep(2300);
   	    	cout<<"(突然，影子化作一道黑雾，将你吞噬。)"<<endl; 
			Sleep(2000);
			cout<<"                    你违反了第3条规则！"<<endl; 
   	    	cout<<"                    达成结局:窗外人"<<endl;
   	    	Sleep(2300);
   	    	cout<<"                      游戏结束！"<<endl;
   	    	Sleep(2300);
   	    	cout<<"                      感谢游玩！"<<endl;
   	    	Sleep(2300);
   	    	return 0;
   	      }
   	      if(x2==1)
		  {
		  	cout<<"你:啊...好。"<<endl;
   	    	Sleep(2300);
   	    	cout<<"(你跟着医生一起来到了外面...)"<<endl;
   	    	Sleep(1000); 
   	    	cout<<"时间:2024年8月4日 00:43 地点:医院内 天气:阴"<<endl;
   	    	cout<<"(你们来到了一辆大卡车前...)"<<endl;
   	    	Sleep(2300);
   	    	cout<<"拉货师傅:啊，这堆是你们的，把运费结一下就可以拿走了。"<<endl;
   	    	Sleep(2300);
   	    	cout<<"(医生支付了运费...)"<<endl;
   	    	Sleep(2300);
   	    	cout<<"(你们把货拿了回去...)"<<endl;
   	    	Sleep(2300);
   	    	cout<<"(在离开时，你看见了一个穿蓝色条纹裤，上衣白大褂的人...)"<<endl;
   	    	Sleep(3000);
   	    	shubiaolh(10);
   	    	system("cls");
   	    	Sleep(1000);
   	    	cout<<"Tie:謰羟  地点:G奆灵圙冾冿凒r G奆圙奆灵圙气:Y塃?莟媠鼉?塽潆媢淝E"<<endl;
   	    	Sleep(100);
   	    	system("cls");
			cout<<"时间:2024年8月4日 00:51 地点:医院住院部内 天气:?"<<endl;  
			cout<<"(你跟医生一起回到了住院部)"<<endl; 
			Sleep(2000);
			cout<<"你:(刚才那是什么？)"<<endl; 
			Sleep(2000);
			cout<<"你:(要告诉医生吗？)"<<endl; 
			Sleep(2000);
			cout<<"                    告诉(1)          不告诉(2)"<<endl; 
			Sleep(2000);
			cout<<">>";
			cin>>x3;
			if(x3==2)
			{
			  cout<<"(你没有告诉他。)"<<endl; 
			  Sleep(2000);
			  cout<<"(2:00的钟声敲响了...)"<<endl; 
			  Sleep(2000);
			  cout<<"(一股黑雾朝你袭来，你被黑雾吞噬了。)"<<endl; 
			  Sleep(2000);
			  cout<<"                     你违反了第3条规则！"<<endl; 
   	    	  cout<<"                    达成结局:还是...跑不掉啊..."<<endl;
   	    	  Sleep(2300);
   	    	  cout<<"                      游戏结束！"<<endl;
   	    	  Sleep(2300);
   	    	  cout<<"                      感谢游玩！"<<endl;
   	    	  Sleep(2300);
   	    	  return 0;
			}
			if(x3==1)
			{
			  cout<<"(你全部告诉了他...)"<<endl; 
			  Sleep(2000);
			  cout<<"医生:恩...看来他又重现人间了..."<<endl; 
			  Sleep(2000);
			  cout<<"(从医生口中，你了解到了这么一个故事...)"<<endl; 
			  Sleep(2000);
   	    	  cout<<"(在4年前，有一位精神病患者，在医院内受欺负...)"<<endl;
   	    	  Sleep(1500);
   	    	  cout<<"(几乎每天都要被打...)"<<endl;
   	    	  Sleep(1500);
   	    	  cout<<"(他的爸妈报警，各种上诉，却都以是鸡毛蒜皮的小事输了)"<<endl;
   	    	  Sleep(1500);
   	    	  cout<<"(过了一段时间，他的爸妈被人谋杀了...)"<<endl;
   	    	  Sleep(1500);
   	    	  cout<<"(他也自杀了，但还是痛恨着这座医院，于是就一直在这座医院徘徊...)"<<endl;
   	    	  Sleep(1500);
   	    	  cout<<"医生:你之前看到的规则其实是上一位被他杀死的人写的..."<<endl;
   	    	  Sleep(1500);
   	    	  cout<<"(医生叫来了以前的道士，准备封印他...)"<<endl;
   	    	  Sleep(1500);
   	    	  cout<<"     继续(1)    阻止他(2)"<<endl;
   	    	  cout<<">>";
   	    	  cin>>x3;
   	    	  if(x3==1)
   	    	  {
   	    	  	cout<<"(道士把他封印起来了...)"<<endl;
				Sleep(1500);
				cout<<"(可是，这样真的可以吗？)"<<endl;
				Sleep(1500);
				cout<<"6年后..."<<endl;
				Sleep(1500); 
				cout<<"时间:2030年8月6日 2:00 地点:医院住院部内 天气:?"<<endl;  
				Sleep(1500); 
				cout<<"医生:张护士，跟我一起去取个货。"<<endl; 
				Sleep(2300); 
				cout<<"你:啊 我还有事 你先找别人吧。"<<endl;
   	    		Sleep(2300);
   	    		cout<<"(你工作累了，望向窗外，在窗外有一个飘飘忽忽的影子，你很疑惑)"<<endl;
   	    		Sleep(2300);
   	    		cout<<"(突然，影子化作一道黑雾，将你吞噬。)"<<endl; 
				Sleep(2000);
   	    		cout<<"              达成最终结局2:这样...真的可行吗？"<<endl;
   	    		Sleep(2300);
   	    		cout<<"                      游戏结束！"<<endl;
   	    		Sleep(2300);
   	    		cout<<"                      感谢游玩！"<<endl;
   	    		Sleep(2300);
   	    		return 0;  
   	    	  }
   	    	  if(x3==2)
   	    	  {
   	    	  	cout<<"你:等一等"<<endl;
				Sleep(1500);
				cout<<"医生&道士:嗯？"<<endl;
				Sleep(1500);
				cout<<"你:这样并不能解决他心里。"<<endl;
				Sleep(1500); 
				cout<<"医生&道士:...确实"<<endl;  
				Sleep(1500); 
				cout<<"(医生开导中...)"<<endl; 
				Sleep(2300); 
				cout<<"医生:...你已经改变不了现实了，为什么不带着期待去开启新的一生呢？"<<endl;
   	    		Sleep(2300);
   	    		cout<<"(他消失不见了...)"<<endl;
   	    		Sleep(2300);
   	    		cout<<"你:...再见"<<endl; 
				Sleep(2000);
   	    		cout<<"                达成最终结局1:...再见"<<endl;
   	    		Sleep(2300);
   	    		cout<<"                      游戏结束！"<<endl;
   	    		Sleep(2300);
   	    		cout<<"                      感谢游玩！"<<endl;
   	    		Sleep(2300);
   	    		return 0; 
   	    	  }
			} 
		  }
   	    }
	 }
   } 

    return 0; 
} 
//函数部分！ 
void tc()//退出  
{
  system("cls");
   	 Sleep(500);
   	 system("color f0");
   	    cout<<endl<<endl<<endl<<endl<<"                        医院规则怪谈    exit(2)"<<endl;
        cout<<"                  Start(1)      "<<endl;
    Sleep(1000);
       	 system("cls");
       	 system("color 1f");
   	 Sleep(500);
   	 system("color 0f");
   	 cout<<endl<<endl<<"                                       exit(2)"<<endl;
   	    cout<<endl<<endl<<endl<<endl<<"                        医院规则怪谈"<<endl;
        cout<<"                  Start(1)      "<<endl;
    Sleep(1000);
       	 system("cls");
       	 system("color f0");
   	 Sleep(500);
       	 system("cls");
       	 system("color 0f");
   	 Sleep(500);
   	 system("color 0f");
   	 cout<<"                                       exit(2)"<<endl;
   	    cout<<endl<<endl<<endl<<endl<<"                        医院规则怪谈"<<endl;
        cout<<"                  Start(1)      "<<endl;
    Sleep(1000);
       	 system("cls");
       	 system("color c1");
   	 Sleep(500);
     shubiaolh(100000);
   	 system("color 0f");
   	    cout<<"                        医院规则怪谈  "<<endl;
        cout<<"                  Start(1)      "<<endl;
        cout<<">>";
     	cin>>p;
}
int shubiaolh(long long n)//鼠标乱晃 
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
    if(a==10) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE|BACKGROUND_INTENSITY|BACKGROUND_BLUE);}void x23(){system("cls");Color(4);cout<<"警报:系统发现泭Ll奃出现错误，即将清除..."<<endl;cout<<"(你装作M裑J �  ?  ...)"<<endl;Sleep(2300);cout<<"(过了一会,u踬泭RichE泭走了...)"<<endl;Sleep(2300);cout<<"时2h4僆僄侳�FE~E{B{Ay@x@: 缨g应f姚f应f谣f靴f肖 地点:赚wKC Q)S+P [/^5爚e奣抃气:6h5i6"<<endl;cout<<"医生:h谘扔事滢谲瘴坪护士，跟R擽(uz廭錘瀀燫一起去取$嶲#峆$婲奙祲Q簮[矀F竵:聣@羾@瞴6U焹h谘扔事滢谲瘴坪叭即"<<endl; cout<<"                燫颯(u匭X[�6qT峇諎 (CFF~E)      誓丝服(昖&淸)"<<endl; cout<<"??";Sleep(2000);cout<<"你死了..."<<endl;Sleep(1000);cout<<"达成隐藏结局:System Error"<<endl;Sleep(2000);cout<<"            游戏结束！"<<endl;Sleep(2000);cout<<"            感谢游玩！"<<endl;}

