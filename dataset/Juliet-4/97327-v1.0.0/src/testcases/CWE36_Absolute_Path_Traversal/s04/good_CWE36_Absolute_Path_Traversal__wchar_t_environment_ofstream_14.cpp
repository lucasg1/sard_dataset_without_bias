using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = L"";
    data = dataBuffer;
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        wcscat(data, L"c:\\temp\\file.txt");
        wcscat(data, L"/tmp/file.txt");
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
    wchar_t dataBuffer[FILENAME_MAX] = L"";
    data = dataBuffer;
    if(globalFive==5)
    {
        wcscat(data, L"c:\\temp\\file.txt");
        wcscat(data, L"/tmp/file.txt");
    }
    {
        ofstream outputFile;
        outputFile.open((char *)data);
        outputFile.close();
    }
}
} 
