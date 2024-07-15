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
void FUN3(wchar_t * data)
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
    wchar_t dataBuffer[FILENAME_MAX] = L"";
    data = dataBuffer;
    wcscat(data, L"c:\\temp\\file.txt");
    wcscat(data, L"/tmp/file.txt");
    FUN1(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN3(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN3(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN2(wchar_t * data)
{
    {
        ofstream outputFile;
        outputFile.open((char *)data);
        outputFile.close();
    }
}
} 
