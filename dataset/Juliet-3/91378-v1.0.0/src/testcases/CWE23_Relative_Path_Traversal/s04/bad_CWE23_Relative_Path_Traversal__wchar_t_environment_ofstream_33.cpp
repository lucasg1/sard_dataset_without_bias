using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    {
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            wcsncat(data+dataLen, environment, FILENAME_MAX-dataLen-1);
        }
    }
    {
        wchar_t * data = dataRef;
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
