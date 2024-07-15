char * FUN0(char * data)
{
    data = (char *)malloc(50*sizeof(char));
    if (data == NULL) {exit(-1);}
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    return data;
}
char * FUN0(char * data);
void FUN2()
{
    char * data;
    data = NULL;
    data = FUN0(data);
    {
        size_t i, destLen;
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
        destLen = strlen(dest);
        for (i = 0; i < destLen; i++)
        {
<START>
            dest[i] = data[i];
<END>
        }
        dest[100-1] = '\0';
        printLine(dest);
        free(data);
    }
}
