namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    NAMESPACE0_FUN0 VAR1(data);
}
} 
using namespace std;
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(char * dataCopy)
{
    data = dataCopy;
    strcat(data, "file.txt");
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}
}
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(char * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    char * data;
};
}
