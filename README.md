# WindowsConsoleLibrary
windows win32 console library

#��Ŀ����
vs2015  --> �½���Ŀ --> win32 ����̨���� -->����Ŀ 
���� �ַ���--> ���ֽ��ַ���

��ȡ�������� ���Ӱ���Ŀ¼�� ���� include


#push_include.bat   //.sln �����ļ����½� push_include.bat�ļ���
cd LibraryReconstruct\include
git add .
git commit -m "script push"
git push origin master
echo "push complete"
pause


#pull_include.bat   //Դ�ļ������ļ����½� pull_include.bat�ļ���
if exist include (
	cd include
	git pull origin master
) else (
	git clone https://github.com/huangshangbin/WindowsConsoleLibrary.git
	ren "WindowsConsoleLibrary" "include"
)
echo "update complete"
pause