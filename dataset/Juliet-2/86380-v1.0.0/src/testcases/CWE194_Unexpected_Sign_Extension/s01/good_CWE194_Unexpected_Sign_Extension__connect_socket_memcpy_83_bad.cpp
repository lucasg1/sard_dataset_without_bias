namespace NAMESPACE0
{
void FUN0()
{
    short data;
    data = 0;
    NAMESPACE0_FUN0 VAR1(data);
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(short dataCopy)
{
    data = dataCopy;
    data = 100-1;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        char source[100];
        char dest[100] = "";
        memset(source, 'A', 100-1);
        source[100-1] = '\0';
        if (data < 100)
        {
            memcpy(dest, source, data);
            dest[data] = '\0'; 
        }
        printLine(dest);
    }
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
