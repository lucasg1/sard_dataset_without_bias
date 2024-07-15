namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL; 
    {
        char * dataBuffer = new char;
        *dataBuffer = 'A';
        data = dataBuffer;
    }
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN3(char * data);
void FUN0(char * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN3(char * data)
{
    printHexCharLine(*data);
    delete data;
}
} 
