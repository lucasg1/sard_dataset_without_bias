using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    int h;
    char * data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    for(h = 0; h < 1; h++)
    {
        strcat(data, "file.txt");
    }
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}
} 
