using namespace std;
namespace NAMESPACE0
{
void FUN0(char * &data)
{
    strcat(data, "file.txt");
}
void FUN1()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    FUN0(data);
    {
        ofstream outputFile;
        outputFile.open((char *)data);
        outputFile.close();
    }
}
} 
