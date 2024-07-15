void FUN0()
{
    char * data;
    data = NULL;
    while(1)
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
            printLine(data);
        }
        break;
    }
    while(1)
    {
        free(data);
        break;
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    while(1)
    {
        data = (char *)ALLOCA(100*sizeof(char));
        strcpy(data, "a string");
        printLine(data);
        break;
    }
    while(1)
    {
        ; 
        break;
    }
}
