using namespace std;
namespace NAMESPACE0
{
static int VAR1 = 0;
static wchar_t * FUN0(wchar_t * data)
{
    if(VAR1)
    {
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
    }
    return data;
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = L"";
    data = dataBuffer;
    VAR1 = 1; 
    data = FUN0(data);
    {
        ifstream inputFile;
<START>
        inputFile.open((char *)data);
<END>
        inputFile.close();
    }
    ;
}
} 
