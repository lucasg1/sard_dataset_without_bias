using namespace std;
namespace NAMESPACE0
{
typedef union
{
    char * unionFirst;
    char * unionSecond;
} unionType;
void FUN0()
{
    char * data;
    unionType myUnion;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    strcat(data, "file.txt");
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            ofstream outputFile;
            outputFile.open((char *)data);
            outputFile.close();
        }
    }
}
} 
