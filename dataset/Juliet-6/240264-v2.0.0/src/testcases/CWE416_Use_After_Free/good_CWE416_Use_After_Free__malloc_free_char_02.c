void FUN0()
{
    char * data;
    data = NULL;
    if(1)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        free(data);
    }
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    if(1)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        free(data);
    }
    if(1)
    {
        ; 
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(1)
    {
        printLine(data);
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(1)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(1)
    {
        printLine(data);
    }
}
