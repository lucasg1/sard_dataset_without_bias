using namespace std;
namespace NAMESPACE0
{
static int VAR1 = 0;
static int VAR2 = 0;
static char * FUN0(char * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        strcat(data, "c:\\temp\\file.txt");
        strcat(data, "/tmp/file.txt");
    }
    return data;
}
void FUN1()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    VAR1 = 0; 
    data = FUN0(data);
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
    ;
}
static char * FUN2(char * data)
{
    if(VAR2)
    {
        strcat(data, "c:\\temp\\file.txt");
        strcat(data, "/tmp/file.txt");
    }
    return data;
}
void FUN3()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    VAR2 = 1; 
    data = FUN2(data);
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
    ;
}
} 
