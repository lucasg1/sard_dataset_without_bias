void FUN0(char * dataArray[]);
void FUN1()
{
    char * data;
    char * dataArray[5];
    data = NULL; 
    data = (char *)calloc(20, sizeof(char));
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(char * dataArray[])
{
    char * data = dataArray[2];
<START>
    strcpy(data, "Initialize");
<END>
    printLine(data);
    free(data);
}
