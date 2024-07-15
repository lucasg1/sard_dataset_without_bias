void FUN0(char * dataArray[]);
void FUN1()
{
    char * data;
    char * dataArray[5];
    data = NULL;
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(char * dataArray[]);
void FUN3()
{
    char * data;
    char * dataArray[5];
    data = NULL;
    data = (char *)calloc(100, sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(char * dataArray[])
{
    char * data = dataArray[2];
    ; 
}
void FUN2(char * dataArray[])
{
    char * data = dataArray[2];
    free(data);
}
