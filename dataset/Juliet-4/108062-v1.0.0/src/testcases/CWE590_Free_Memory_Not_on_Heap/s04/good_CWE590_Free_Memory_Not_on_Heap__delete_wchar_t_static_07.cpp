static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL; 
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            wchar_t * dataBuffer = new wchar_t;
            *dataBuffer = L'A';
            data = dataBuffer;
        }
    }
    printWcharLine(*data);
    delete data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL; 
    if(staticFive==5)
    {
        {
            wchar_t * dataBuffer = new wchar_t;
            *dataBuffer = L'A';
            data = dataBuffer;
        }
    }
    printWcharLine(*data);
    delete data;
}
} 
