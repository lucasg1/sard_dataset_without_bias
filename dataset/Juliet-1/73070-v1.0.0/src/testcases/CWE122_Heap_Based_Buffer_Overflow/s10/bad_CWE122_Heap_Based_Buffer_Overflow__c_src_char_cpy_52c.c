void FUN0(char * data);
void FUN1()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    FUN0(data);
}
void FUN2(char * data);
void FUN0(char * data)
{
    FUN2(data);
}
void FUN2(char * data)
{
    {
        char dest[50] = "";
<START>
        strcpy(dest, data);
<END>
        printLine(data);
        free(data);
    }
}
