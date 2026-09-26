#include <windows.h>

HINSTANCE OpenURL(const char* url)
{
	return ShellExecuteA(NULL, "open", url, NULL, NULL, SW_SHOWNORMAL);
	//"程序"：打开程序，"网址"：使用默认浏览器打开网址，""：使用文件管理器打开当前目录
}

int main()
{
	OpenURL("http://localhost:8000/");//因为后面阻塞，直接先打开浏览器
	system("python -m http.server 8000");//可能需要安装python
	//控制台阻塞此处，关闭则本地服务器关闭
	return 0;
}
//创建一个本地服务器，并打开index.html
