using namespace std;
namespace NAMESPACE0
{
wchar_t * FUN0(wchar_t * data)
{
    wcscat(data, L"file.txt");
    return data;
}
} 
using namespace std;
namespace NAMESPACE0
{
wchar_t * FUN0(wchar_t * data);
void FUN2()
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
