#include <iostream>

class Log
{
public:
	//ö���еı�����ȫ�ֵ���
	//����̬���õķ�ʽ����һ��
	enum Level
	{
		LevelError = 0,LevelWarning = 1,LevelInfo = 2
	};
	//��ö�������
	/*static const int LevelError = 0;
	static const int LevelWarning = 1;
	static const int LevelInfo = 2;*/
private:
	Level m_Level = LevelInfo;
public:
	void SetLevel(Level Level)
	{
		m_Level = Level;
	}
	void Error(const char* message)
	{
		if (m_Level >= LevelError)
			std::cout << "[Error]:" << message << std::endl;
	}
	void Warning(const char* message)
	{
		if (m_Level >= LevelWarning)
			std::cout << "[Warning]:" << message << std::endl;
	}
	void Info(const char* message)
	{
		if (m_Level >= LevelInfo)
			std::cout << "[Info]:" << message << std::endl;
	}
};

int main() 
{
	Log log;
	log.SetLevel(Log::LevelError);
	log.Error("Hello");
	log.Warning("Hello");
	log.Info("Hello");
	std::cin.get();
}