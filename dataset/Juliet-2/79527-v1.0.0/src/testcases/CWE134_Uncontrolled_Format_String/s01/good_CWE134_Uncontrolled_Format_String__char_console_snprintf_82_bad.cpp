namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(char * data)
{
    {
        char dest[100] = "";
        SNPRINTF(dest, 100-1, "%s", data);
        printLine(dest);
    }
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(char * data)
{
    {
        char dest[100] = "";
        SNPRINTF(dest, 100-1, data);
        printLine(dest);
    }
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(char * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(char * data);
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(char * data);
};
}
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "fixedstringtest");
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
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
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(data);
    delete baseObject;
}
} 