using namespace std;
namespace NAMESPACE0
{
void FUN0(wchar_t * * data);
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    wcscat(data, L"file.txt");
    FUN0(&data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}
} 
