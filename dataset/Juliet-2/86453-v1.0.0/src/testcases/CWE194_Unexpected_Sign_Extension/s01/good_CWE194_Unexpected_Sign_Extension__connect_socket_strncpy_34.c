typedef union
{
    short unionFirst;
    short unionSecond;
} CWE194_Unexpected_Sign_Extension__connect_socket_strncpy_34_unionType;
void FUN0()
{
    short data;
    CWE194_Unexpected_Sign_Extension__connect_socket_strncpy_34_unionType myUnion;
    data = 0;
    data = 100-1;
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        {
            char source[100];
            char dest[100] = "";
            memset(source, 'A', 100-1);
            source[100-1] = '\0';
            if (data < 100)
            {
                strncpy(dest, source, data);
                dest[data] = '\0'; 
            }
            printLine(dest);
        }
    }
}
