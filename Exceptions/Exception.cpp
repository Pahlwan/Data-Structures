#include<iostream>
#include<string>

using namespace std;

class Exception
{
protected:
    int error_code;
    string error_msg;
    int error_line_num;
public:
    Exception(int code,int line_num)
    {
        error_code = code;
        error_line_num = line_num;
    }

};

class OutOfRange:public Exception
{
    
public:
    OutOfRange(int code,int line_num):Exception(code,line_num)
    {
        error_msg = "Out Of range Exception";
    }

    string What()
    {
        cout<<"Excetpion at Line no.: "<<error_line_num<<"\n\t";
        
        return error_msg+"\n";
    }
};

class InvalidType:public Exception