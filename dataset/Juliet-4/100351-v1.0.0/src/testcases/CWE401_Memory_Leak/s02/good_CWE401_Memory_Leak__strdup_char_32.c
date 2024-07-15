void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    data = NULL;
    {
        char * data = *dataPtr1;
        data = (char *)ALLOCA(100*sizeof(char));
        strcpy(data, "a string");
        printLine(data);
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        ; 
    }
}
void FUN1()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    data = NULL;
    {
        char * data = *dataPtr1;
        {
            char myString[] = "myString";
            data = strdup(myString);
            printLine(data);
        }
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        free(data);
    }
}
