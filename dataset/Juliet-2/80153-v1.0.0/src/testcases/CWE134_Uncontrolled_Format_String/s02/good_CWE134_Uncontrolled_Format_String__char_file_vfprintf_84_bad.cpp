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
namespace NAMESPACE0
{
NAMESPACE0_FUN2::NAMESPACE0_FUN2(char * dataCopy)
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
void FUN0(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfprintf(stdout, "%s", args);
        va_end(args);
    }
}
NAMESPACE0_FUN2::~NAMESPACE0_FUN2()
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
    NAMESPACE0_FUN1 * VAR3 = new NAMESPACE0_FUN1(data);
    delete VAR3;
}
void FUN2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    NAMESPACE0_FUN2 * VAR4 = new NAMESPACE0_FUN2(data);
    delete VAR4;
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(char * dataCopy)
{
    data = dataCopy;
    strcpy(data, "fixedstringtest");
}
void FUN4(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfprintf(stdout, data, args);
        va_end(args);
    }
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    FUN4(data, data);
}
}
