using namespace std;
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
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
void FUN0(void * dataVoidPtr)
{
    char * * dataPtr = (char * *)dataVoidPtr;
    char * data = (*dataPtr);
    {
        ofstream outputFile;
        outputFile.open((char *)data);
        outputFile.close();
    }
}
} 
