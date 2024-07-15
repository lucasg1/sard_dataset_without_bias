using namespace std;
namespace NAMESPACE0
{
static wchar_t * FUN0(wchar_t * data)
{
    wcscat(data, L"file.txt");
    return data;
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    data = FUN0(data);
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}
} 
