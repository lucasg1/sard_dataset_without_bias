using namespace std;
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    strcat(data, "c:\\temp\\file.txt");
    strcat(data, "/tmp/file.txt");
    {
        char * data = dataRef;
        {
            ofstream outputFile;
            outputFile.open((char *)data);
            outputFile.close();
        }
    }
}
} 
