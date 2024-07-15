using namespace std;
namespace NAMESPACE0
{
static int VAR1 = 0;
static int VAR2 = 0;
static wchar_t * FUN0(wchar_t * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        wcscat(data, L"file.txt");
    }
    return data;
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    VAR1 = 0; 
    data = FUN0(data);
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
    ;
}
static wchar_t * FUN2(wchar_t * data)
{
    if(VAR2)
    {
        wcscat(data, L"file.txt");
    }
    return data;
}
void FUN3()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    VAR2 = 1; 
    data = FUN2(data);
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
    ;
}
} 
