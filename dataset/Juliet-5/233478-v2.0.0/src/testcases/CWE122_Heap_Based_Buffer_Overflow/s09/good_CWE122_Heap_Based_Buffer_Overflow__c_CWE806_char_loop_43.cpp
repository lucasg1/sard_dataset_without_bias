namespace NAMESPACE0
{
void FUN0(char * &data)
{
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
}
void FUN1()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    FUN0(data);
    {
        char dest[50] = "";
        size_t i, dataLen;
        dataLen = strlen(data);
        for (i = 0; i < dataLen; i++)
        {
            dest[i] = data[i];
        }
        dest[50-1] = '\0'; 
        printLine(data);
        free(data);
    }
}
} 
