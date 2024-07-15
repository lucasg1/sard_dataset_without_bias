void FUN0()
{
    char * data;
    data = NULL;
    while(1)
    {
        data = (char *)calloc(100, sizeof(char));
        if (data == NULL) {exit(-1);}
        strcpy(data, "A String");
        printLine(data);
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
        strcpy(data, "A String");
        printLine(data);
        break;
    }
    while(1)
    {
        ; 
        break;
    }
}
