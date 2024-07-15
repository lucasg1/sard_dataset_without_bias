void FUN0(char * * dataPtr);
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)malloc(50*sizeof(char));
    data[0] = '\0'; 
    FUN0(&data);
}
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
<START>
        strncpy(data, source, 100-1);
<END>
        data[100-1] = '\0'; 
        printLine(data);
        free(data);
    }
}
