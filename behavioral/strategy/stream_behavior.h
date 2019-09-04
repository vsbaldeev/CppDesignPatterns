#ifndef CPPDESIGNPATTERNS_WRITE_BEHAVIOR_H
#define CPPDESIGNPATTERNS_WRITE_BEHAVIOR_H

#include <string>
#include <fstream>
#include <iostream>

class StreamBehavior
{
public:
     virtual void write(const std::string& text) = 0;
     virtual ~StreamBehavior() = default;
};

class StdStreamWriter : public StreamBehavior
{
public:
     void write(const std::string& text) override {
          std::cout << text << std::endl;
     }
};

class FileStreamWriter : public StreamBehavior
{
public:
     void write(const std::string& text) override {
          std::ofstream file_stream("log.txt");
          file_stream << text << std::endl;
     }
};

#endif //CPPDESIGNPATTERNS_WRITE_BEHAVIOR_H
