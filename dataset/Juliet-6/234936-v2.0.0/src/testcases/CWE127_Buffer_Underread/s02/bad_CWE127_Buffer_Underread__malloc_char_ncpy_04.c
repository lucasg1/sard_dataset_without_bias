static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        {
            char * dataBuffer = (char *)malloc(100*sizeof(char));
            if (dataBuffer == NULL) {exit(-1);}
            memset(dataBuffer, 'A', 100-1);
            dataBuffer[100-1] = '\0';
            data = dataBuffer - 8;
        }
    }
    {
        char dest[100];
        memset(dest, 'C', 100-1); 
        dest[100-1] = '\0'; 
<START>
        strncpy(dest, data, strlen(dest));
<END>
        dest[100-1] = '\0';
        printLine(dest);
    }
}
