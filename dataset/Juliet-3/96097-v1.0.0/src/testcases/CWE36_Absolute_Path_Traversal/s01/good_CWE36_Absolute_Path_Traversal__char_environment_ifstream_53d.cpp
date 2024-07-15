using namespace std;
namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    strcat(data, "c:\\temp\\file.txt");
    strcat(data, "/tmp/file.txt");
    FUN0(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN3(char * data);
void FUN0(char * data)
{
    FUN3(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN5(char * data);
void FUN3(char * data)
{
    FUN5(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN5(char * data)
{
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}
} 
