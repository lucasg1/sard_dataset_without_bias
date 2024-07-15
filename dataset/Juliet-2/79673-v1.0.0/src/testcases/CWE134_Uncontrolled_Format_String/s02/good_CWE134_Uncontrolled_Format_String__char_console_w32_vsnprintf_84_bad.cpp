namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(char * dataCopy)
{
    data = dataCopy;
    strcpy(data, "fixedstringtest");
}
void FUN0(char * data, ...)
{
    {
        char dest[100] = "";
        va_list args;
        va_start(args, data);
        vsnprintf(dest, 100-1, data, args);
        va_end(args);
        printLine(dest);
    }
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    FUN0(data, data);
}
}
namespace NAMESPACE0
{
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    NAMESPACE0_FUN1 * VAR2 = new NAMESPACE0_FUN1(data);
    delete VAR2;
}
void FUN2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    NAMESPACE0_FUN2 * VAR3 = new NAMESPACE0_FUN2(data);
    delete VAR3;
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN2::NAMESPACE0_FUN2(char * dataCopy)
{
    data = dataCopy;
    {
        size_t dataLen = strlen(data);
        if (100-dataLen > 1)
        {
            if (fgets(data+dataLen, (int)(100-dataLen), stdin) != NULL)
            {
                dataLen = strlen(data);
                if (dataLen > 0 && data[dataLen-1] == '\n')
                {
                    data[dataLen-1] = '\0';
                }
            }
            else
            {
                printLine("fgets() failed");
                data[dataLen] = '\0';
            }
        }
    }
}
void FUN4(char * data, ...)
{
    {
        char dest[100] = "";
        va_list args;
        va_start(args, data);
        vsnprintf(dest, 100-1, "%s", args);
        va_end(args);
        printLine(dest);
    }
}
NAMESPACE0_FUN2::~NAMESPACE0_FUN2()
{
    FUN4(data, data);
}
}
namespace NAMESPACE0
{
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(char * dataCopy);
    ~NAMESPACE0_FUN1();
private:
    char * data;
};
class NAMESPACE0_FUN2
{
public:
    NAMESPACE0_FUN2(char * dataCopy);
    ~NAMESPACE0_FUN2();
private:
    char * data;
};
}
