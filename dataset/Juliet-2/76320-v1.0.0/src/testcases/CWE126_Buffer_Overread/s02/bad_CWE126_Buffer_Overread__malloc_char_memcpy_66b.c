void FUN0(char * dataArray[]);
void FUN1()
{
    char * data;
    char * dataArray[5];
    data = NULL;
    data = (char *)malloc(50*sizeof(char));
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(char * dataArray[])
{
    char * data = dataArray[2];
    {
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
<START>
        memcpy(dest, data, strlen(dest)*sizeof(char));
<END>
        dest[100-1] = '\0';
        printLine(dest);
        free(data);
    }
}
