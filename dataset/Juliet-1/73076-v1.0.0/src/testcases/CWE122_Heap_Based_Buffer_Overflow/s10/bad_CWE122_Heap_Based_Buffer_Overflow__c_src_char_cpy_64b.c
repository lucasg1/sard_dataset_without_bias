void FUN0(void * dataVoidPtr);
void FUN1()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    char * * dataPtr = (char * *)dataVoidPtr;
    char * data = (*dataPtr);
    {
        char dest[50] = "";
<START>
        strcpy(dest, data);
<END>
        printLine(data);
        free(data);
    }
}
