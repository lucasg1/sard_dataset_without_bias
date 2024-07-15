namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "a string");
    printLine(data);
}
void FUN1()
{
    char * data;
    data = NULL;
    FUN0(data);
    ; 
}
void FUN2(char * &data)
{
    {
        char myString[] = "myString";
        data = strdup(myString);
        printLine(data);
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    FUN2(data);
    free(data);
}
} 
