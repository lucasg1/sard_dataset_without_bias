namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(char * dataCopy)
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
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    {
        int i, n, intVariable;
        if (sscanf(data, "%d", &n) == 1)
        {
            if (n < MAX_LOOP)
            {
                intVariable = 0;
                for (i = 0; i < n; i++)
                {
                    intVariable++; 
                }
                printIntLine(intVariable);
            }
        }
    }
}
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
    strcpy(data, "15");
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        int i, n, intVariable;
        if (sscanf(data, "%d", &n) == 1)
        {
            intVariable = 0;
            for (i = 0; i < n; i++)
            {
                intVariable++; 
            }
            printIntLine(intVariable);
        }
    }
}
}
