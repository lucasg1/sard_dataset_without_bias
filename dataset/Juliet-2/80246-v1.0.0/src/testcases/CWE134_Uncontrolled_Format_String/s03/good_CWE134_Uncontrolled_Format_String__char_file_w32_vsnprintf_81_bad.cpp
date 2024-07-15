namespace NAMESPACE0
{
void FUN0(char * data, ...)
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
void NAMESPACE0_FUN2::action(char * data) const
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
    strcpy(data, "fixedstringtest");
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
void FUN2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    {
        size_t dataLen = strlen(data);
        FILE * pFile;
        if (100-dataLen > 1)
        {
            pFile = fopen(FILENAME, "r");
            if (pFile != NULL)
            {
                if (fgets(data+dataLen, (int)(100-dataLen), pFile) == NULL)
                {
                    printLine("fgets() failed");
                    data[dataLen] = '\0';
                }
                fclose(pFile);
            }
        }
    }
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN2();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void FUN4(char * data, ...)
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
void NAMESPACE0_FUN1::action(char * data) const
{
    FUN4(data, data);
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(char * data) const = 0;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(char * data) const;
};
class NAMESPACE0_FUN2 : public NAMESPACE0_base
{
public:
    void action(char * data) const;
};
}
