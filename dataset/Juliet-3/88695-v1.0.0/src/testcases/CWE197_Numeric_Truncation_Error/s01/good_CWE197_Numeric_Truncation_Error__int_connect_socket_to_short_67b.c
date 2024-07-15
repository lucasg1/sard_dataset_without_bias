typedef struct _CWE197_Numeric_Truncation_Error__int_connect_socket_to_short_67_structType
{
    int structFirst;
} CWE197_Numeric_Truncation_Error__int_connect_socket_to_short_67_structType;
void FUN0(CWE197_Numeric_Truncation_Error__int_connect_socket_to_short_67_structType myStruct);
void FUN1()
{
    int data;
    CWE197_Numeric_Truncation_Error__int_connect_socket_to_short_67_structType myStruct;
    data = -1;
    data = CHAR_MAX-5;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE197_Numeric_Truncation_Error__int_connect_socket_to_short_67_structType
{
    int structFirst;
} CWE197_Numeric_Truncation_Error__int_connect_socket_to_short_67_structType;
void FUN0(CWE197_Numeric_Truncation_Error__int_connect_socket_to_short_67_structType myStruct)
{
    int data = myStruct.structFirst;
    {
        short shortData = (short)data;
        printShortLine(shortData);
    }
}
