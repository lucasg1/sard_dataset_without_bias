using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    {
        wchar_t * data = *dataPtr1;
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
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        {
            ofstream outputFile;
<START>
            outputFile.open((char *)data);
<END>
            outputFile.close();
        }
    }
}
} 
