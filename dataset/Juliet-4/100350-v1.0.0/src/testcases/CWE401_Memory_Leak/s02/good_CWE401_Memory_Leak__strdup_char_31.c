void FUN0()
{
    char * data;
    data = NULL;
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "a string");
    printLine(data);
    {
        char * dataCopy = data;
        char * data = dataCopy;
        ; 
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
        printLine(data);
    }
    {
        char * dataCopy = data;
        char * data = dataCopy;
        free(data);
    }
}
