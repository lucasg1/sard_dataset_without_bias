using namespace std;
wchar_t * VAR0;
wchar_t * VAR1;
namespace NAMESPACE2
{
void FUN0();
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    wcscat(data, L"file.txt");
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
        ofstream outputFile;
        outputFile.open((char *)data);
        outputFile.close();
    }
}
} 
