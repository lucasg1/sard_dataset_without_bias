void FUN0(char * dataArray[]);
void FUN1()
{
    char * data;
    char * dataArray[5];
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    data[0] = '\0'; 
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(char * dataArray[])
{
    char * data = dataArray[2];
    {
        size_t i;
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        for (i = 0; i < 100; i++)
        {
            data[i] = source[i];
        }
        data[100-1] = '\0'; 
        printLine(data);
        free(data);
    }
}
