using namespace std;
namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    wcscat(data, L"file.txt");
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    FUN0(data);
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}
} 
