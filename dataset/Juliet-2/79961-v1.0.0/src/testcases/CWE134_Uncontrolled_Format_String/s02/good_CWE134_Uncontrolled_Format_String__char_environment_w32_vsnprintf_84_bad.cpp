namespace NAMESPACE0
{
NAMESPACE0_FUN2::NAMESPACE0_FUN2(char * dataCopy)
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
NAMESPACE0_FUN2::~NAMESPACE0_FUN2()
{
    FUN0(data, data);
}
}
namespace NAMESPACE0
{
NAMESPACE0_FUN3::NAMESPACE0_FUN3(char * dataCopy)
{
    data = dataCopy;
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
}
void FUN1(char * data, ...)
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
NAMESPACE0_FUN3::~NAMESPACE0_FUN3()
{
    FUN1(data, data);
}
}
namespace NAMESPACE0
{
class NAMESPACE0_FUN2
{
public:
    NAMESPACE0_FUN2(char * dataCopy);
    ~NAMESPACE0_FUN2();
private:
    char * data;
};
class NAMESPACE0_FUN3
{
public:
    NAMESPACE0_FUN3(char * dataCopy);
    ~NAMESPACE0_FUN3();
private:
    char * data;
};
}
namespace NAMESPACE0
{
void FUN2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    NAMESPACE0_FUN2 * VAR4 = new NAMESPACE0_FUN2(data);
    delete VAR4;
}
void FUN3()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    NAMESPACE0_FUN3 * VAR5 = new NAMESPACE0_FUN3(data);
    delete VAR5;
}
} 
