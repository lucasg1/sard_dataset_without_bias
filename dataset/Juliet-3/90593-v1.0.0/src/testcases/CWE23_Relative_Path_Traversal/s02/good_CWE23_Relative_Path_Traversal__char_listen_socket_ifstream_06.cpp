using namespace std;
static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        strcat(data, "file.txt");
    }
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}
void FUN1()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    if(STATIC_CONST_FIVE==5)
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
