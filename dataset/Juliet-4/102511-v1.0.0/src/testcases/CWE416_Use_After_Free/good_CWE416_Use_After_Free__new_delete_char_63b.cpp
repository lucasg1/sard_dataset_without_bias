namespace NAMESPACE0
{
void FUN0(char * * data);
void FUN1()
{
    char * data;
    data = NULL;
    data = new char;
    *data = 'A';
    FUN0(&data);
}
void FUN2(char * * data);
void FUN3()
{
    char * data;
    data = NULL;
    data = new char;
    *data = 'A';
    delete data;
    FUN2(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
    printHexCharLine(*data);
}
void FUN2(char * * dataPtr)
{
    char * data = *dataPtr;
    ; 
}
} 
