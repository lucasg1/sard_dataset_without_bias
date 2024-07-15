namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(short dataCopy)
{
    data = dataCopy;
    data = 100-1;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    if (data < 100)
    {
        char * dataBuffer = (char *)malloc(data);
        memset(dataBuffer, 'A', data-1);
        dataBuffer[data-1] = '\0';
        printLine(dataBuffer);
        free(dataBuffer);
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    short data;
    data = 0;
    NAMESPACE0_FUN0 VAR2(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(short dataCopy);
    ~NAMESPACE0_FUN0();
private:
    short data;
};
}
