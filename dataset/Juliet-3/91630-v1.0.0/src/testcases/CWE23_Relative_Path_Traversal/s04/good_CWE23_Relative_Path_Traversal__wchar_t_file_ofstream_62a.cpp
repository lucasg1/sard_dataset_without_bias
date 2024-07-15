using namespace std;
namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    wcscat(data, L"file.txt");
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(wchar_t * &data);
void FUN2()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    FUN0(data);
    {
        ofstream outputFile;
        outputFile.open((char *)data);
        outputFile.close();
    }
}
} 
