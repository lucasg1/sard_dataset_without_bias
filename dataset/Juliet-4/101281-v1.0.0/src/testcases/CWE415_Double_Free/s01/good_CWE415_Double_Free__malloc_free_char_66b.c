void FUN0(char * dataArray[]);
void FUN1()
{
    char * data;
    char * dataArray[5];
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(char * dataArray[]);
void FUN3()
{
    char * data;
    char * dataArray[5];
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    free(data);
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(char * dataArray[])
{
    char * data = dataArray[2];
    free(data);
}
void FUN2(char * dataArray[])
{
    char * data = dataArray[2];
    ; 
}
