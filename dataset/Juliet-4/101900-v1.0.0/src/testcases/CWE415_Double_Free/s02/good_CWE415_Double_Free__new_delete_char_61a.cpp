namespace NAMESPACE0
{
char * FUN0(char * data)
{
    data = new char;
    return data;
}
char * FUN1(char * data)
{
    data = new char;
    delete data;
    return data;
}
} 
namespace NAMESPACE0
{
char * FUN0(char * data);
void FUN3()
{
    char * data;
    data = NULL;
    data = FUN0(data);
    delete data;
}
char * FUN1(char * data);
void FUN5()
{
    char * data;
    data = NULL;
    data = FUN1(data);
    ; 
}
} 
