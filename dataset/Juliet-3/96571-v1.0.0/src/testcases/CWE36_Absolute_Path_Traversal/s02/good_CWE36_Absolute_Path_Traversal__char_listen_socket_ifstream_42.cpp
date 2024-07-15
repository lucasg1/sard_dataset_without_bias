using namespace std;
namespace NAMESPACE0
{
static char * FUN0(char * data)
{
    strcat(data, "c:\\temp\\file.txt");
    strcat(data, "/tmp/file.txt");
    return data;
}
void FUN1()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    data = FUN0(data);
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}
} 
