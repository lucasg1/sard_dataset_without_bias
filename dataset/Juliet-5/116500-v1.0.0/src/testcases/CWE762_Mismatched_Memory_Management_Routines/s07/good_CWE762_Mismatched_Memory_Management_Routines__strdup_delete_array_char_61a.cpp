namespace NAMESPACE0
{
char * FUN0(char * data)
{
    data = new char[100];
    return data;
}
char * FUN1(char * data)
{
    {
        char myString[] = "myString";
        data = strdup(myString);
    }
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
    delete [] data;
}
char * FUN1(char * data);
void FUN5()
{
    char * data;
    data = NULL;
    data = FUN1(data);
    free(data);
}
} 
