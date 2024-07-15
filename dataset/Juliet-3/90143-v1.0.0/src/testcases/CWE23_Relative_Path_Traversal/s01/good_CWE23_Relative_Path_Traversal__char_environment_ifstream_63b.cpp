using namespace std;
namespace NAMESPACE0
{
void FUN0(char * * data);
void FUN1()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    strcat(data, "file.txt");
    FUN0(&data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}
} 
