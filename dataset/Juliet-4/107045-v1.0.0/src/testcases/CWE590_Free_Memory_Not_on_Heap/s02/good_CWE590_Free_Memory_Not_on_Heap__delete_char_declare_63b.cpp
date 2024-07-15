namespace NAMESPACE0
{
void FUN0(char * * data);
void FUN1()
{
    char * data;
    data = NULL; 
    {
        char * dataBuffer = new char;
        *dataBuffer = 'A';
        data = dataBuffer;
    }
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
    printHexCharLine(*data);
    delete data;
}
} 
