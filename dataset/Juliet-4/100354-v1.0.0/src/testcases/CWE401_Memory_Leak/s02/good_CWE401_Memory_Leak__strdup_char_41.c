void FUN0(char * data)
{
    ; 
}
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "a string");
    printLine(data);
    FUN0(data);
}
void FUN2(char * data)
{
    free(data);
}
void FUN3()
{
    char * data;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
        printLine(data);
    }
    FUN2(data);
}
