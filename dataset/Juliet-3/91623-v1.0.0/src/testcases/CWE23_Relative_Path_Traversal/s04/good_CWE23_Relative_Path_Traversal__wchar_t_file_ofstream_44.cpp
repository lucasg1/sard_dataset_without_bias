using namespace std;
namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
    {
        ofstream outputFile;
        outputFile.open((char *)data);
        outputFile.close();
    }
}
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN0;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    wcscat(data, L"file.txt");
    funcPtr(data);
}
} 
