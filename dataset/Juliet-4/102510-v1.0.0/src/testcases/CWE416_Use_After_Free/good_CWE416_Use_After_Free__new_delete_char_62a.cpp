namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = new char;
    *data = 'A';
}
void FUN1(char * &data)
{
    data = new char;
    *data = 'A';
    delete data;
}
} 
namespace NAMESPACE0
{
void FUN0(char * &data);
void FUN3()
{
    char * data;
    data = NULL;
    FUN0(data);
    printHexCharLine(*data);
}
void FUN1(char * &data);
void FUN5()
{
    char * data;
    data = NULL;
    FUN1(data);
    ; 
}
} 
