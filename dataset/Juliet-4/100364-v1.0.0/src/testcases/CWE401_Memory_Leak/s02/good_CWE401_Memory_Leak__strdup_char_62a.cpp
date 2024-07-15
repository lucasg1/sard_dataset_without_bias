namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "a string");
    printLine(data);
}
void FUN1(char * &data)
{
    {
        char myString[] = "myString";
        data = strdup(myString);
        printLine(data);
    }
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
    ; 
}
void FUN1(char * &data);
void FUN5()
{
    char * data;
    data = NULL;
    FUN1(data);
    free(data);
}
} 
