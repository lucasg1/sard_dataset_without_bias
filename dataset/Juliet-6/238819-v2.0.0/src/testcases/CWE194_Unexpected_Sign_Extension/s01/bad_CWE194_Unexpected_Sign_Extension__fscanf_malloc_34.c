typedef union
{
    short unionFirst;
    short unionSecond;
} CWE194_Unexpected_Sign_Extension__fscanf_malloc_34_unionType;
void FUN0()
{
    short data;
    CWE194_Unexpected_Sign_Extension__fscanf_malloc_34_unionType myUnion;
    data = 0;
    fscanf (stdin, "%hd", &data);
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        if (data < 100)
        {
<START>
            char * dataBuffer = (char *)malloc(data);
<END>
            if (dataBuffer == NULL) {exit(-1);}
            memset(dataBuffer, 'A', data-1);
            dataBuffer[data-1] = '\0';
            printLine(dataBuffer);
            free(dataBuffer);
        }
    }
}
