using namespace std;
namespace NAMESPACE0
{
void FUN0(char * &data)
{
    strcat(data, "file.txt");
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(char * &data);
void FUN2()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    FUN0(data);
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}
} 
