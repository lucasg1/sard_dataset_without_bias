typedef union
{
    int unionFirst;
    int unionSecond;
} CWE195_Signed_to_Unsigned_Conversion_Error__fscanf_malloc_34_unionType;
void FUN0()
{
    int data;
    CWE195_Signed_to_Unsigned_Conversion_Error__fscanf_malloc_34_unionType myUnion;
    data = -1;
    fscanf(stdin, "%d", &data);
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
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
