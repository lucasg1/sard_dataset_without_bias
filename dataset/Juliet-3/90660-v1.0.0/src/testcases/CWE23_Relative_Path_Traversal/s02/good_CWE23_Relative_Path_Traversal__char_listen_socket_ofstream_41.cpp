using namespace std;
namespace NAMESPACE0
{
void FUN0(char * data)
{
    {
        ofstream outputFile;
        outputFile.open((char *)data);
        outputFile.close();
    }
}
void FUN1()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    strcat(data, "file.txt");
    FUN0(data);
}
} 
