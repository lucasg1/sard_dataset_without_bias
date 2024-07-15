namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    data = NULL;
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "a string");
    printLine(data);
    {
        char * data = dataRef;
        ; 
    }
}
void FUN1()
{
    char * data;
    char * &dataRef = data;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
        printLine(data);
    }
    {
        char * data = dataRef;
        free(data);
    }
}
} 
