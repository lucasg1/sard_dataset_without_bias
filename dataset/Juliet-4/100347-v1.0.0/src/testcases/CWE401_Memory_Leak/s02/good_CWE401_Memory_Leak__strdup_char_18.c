void FUN0()
{
    char * data;
    data = NULL;
    goto source;
source:
    {
        char myString[] = "myString";
        data = strdup(myString);
        printLine(data);
    }
    goto sink;
sink:
    free(data);
}
void FUN1()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "a string");
    printLine(data);
    goto sink;
sink:
    ; 
}
