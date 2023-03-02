#pragma once
#include <string>
#include <fstream>

using namespace std;

class Logger
{
	static Logger* instance;

	Logger() {}

public:
	static Logger* getInstance();
	void sendMessage(string message);
};

Logger* Logger::instance = nullptr;

Logger* Logger::getInstance()
{
	if (instance == nullptr)
		instance = new Logger();
	return instance;
}

void Logger::sendMessage(string message)
{
	ofstream out("log.txt", ios::app);
	out << __DATE__ << " " __TIME__ << " : " << message << endl;
	out.close();
}


//{
//	Logger* log = Logger::getInstance();
//	log->sendMessage("Message 1");
//	cout << log << endl;
//	//
//	//
//}
//
//Logger* log2 = Logger::getInstance();
//log2->sendMessage("Message 2");
//cout << log2 << endl;