void FUN0()
{
    int i,k;
    char * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
            printLine(data);
        }
    }
    for(k = 0; k < 1; k++)
    {
        free(data);
    }
}
void FUN1()
{
    int h,j;
    char * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = (char *)ALLOCA(100*sizeof(char));
        strcpy(data, "a string");
        printLine(data);
    }
    for(j = 0; j < 1; j++)
    {
        ; 
    }
}
