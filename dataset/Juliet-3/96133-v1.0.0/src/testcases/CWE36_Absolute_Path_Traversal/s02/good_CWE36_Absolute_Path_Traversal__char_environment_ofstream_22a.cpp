namespace NAMESPACE0
{
extern int VAR1;
extern int VAR2;
char * FUN0(char * data)
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
char * FUN1(char * data)
{
    if(VAR2)
    {
        strcat(data, "c:\\temp\\file.txt");
        strcat(data, "/tmp/file.txt");
    }
    return data;
}
} 
using namespace std;
namespace NAMESPACE0
{
int VAR1 = 0;
int VAR2 = 0;
char * FUN0(char * data);
void FUN3()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    VAR1 = 0; 
    data = FUN0(data);
    {
        ofstream outputFile;
        outputFile.open((char *)data);
        outputFile.close();
    }
    ;
}
char * FUN1(char * data);
void FUN5()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    VAR2 = 1; 
    data = FUN1(data);
    {
        ofstream outputFile;
        outputFile.open((char *)data);
        outputFile.close();
    }
    ;
}
} 
