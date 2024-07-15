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
void FUN2(char * data);
void FUN0(char * data)
{
    FUN2(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN4(char * data);
void FUN5()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    strcat(data, "file.txt");
    FUN4(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN1(char * data);
void FUN4(char * data)
{
    FUN1(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN2(char * data)
{
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}
} 
