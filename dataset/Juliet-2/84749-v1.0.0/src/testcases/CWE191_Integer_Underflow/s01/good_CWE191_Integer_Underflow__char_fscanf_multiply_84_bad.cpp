namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(char dataCopy)
{
    data = dataCopy;
    fscanf (stdin, "%c", &data);
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    if(data < 0) 
    {
        if (data > (CHAR_MIN/2))
        {
            char result = data * 2;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too small to perform multiplication.");
        }
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    char data;
    data = ' ';
    NAMESPACE0_FUN0 * VAR2 = new NAMESPACE0_FUN0(data);
    delete VAR2;
}
void FUN1()
{
    char data;
    data = ' ';
    NAMESPACE0_FUN1 * VAR3 = new NAMESPACE0_FUN1(data);
    delete VAR3;
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(char dataCopy)
{
    data = dataCopy;
    data = -2;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    if(data < 0) 
    {
        char result = data * 2;
        printHexCharLine(result);
    }
}
}
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(char dataCopy);
    ~NAMESPACE0_FUN0();
private:
    char data;
};
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(char dataCopy);
    ~NAMESPACE0_FUN1();
private:
    char data;
};
}
