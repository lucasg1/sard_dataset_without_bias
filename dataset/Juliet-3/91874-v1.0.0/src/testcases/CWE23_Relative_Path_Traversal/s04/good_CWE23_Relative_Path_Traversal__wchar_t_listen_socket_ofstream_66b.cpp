using namespace std;
namespace NAMESPACE0
{
void FUN0(wchar_t * dataArray[]);
void FUN1()
{
    wchar_t * data;
    wchar_t * dataArray[5];
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    wcscat(data, L"file.txt");
    dataArray[2] = data;
    FUN0(dataArray);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(wchar_t * dataArray[])
{
    wchar_t * data = dataArray[2];
    {
        ofstream outputFile;
        outputFile.open((char *)data);
        outputFile.close();
    }
}
} 
