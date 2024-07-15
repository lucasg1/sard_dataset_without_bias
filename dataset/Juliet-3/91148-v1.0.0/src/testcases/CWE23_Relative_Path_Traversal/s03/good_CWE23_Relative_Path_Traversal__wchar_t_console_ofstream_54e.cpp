using namespace std;
namespace NAMESPACE0
{
void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    wcscat(data, L"file.txt");
    FUN0(data);
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
void FUN5(wchar_t * data);
void FUN6(wchar_t * data)
{
    FUN5(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN6(wchar_t * data);
void FUN3(wchar_t * data)
{
    FUN6(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN5(wchar_t * data)
{
    {
        ofstream outputFile;
        outputFile.open((char *)data);
        outputFile.close();
    }
}
} 
