namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN2(char * data);
void FUN3(char * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(char * data);
void FUN5()
{
    char * data;
    data = NULL;
    data = new char;
    FUN1(data);
}
void FUN3(char * data);
void FUN7()
{
    char * data;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
    }
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
{
    delete data;
}
void FUN2(char * data)
{
    free(data);
}
} 
