using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    strcat(data, "file.txt");
    {
        char * dataCopy = data;
        char * data = dataCopy;
        {
            ifstream inputFile;
            inputFile.open((char *)data);
            inputFile.close();
        }
    }
}
} 
