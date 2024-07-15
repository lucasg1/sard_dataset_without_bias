using namespace std;
char * VAR0;
char * VAR1;
namespace NAMESPACE2
{
void FUN0();
void FUN1()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    strcat(data, "file.txt");
    VAR1 = data;
    FUN0();
}
} 
using namespace std;
extern char * VAR0;
extern char * VAR1;
namespace NAMESPACE2
{
void FUN0()
{
    char * data = VAR1;
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}
} 
