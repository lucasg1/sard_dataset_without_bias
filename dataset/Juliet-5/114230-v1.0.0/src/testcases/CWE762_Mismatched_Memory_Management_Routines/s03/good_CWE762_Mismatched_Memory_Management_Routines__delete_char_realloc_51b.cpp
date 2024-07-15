namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1(char * data);
void FUN2()
{
    char * data;
    data = NULL;
    data = new char;
    FUN0(data);
}
void FUN3()
{
    char * data;
    data = NULL;
    data = NULL;
    data = (char *)realloc(data, 100*sizeof(char));
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
{
    delete data;
}
void FUN1(char * data)
{
    free(data);
}
} 
