using namespace std;
namespace NAMESPACE0
{
typedef struct _structType
{
    wchar_t * structFirst;
} structType;
void FUN0(structType myStruct);
void FUN1()
{
    wchar_t * data;
    structType myStruct;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    {
        size_t dataLen = wcslen(data);
        if (FILENAME_MAX-dataLen > 1)
        {
            if (fgetws(data+dataLen, (int)(FILENAME_MAX-dataLen), stdin) != NULL)
            {
                dataLen = wcslen(data);
                if (dataLen > 0 && data[dataLen-1] == L'\n')
                {
                    data[dataLen-1] = L'\0';
                }
            }
            else
            {
                printLine("fgetws() failed");
                data[dataLen] = L'\0';
            }
        }
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
} 
using namespace std;
namespace NAMESPACE0
{
typedef struct _structType
{
    wchar_t * structFirst;
} structType;
void FUN0(structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        ofstream outputFile;
<START>
        outputFile.open((char *)data);
<END>
        outputFile.close();
    }
}
} 
