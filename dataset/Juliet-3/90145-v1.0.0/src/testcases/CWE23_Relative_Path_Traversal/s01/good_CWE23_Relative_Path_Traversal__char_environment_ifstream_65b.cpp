using namespace std;
namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    strcat(data, "file.txt");
    funcPtr(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(char * data)
{
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}
} 
