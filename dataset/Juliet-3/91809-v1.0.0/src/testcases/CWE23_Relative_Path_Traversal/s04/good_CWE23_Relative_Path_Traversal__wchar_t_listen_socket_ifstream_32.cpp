using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    {
        wchar_t * data = *dataPtr1;
        wcscat(data, L"file.txt");
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        {
            ifstream inputFile;
            inputFile.open((char *)data);
            inputFile.close();
        }
    }
}
} 
