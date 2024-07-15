using namespace std;
namespace NAMESPACE0
{
static char * VAR1;
static char * VAR2;
void FUN0()
{
    char * data = VAR2;
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}
void FUN1()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    strcat(data, "c:\\temp\\file.txt");
    strcat(data, "/tmp/file.txt");
    VAR2 = data;
    FUN0();
}
} 
