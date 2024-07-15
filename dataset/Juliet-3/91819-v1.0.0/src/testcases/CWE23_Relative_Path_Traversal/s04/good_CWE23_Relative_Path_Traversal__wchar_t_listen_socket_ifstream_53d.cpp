using namespace std;
namespace NAMESPACE0
{
void FUN0(wchar_t * data);
void FUN1(wchar_t * data)
{
    FUN0(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN2(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN2(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN1(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    wcscat(data, L"file.txt");
    FUN1(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN2(wchar_t * data)
{
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}
} 
