namespace NAMESPACE0
{
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
void NAMESPACE0_FUN2::action(char * data)
{
    FUN0(data, data);
}
}
namespace NAMESPACE0
{
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
void NAMESPACE0_FUN3::action(char * data)
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
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN2;
    baseObject->action(data);
    delete baseObject;
}
void FUN3()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
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
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN3;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(char * data) = 0;
};
class NAMESPACE0_FUN2 : public NAMESPACE0_base
{
public:
    void action(char * data);
};
class NAMESPACE0_FUN3 : public NAMESPACE0_base
{
public:
    void action(char * data);
};
}
