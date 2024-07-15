void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)malloc(50*sizeof(char));
    data[0] = '\0'; 
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
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
<START>
        strcat(data, source);
<END>
        printLine(data);
        free(data);
    }
}
