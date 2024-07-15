namespace NAMESPACE0
{
typedef union
{
    char * unionFirst;
    char * unionSecond;
} unionType;
void FUN0()
{
    char * data;
    unionType myUnion;
    data = new char[100];
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
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
            delete [] data;
        }
    }
}
} 
