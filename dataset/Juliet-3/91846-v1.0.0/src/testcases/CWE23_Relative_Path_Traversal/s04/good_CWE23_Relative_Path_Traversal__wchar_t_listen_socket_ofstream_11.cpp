using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        wcscat(data, L"file.txt");
    }
    {
        ofstream outputFile;
        outputFile.open((char *)data);
        outputFile.close();
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    if(globalReturnsTrue())
    {
        wcscat(data, L"file.txt");
    }
    {
        ofstream outputFile;
        outputFile.open((char *)data);
        outputFile.close();
    }
}
} 
