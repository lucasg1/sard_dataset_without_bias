using namespace std;
wchar_t * VAR0;
wchar_t * VAR1;
namespace NAMESPACE2
{
void FUN0();
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = L"";
    data = dataBuffer;
    wcscat(data, L"c:\\temp\\file.txt");
    wcscat(data, L"/tmp/file.txt");
    VAR1 = data;
    FUN0();
}
} 
using namespace std;
extern wchar_t * VAR0;
extern wchar_t * VAR1;
namespace NAMESPACE2
{
void FUN0()
{
    wchar_t * data = VAR1;
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}
} 
