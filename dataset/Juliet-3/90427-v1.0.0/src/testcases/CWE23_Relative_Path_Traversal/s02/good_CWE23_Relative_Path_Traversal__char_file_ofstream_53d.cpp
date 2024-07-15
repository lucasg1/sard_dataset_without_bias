using namespace std;
namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN1(char * data);
void FUN3()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    strcat(data, "file.txt");
    FUN1(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN5(char * data);
void FUN0(char * data)
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
        ofstream outputFile;
        outputFile.open((char *)data);
        outputFile.close();
    }
}
} 
