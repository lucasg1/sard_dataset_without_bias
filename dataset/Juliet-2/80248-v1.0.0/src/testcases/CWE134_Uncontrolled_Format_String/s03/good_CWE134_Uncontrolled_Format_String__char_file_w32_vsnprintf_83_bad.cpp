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
void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    NAMESPACE0_FUN0 VAR2(data);
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    NAMESPACE0_FUN1 VAR3(data);
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(char * dataCopy)
{
    data = dataCopy;
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
}
void FUN3(char * data, ...)
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
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    FUN3(data, data);
}
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(char * dataCopy)
{
    data = dataCopy;
    strcpy(data, "fixedstringtest");
}
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
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    FUN4(data, data);
}
}
