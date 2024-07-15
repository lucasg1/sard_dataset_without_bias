namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1(char * data);
void FUN2()
{
    char * data;
    data = NULL;
    data = new char[100];
    FUN0(data);
}
void FUN3()
{
    char * data;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
    }
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
{
    delete [] data;
}
void FUN1(char * data)
{
    free(data);
}
} 
