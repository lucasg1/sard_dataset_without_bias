static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    if(STATIC_CONST_TRUE)
    {
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
    }
    {
        char dest[50] = "";
        size_t i, dataLen;
        dataLen = strlen(data);
        for (i = 0; i < dataLen; i++)
        {
<START>
            dest[i] = data[i];
<END>
        }
        dest[50-1] = '\0'; 
        printLine(data);
        free(data);
    }
}
