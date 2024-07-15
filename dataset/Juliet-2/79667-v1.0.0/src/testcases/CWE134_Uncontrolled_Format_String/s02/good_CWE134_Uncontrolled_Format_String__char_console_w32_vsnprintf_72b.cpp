using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<char *> dataVector);
void FUN1()
{
    char * data;
    vector<char *> dataVector;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "fixedstringtest");
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
void FUN2(vector<char *> dataVector);
void FUN3()
{
    char * data;
    vector<char *> dataVector;
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
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN2(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN5(char * data, ...)
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
void FUN0(vector<char *> dataVector)
{
    char * data = dataVector[2];
    FUN5(data, data);
}
void FUN7(char * data, ...)
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
void FUN2(vector<char *> dataVector)
{
    char * data = dataVector[2];
    FUN7(data, data);
}
} 
