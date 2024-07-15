static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL; 
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * dataBuffer = new char;
            *dataBuffer = 'A';
            data = dataBuffer;
        }
    }
    printHexCharLine(*data);
    delete data;
}
void FUN1()
{
    char * data;
    data = NULL; 
    if(staticTrue)
    {
        {
            char * dataBuffer = new char;
            *dataBuffer = 'A';
            data = dataBuffer;
        }
    }
    printHexCharLine(*data);
    delete data;
}
} 
