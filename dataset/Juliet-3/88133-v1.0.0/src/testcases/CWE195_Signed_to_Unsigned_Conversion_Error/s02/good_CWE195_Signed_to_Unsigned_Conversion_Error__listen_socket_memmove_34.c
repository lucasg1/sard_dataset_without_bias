typedef union
{
    int unionFirst;
    int unionSecond;
} CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memmove_34_unionType;
void FUN0()
{
    int data;
    CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memmove_34_unionType myUnion;
    data = -1;
    data = 100-1;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
            char source[100];
            char dest[100] = "";
            memset(source, 'A', 100-1);
            source[100-1] = '\0';
            if (data < 100)
            {
                memmove(dest, source, data);
                dest[data] = '\0'; 
            }
            printLine(dest);
        }
    }
}
