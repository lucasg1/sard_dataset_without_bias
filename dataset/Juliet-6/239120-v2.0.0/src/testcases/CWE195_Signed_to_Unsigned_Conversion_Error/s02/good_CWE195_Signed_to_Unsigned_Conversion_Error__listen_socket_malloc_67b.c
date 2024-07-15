typedef struct _CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_67_structType
{
    int structFirst;
} CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_67_structType;
void FUN0(CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_67_structType myStruct);
void FUN1()
{
    int data;
    CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_67_structType myStruct;
    data = -1;
    data = 100-1;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_67_structType
{
    int structFirst;
} CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_67_structType;
void FUN0(CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_67_structType myStruct)
{
    int data = myStruct.structFirst;
    if (data < 100)
    {
        char * dataBuffer = (char *)malloc(data);
        if (dataBuffer == NULL) {exit(-1);}
        memset(dataBuffer, 'A', data-1);
        dataBuffer[data-1] = '\0';
        printLine(dataBuffer);
        free(dataBuffer);
    }
}
