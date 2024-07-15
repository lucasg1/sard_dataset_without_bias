using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, wchar_t *> dataMap);
void FUN1()
{
    wchar_t * data;
    map<int, wchar_t *> dataMap;
    wchar_t dataBuffer[FILENAME_MAX] = L"";
    data = dataBuffer;
    wcscat(data, L"c:\\temp\\file.txt");
    wcscat(data, L"/tmp/file.txt");
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
using namespace std;
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, wchar_t *> dataMap)
{
    wchar_t * data = dataMap[2];
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}
} 
