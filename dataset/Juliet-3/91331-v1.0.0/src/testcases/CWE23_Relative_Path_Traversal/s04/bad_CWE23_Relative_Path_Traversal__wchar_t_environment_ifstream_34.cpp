using namespace std;
namespace NAMESPACE0
{
typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} unionType;
void FUN0()
{
    wchar_t * data;
    unionType myUnion;
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
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            ifstream inputFile;
<START>
            inputFile.open((char *)data);
<END>
            inputFile.close();
        }
    }
}
} 
