using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    goto source;
source:
    strcat(data, "file.txt");
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}
} 
