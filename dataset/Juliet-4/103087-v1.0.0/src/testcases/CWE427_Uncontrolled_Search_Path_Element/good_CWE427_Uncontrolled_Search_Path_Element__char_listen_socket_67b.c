typedef struct _CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_67_structType
{
    char * structFirst;
} CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_67_structType;
void FUN0(CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_67_structType myStruct;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    strcat(data, NEW_PATH);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_67_structType
{
    char * structFirst;
} CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_67_structType;
void FUN0(CWE427_Uncontrolled_Search_Path_Element__char_listen_socket_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    PUTENV(data);
}
