namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    NAMESPACE0_FUN0 * VAR1 = new NAMESPACE0_FUN0(data);
    delete VAR1;
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    NAMESPACE0_FUN1 * VAR2 = new NAMESPACE0_FUN1(data);
    delete VAR2;
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(char * dataCopy)
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
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    printf("%s\n", data);
}
}
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(char * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    char * data;
};
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(char * dataCopy);
    ~NAMESPACE0_FUN1();
private:
    char * data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(char * dataCopy)
{
    data = dataCopy;
    strcpy(data, "fixedstringtest");
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    printf(data);
}
}
