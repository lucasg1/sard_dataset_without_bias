using namespace std;
namespace NAMESPACE0
{
typedef struct _structType
{
    char * structFirst;
} structType;
void FUN0(structType myStruct);
void FUN1()
{
    char * data;
    structType myStruct;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    strcat(data, "file.txt");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
} 
using namespace std;
namespace NAMESPACE0
{
typedef struct _structType
{
    char * structFirst;
} structType;
void FUN0(structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}
} 
