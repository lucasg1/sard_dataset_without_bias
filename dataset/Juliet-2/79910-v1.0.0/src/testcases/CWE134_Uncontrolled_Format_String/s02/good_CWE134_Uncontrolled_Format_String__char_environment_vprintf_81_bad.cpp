namespace NAMESPACE0
{
void FUN0(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vprintf("%s", args);
        va_end(args);
    }
}
void NAMESPACE0_FUN3::action(char * data) const
{
    FUN0(data, data);
}
}
namespace NAMESPACE0
{
void FUN1(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vprintf(data, args);
        va_end(args);
    }
}
void NAMESPACE0_FUN2::action(char * data) const
{
    FUN1(data, data);
}
}
namespace NAMESPACE0
{
void FUN2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "fixedstringtest");
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN2();
    baseObject.action(data);
}
void FUN3()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN3();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(char * data) const = 0;
};
class NAMESPACE0_FUN2 : public NAMESPACE0_base
{
public:
    void action(char * data) const;
};
class NAMESPACE0_FUN3 : public NAMESPACE0_base
{
public:
    void action(char * data) const;
};
}
