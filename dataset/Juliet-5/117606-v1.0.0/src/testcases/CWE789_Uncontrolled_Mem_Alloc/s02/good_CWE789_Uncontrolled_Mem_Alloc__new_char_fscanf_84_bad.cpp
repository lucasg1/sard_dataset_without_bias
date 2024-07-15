namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(size_t dataCopy);
    ~NAMESPACE0_FUN0();
private:
    size_t data;
};
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(size_t dataCopy);
    ~NAMESPACE0_FUN1();
private:
    size_t data;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    size_t data;
    data = 0;
    NAMESPACE0_FUN0 * VAR2 = new NAMESPACE0_FUN0(data);
    delete VAR2;
}
void FUN1()
{
    size_t data;
    data = 0;
    NAMESPACE0_FUN1 * VAR3 = new NAMESPACE0_FUN1(data);
    delete VAR3;
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(size_t dataCopy)
{
    data = dataCopy;
    fscanf(stdin, "%ud", &data);
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    {
        char * myString;
        if (data > strlen(HELLO_STRING) && data < 100)
        {
            myString = new char[data];
            strcpy(myString, HELLO_STRING);
            printLine(myString);
            delete [] myString;
        }
        else
        {
            printLine("Input is less than the length of the source string or too large");
        }
    }
}
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(size_t dataCopy)
{
    data = dataCopy;
    data = 20;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        char * myString;
        if (data > strlen(HELLO_STRING))
        {
            myString = new char[data];
            strcpy(myString, HELLO_STRING);
            printLine(myString);
            delete [] myString;
        }
        else
        {
            printLine("Input is less than the length of the source string");
        }
    }
}
}
