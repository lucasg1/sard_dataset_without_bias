using namespace std;
namespace NAMESPACE0
{
void FUN0(char * dataArray[]);
void FUN1()
{
    char * data;
    char * dataArray[5];
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    strcat(data, "file.txt");
    dataArray[2] = data;
    FUN0(dataArray);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(char * dataArray[])
{
    char * data = dataArray[2];
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}
} 
