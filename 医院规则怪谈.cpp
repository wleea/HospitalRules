//�����棡����
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
   cout<<"                        ҽԺ�����̸"<<endl;
   cout<<"                  Start(1)      exit(2)"<<endl;
   cout<<">>";
   cin>>p; 
   
   while(p!=1&&p!=2)
   {
   	 cout<<"��˵��Ҫ��1��2��1��2��nm!"<<endl;
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
   	 cout<<"����һ��СҽԺ�Ļ�ʿ..."<<endl; 
   	 Sleep(2300); 
   	 cout<<"һ�죬������ֵҹ��..."<<endl; 
	 Sleep(2300); 
   	 cout<<"ʱ��:2024��8��3�� 23:16 �ص�:ҽԺסԺ���� ����:?"<<endl; 
   	 Sleep(2300); 
   	 cout<<"��:�� ���� ������ ʲôʱ����°డ..."<<endl;
	 Sleep(2300); 
   	 cout<<"ҽ��:�Ż�ʿ������һ��2�Ŵ���"<<endl; 
   	 Sleep(2300); 
   	 cout<<"��:����!"<<endl;
   	 Sleep(2300); 
   	 cout<<"(��㱼䣬���ƺ������������ŵĲ���˵:ȥ4�Ųֿ⣡ȥ4�Ųֿ⣡)"<<endl;
   	 Sleep(2300); 
   	 cout<<"��:ʲô��"<<endl;
   	 Sleep(2300); 
   	 cout<<"ҽ��:��ô�ˣ�"<<endl;
   	 Sleep(2300); 
   	 cout<<"��:��....     (1)û�¡�  (2)�Һ�������...�����ڽ���..."<<endl;
   	 cout<<">>";
	 cin>>x1; 
	 if(x1==2)
	 { 
	 Sleep(2300); 
   	 cout<<"ҽ��:�ǲ����۵��ˣ�"<<endl;
   	 Sleep(2300); 
   	 cout<<"ҽ��:���Ҫ�ú���Ϣ����ҪΪ��Ǯ�������塣"<<endl;
   	 Sleep(1000); 
	 cout<<"ʱ��:2024��8��3�� 23:22 �ص�:ҽԺסԺ�������� ����:?"<<endl;  
   	 Sleep(2300); 
   	 cout<<"(����һ��Ѵ��ƽ��˲���...)"<<endl;
   	 Sleep(2300); 
   	 cout<<"ҽ��:�Ѵ������"<<endl;
   	 Sleep(2300); 
   	 cout<<"ҽ��:�ã����ȥ��Ϣ�ɡ�"<<endl;
   	 Sleep(2300); 
   	 cout<<"��:�����á�"<<endl;
   	 } 
	 if(x1==1)
	 { 
	 Sleep(1000); 
	 cout<<"ʱ��:2024��8��3�� 23:22 �ص�:ҽԺסԺ�������� ����:?"<<endl; 
	 cout<<"(����һ��Ѵ��ƽ��˲���...)"<<endl;
	 Sleep(2300); 
   	 cout<<"ҽ��:�Ѵ������"<<endl;
   	 Sleep(2300); 
   	 cout<<"ҽ��:�ã����ȥ��Ϣ�ɡ�"<<endl;
   	 Sleep(2300); 
   	 cout<<"��:�����á�"<<endl;
   	 } 
   	 Sleep(2300); 
   	 cout<<"(�㿴��һ����ҩ����û���ڴ���˯���Ĳ���...)"<<endl;
   	 Sleep(2300);
   	 cout<<"��:(���ղ���Ľ�������)"<<endl;
   	 Sleep(2300);
   	 cout<<"��:Ҫȥ...4�Ųֿ���..."<<endl;
   	 Sleep(2300);
   	 cout<<"           ȥ(1)   ��ȥ(2)"<<endl;
   	 cout<<">>";
	 cin>>x1;
	 if(x1==2)
	 {
	 	cout<<"(��û��ȥ��)"<<endl;
   	    Sleep(2300);
   	    cout<<"��ȹ���һ�����ϣ���������6:30,���°��ˡ�"<<endl;
   	    Sleep(2300);
   	    cout<<"                 ��ɽ��:��ȫ�ȹ�"<<endl;
   	    Sleep(2300);
   	    cout<<"                      ��Ϸ������"<<endl;
   	    Sleep(2300);
   	    cout<<"                      ��л���棡"<<endl;
   	    Sleep(2300);
   	    return 0; 
	 } 
	 if(x1==1)
	 {
	 	cout<<"(��ȥ��4�Ųֿ⣬���˽�ȥ...)"<<endl;
   	    Sleep(1500);
	    cout<<"ʱ��:2024��8��3�� 23:25 �ص�:ҽԺ4�Ųֿ� ����:��"<<endl; 
   	    cout<<"(����ֿⲻ֪ʲôԭ��ͻȻ������...)"<<endl;
   	    Sleep(1500);
   	    cout<<"(����ֵ�Ͳ)"<<endl;
   	    Sleep(1500);
   	    cout<<"(�ƹ��������������һ�㰲ο��)"<<endl;
   	    Sleep(1500);
   	    cout<<"(���ߵ���һ��ǽ��)"<<endl;
   	    Sleep(1500);
   	    cout<<"(������һЩ����...)"<<endl;
   	    Sleep(1500);
   	    cout<<"(�����ŷ�����һ��...)"<<endl;
   	    Sleep(3000);
   	    cout<<"(����д��)"<<endl;
   	    Sleep(1500);
   	    system("cls");
   	    Sleep(1500);
   	    shubiaolh(300); 
   	    cout<<"hi �Ҳ�֪����Ϊʲô���������� �������ס ��������Ĺ��� ����ܻ���ȥ"<<endl;
   	    Sleep(2500);
   	    cout<<"1.�벻Ҫ���Ŵ������·��Ļ�ʿ"<<endl;
   	    Sleep(2500);
   	    cout<<"2.��24:00ʱ�����ܻ���һλ��ؤ��������������Ҫ�������ӣ���Ҫ������"<<endl;
   	    Sleep(2500);
   	    cout<<"3.ֻ��18:00~20:00�����ſ��Խ��벡�������������ʱ��ο�������ɫ���ƿ㣬���°״�ӵ��ˣ����������ߣ�Ѱ��ҽ���İ�������Ҫ������"<<endl;
   	    Sleep(2500);
   	    Color(4); 
   	    cout<<"4.���ģ�����ûʲô�����˵���"<<endl;
   	    Sleep(2500);
		Color(0); 
   	    cout<<"��:(����ʲô��)"<<endl;
   	    Sleep(2500);
   	    cout<<"��:(��...��������...)"<<endl;
   	    Sleep(2500);
   	    cout<<"��:(Ӧ���ǰ�...)"<<endl;
   	    Sleep(2500);
   	    system("cls");
		Sleep(1000); 
	    cout<<"ʱ��:2024��8��3�� 23:59 �ص�:ҽԺסԺ���� ����:?"<<endl;  
   	    cout<<"(��ص��˻�ʿ̨)"<<endl;
   	    Sleep(2500);
   	    cout<<"��:(Ӧ��û�¡�)"<<endl;
   	    Sleep(2500);
   	    cout<<"(��ʱ����ҹ12�����������...)"<<endl;
   	    Sleep(2500);
   	    cout<<"(�ſڳ�����һ����...)"<<endl;
   	    Sleep(2500);
   	    cout<<"          ����ǰȥ�鿴(1)            װ��û����(2)"<<endl; 
   	    cout<<">>";
   	    cin>>x2;
   	    if(x2==1)
   	    {
   	      cout<<"(��������ȥ)"<<endl;
   	      Sleep(2500);
   	      cout<<"(��ؤͻȻ����һ������������������...)"<<endl;
   	      shubiaolh(10000); 
   	      Sleep(2500);
   	      cout<<"��Υ���˵�2������..."<<endl;
   	      Sleep(2500);
   	      cout<<"                  ��ɽ�֣�����˭��"<<endl;
   	      Sleep(2500);
   	      cout<<"                      ��Ϸ������"<<endl;
   	      Sleep(2300);
   	      cout<<"                      ��л���棡"<<endl;
   	      Sleep(2300);
   	      return 0; 
   	  
   	    }
   	    if(x2==2)
   	    {
   	      cout<<"(��װ��û�п�����...)"<<endl;
   	      Sleep(2300);
   	      cout<<"(����һ��,������...)"<<endl;
   	      Sleep(2300);
   	      cout<<"ʱ��:2024��8��4�� 00:37 �ص�:ҽԺסԺ���� ����:?"<<endl;
   	      cout<<"ҽ��:�Ż�ʿ������һ��ȥȡ������"<<endl; 
   	      cout<<"                ȥ(1)      ��ȥ(2)"<<endl; 
   	      cout<<">>";
   	      cin>>x2;
   	      if(x2==3)
   	      {
   	      	x23();
			  
   	      }
   	      if(x2==2)
   	      {
   	      	cout<<"��:�� �һ����� �����ұ��˰ɡ�"<<endl;
   	    	Sleep(2300);
   	    	cout<<"(�㹤�����ˣ������⣬�ڴ�����һ��ƮƮ������Ӱ�ӣ�����ɻ�)"<<endl;
   	    	Sleep(2300);
   	    	cout<<"(ͻȻ��Ӱ�ӻ���һ�������������ɡ�)"<<endl; 
			Sleep(2000);
			cout<<"                    ��Υ���˵�3������"<<endl; 
   	    	cout<<"                    ��ɽ��:������"<<endl;
   	    	Sleep(2300);
   	    	cout<<"                      ��Ϸ������"<<endl;
   	    	Sleep(2300);
   	    	cout<<"                      ��л���棡"<<endl;
   	    	Sleep(2300);
   	    	return 0;
   	      }
   	      if(x2==1)
		  {
		  	cout<<"��:��...�á�"<<endl;
   	    	Sleep(2300);
   	    	cout<<"(�����ҽ��һ������������...)"<<endl;
   	    	Sleep(1000); 
   	    	cout<<"ʱ��:2024��8��4�� 00:43 �ص�:ҽԺ�� ����:��"<<endl;
   	    	cout<<"(����������һ���󿨳�ǰ...)"<<endl;
   	    	Sleep(2300);
   	    	cout<<"����ʦ��:������������ǵģ����˷ѽ�һ�¾Ϳ��������ˡ�"<<endl;
   	    	Sleep(2300);
   	    	cout<<"(ҽ��֧�����˷�...)"<<endl;
   	    	Sleep(2300);
   	    	cout<<"(���ǰѻ����˻�ȥ...)"<<endl;
   	    	Sleep(2300);
   	    	cout<<"(���뿪ʱ���㿴����һ������ɫ���ƿ㣬���°״�ӵ���...)"<<endl;
   	    	Sleep(3000);
   	    	shubiaolh(10);
   	    	system("cls");
   	    	Sleep(1000);
   	    	cout<<"Tie:֋��  �ص�:G�F���G������r G�F�G�F���G��:Y�E?�t�s��?�u���u��E"<<endl;
   	    	Sleep(100);
   	    	system("cls");
			cout<<"ʱ��:2024��8��4�� 00:51 �ص�:ҽԺסԺ���� ����:?"<<endl;  
			cout<<"(���ҽ��һ��ص���סԺ��)"<<endl; 
			Sleep(2000);
			cout<<"��:(�ղ�����ʲô��)"<<endl; 
			Sleep(2000);
			cout<<"��:(Ҫ����ҽ����)"<<endl; 
			Sleep(2000);
			cout<<"                    ����(1)          ������(2)"<<endl; 
			Sleep(2000);
			cout<<">>";
			cin>>x3;
			if(x3==2)
			{
			  cout<<"(��û�и�������)"<<endl; 
			  Sleep(2000);
			  cout<<"(2:00������������...)"<<endl; 
			  Sleep(2000);
			  cout<<"(һ�ɺ�����Ϯ�����㱻���������ˡ�)"<<endl; 
			  Sleep(2000);
			  cout<<"                     ��Υ���˵�3������"<<endl; 
   	    	  cout<<"                    ��ɽ��:����...�ܲ�����..."<<endl;
   	    	  Sleep(2300);
   	    	  cout<<"                      ��Ϸ������"<<endl;
   	    	  Sleep(2300);
   	    	  cout<<"                      ��л���棡"<<endl;
   	    	  Sleep(2300);
   	    	  return 0;
			}
			if(x3==1)
			{
			  cout<<"(��ȫ����������...)"<<endl; 
			  Sleep(2000);
			  cout<<"ҽ��:��...�������������˼���..."<<endl; 
			  Sleep(2000);
			  cout<<"(��ҽ�����У����˽⵽����ôһ������...)"<<endl; 
			  Sleep(2000);
   	    	  cout<<"(��4��ǰ����һλ���񲡻��ߣ���ҽԺ�����۸�...)"<<endl;
   	    	  Sleep(1500);
   	    	  cout<<"(����ÿ�춼Ҫ����...)"<<endl;
   	    	  Sleep(1500);
   	    	  cout<<"(���İ��豨�����������ߣ�ȴ�����Ǽ�ë��Ƥ��С������)"<<endl;
   	    	  Sleep(1500);
   	    	  cout<<"(����һ��ʱ�䣬���İ��豻��ıɱ��...)"<<endl;
   	    	  Sleep(1500);
   	    	  cout<<"(��Ҳ��ɱ�ˣ�������ʹ��������ҽԺ�����Ǿ�һֱ������ҽԺ�ǻ�...)"<<endl;
   	    	  Sleep(1500);
   	    	  cout<<"ҽ��:��֮ǰ�����Ĺ�����ʵ����һλ����ɱ������д��..."<<endl;
   	    	  Sleep(1500);
   	    	  cout<<"(ҽ����������ǰ�ĵ�ʿ��׼����ӡ��...)"<<endl;
   	    	  Sleep(1500);
   	    	  cout<<"     ����(1)    ��ֹ��(2)"<<endl;
   	    	  cout<<">>";
   	    	  cin>>x3;
   	    	  if(x3==1)
   	    	  {
   	    	  	cout<<"(��ʿ������ӡ������...)"<<endl;
				Sleep(1500);
				cout<<"(���ǣ�������Ŀ�����)"<<endl;
				Sleep(1500);
				cout<<"6���..."<<endl;
				Sleep(1500); 
				cout<<"ʱ��:2030��8��6�� 2:00 �ص�:ҽԺסԺ���� ����:?"<<endl;  
				Sleep(1500); 
				cout<<"ҽ��:�Ż�ʿ������һ��ȥȡ������"<<endl; 
				Sleep(2300); 
				cout<<"��:�� �һ����� �����ұ��˰ɡ�"<<endl;
   	    		Sleep(2300);
   	    		cout<<"(�㹤�����ˣ������⣬�ڴ�����һ��ƮƮ������Ӱ�ӣ�����ɻ�)"<<endl;
   	    		Sleep(2300);
   	    		cout<<"(ͻȻ��Ӱ�ӻ���һ�������������ɡ�)"<<endl; 
				Sleep(2000);
   	    		cout<<"              ������ս��2:����...��Ŀ�����"<<endl;
   	    		Sleep(2300);
   	    		cout<<"                      ��Ϸ������"<<endl;
   	    		Sleep(2300);
   	    		cout<<"                      ��л���棡"<<endl;
   	    		Sleep(2300);
   	    		return 0;  
   	    	  }
   	    	  if(x3==2)
   	    	  {
   	    	  	cout<<"��:��һ��"<<endl;
				Sleep(1500);
				cout<<"ҽ��&��ʿ:�ţ�"<<endl;
				Sleep(1500);
				cout<<"��:���������ܽ�������"<<endl;
				Sleep(1500); 
				cout<<"ҽ��&��ʿ:...ȷʵ"<<endl;  
				Sleep(1500); 
				cout<<"(ҽ��������...)"<<endl; 
				Sleep(2300); 
				cout<<"ҽ��:...���Ѿ��ı䲻����ʵ�ˣ�Ϊʲô�������ڴ�ȥ�����µ�һ���أ�"<<endl;
   	    		Sleep(2300);
   	    		cout<<"(����ʧ������...)"<<endl;
   	    		Sleep(2300);
   	    		cout<<"��:...�ټ�"<<endl; 
				Sleep(2000);
   	    		cout<<"                ������ս��1:...�ټ�"<<endl;
   	    		Sleep(2300);
   	    		cout<<"                      ��Ϸ������"<<endl;
   	    		Sleep(2300);
   	    		cout<<"                      ��л���棡"<<endl;
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
//�������֣� 
void tc()//�˳�  
{
  system("cls");
   	 Sleep(500);
   	 system("color f0");
   	    cout<<endl<<endl<<endl<<endl<<"                        ҽԺ�����̸    exit(2)"<<endl;
        cout<<"                  Start(1)      "<<endl;
    Sleep(1000);
       	 system("cls");
       	 system("color 1f");
   	 Sleep(500);
   	 system("color 0f");
   	 cout<<endl<<endl<<"                                       exit(2)"<<endl;
   	    cout<<endl<<endl<<endl<<endl<<"                        ҽԺ�����̸"<<endl;
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
   	    cout<<endl<<endl<<endl<<endl<<"                        ҽԺ�����̸"<<endl;
        cout<<"                  Start(1)      "<<endl;
    Sleep(1000);
       	 system("cls");
       	 system("color c1");
   	 Sleep(500);
     shubiaolh(100000);
   	 system("color 0f");
   	    cout<<"                        ҽԺ�����̸  "<<endl;
        cout<<"                  Start(1)      "<<endl;
        cout<<">>";
     	cin>>p;
}
int shubiaolh(long long n)//����һ� 
{
	int i;
	int x=GetSystemMetrics(SM_CXSCREEN);   
	int y=GetSystemMetrics(SM_CYSCREEN);//��ʼ������һ� 
for(i=0;i<n;i++)            //ִ��n��! 
	{ 
	  for(int i=1;i<=2;i++) 
	    SetCursorPos(rand()%y,rand()%x);//����һ� 
	}
}
void Color(int a)//��ɫ 
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
    if(a==10) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE|BACKGROUND_INTENSITY|BACKGROUND_BLUE);}void x23(){system("cls");Color(4);cout<<"����:ϵͳ������Ll�D���ִ��󣬼������..."<<endl;cout<<"(��װ��M�[J �  ?  ...)"<<endl;Sleep(2300);cout<<"(����һ��,u�ٛ�RichE������...)"<<endl;Sleep(2300);cout<<"ʱ2h4�I�G�F�FE~E{B{Ay@x@: ӧgӦfҦfӦfҥfѥfФ �ص�:׬wKC Q)S+P [/^5�~e�T�\��:6h5i6"<<endl;cout<<"ҽ��:h������������ƺ��ʿ����R�^(uz�^�N�X�Rһ��ȥȡ$�Q#�P$�N�M��Q��[��F��:@��@�y6�~U��h������������ƺ�ȼ�"<<endl; cout<<"                �R�S(u�QX[�6qT�QՋ (CFF~E)      ��˿��(�V&�[)"<<endl; cout<<"??";Sleep(2000);cout<<"������..."<<endl;Sleep(1000);cout<<"������ؽ��:System Error"<<endl;Sleep(2000);cout<<"            ��Ϸ������"<<endl;Sleep(2000);cout<<"            ��л���棡"<<endl;}

