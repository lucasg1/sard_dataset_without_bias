namespace NAMESPACE0
{
void FUN0(char * * data);
void FUN1()
{
    char * data;
    data = NULL;
    data = new char;
    FUN0(&data);
}
void FUN2(char * * data);
void FUN3()
{
    char * data;
    data = NULL;
    data = (char *)calloc(100, sizeof(char));
    FUN2(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
    delete data;
}
void FUN2(char * * dataPtr)
{
    char * data = *dataPtr;
    free(data);
}
} 
