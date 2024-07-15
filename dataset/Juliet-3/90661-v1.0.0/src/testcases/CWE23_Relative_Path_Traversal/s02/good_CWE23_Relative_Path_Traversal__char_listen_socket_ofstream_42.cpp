using namespace std;
namespace NAMESPACE0
{
static char * FUN0(char * data)
{
    strcat(data, "file.txt");
    return data;
}
void FUN1()
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
