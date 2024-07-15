using namespace std;
namespace NAMESPACE0
{
char * FUN0(char * data)
{
    strcat(data, "file.txt");
    return data;
}
} 
using namespace std;
namespace NAMESPACE0
{
char * FUN0(char * data);
void FUN2()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    data = FUN0(data);
    {
        ofstream outputFile;
        outputFile.open((char *)data);
        outputFile.close();
    }
}
} 
