void FUN0(char * * data);
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    memset(data, 'A', 100-1);
    data[100-1] = '\0';
    FUN0(&data);
}
void FUN2(char * * data);
void FUN3()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    memset(data, 'A', 100-1);
    data[100-1] = '\0';
    free(data);
    FUN2(&data);
}
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
    printLine(data);
}
void FUN2(char * * dataPtr)
{
    char * data = *dataPtr;
    ; 
}
