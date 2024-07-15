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
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}
} 
