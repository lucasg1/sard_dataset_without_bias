using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    wcscat(data, L"file.txt");
    {
        wchar_t * data = dataRef;
        {
            ifstream inputFile;
            inputFile.open((char *)data);
            inputFile.close();
        }
    }
}
} 
