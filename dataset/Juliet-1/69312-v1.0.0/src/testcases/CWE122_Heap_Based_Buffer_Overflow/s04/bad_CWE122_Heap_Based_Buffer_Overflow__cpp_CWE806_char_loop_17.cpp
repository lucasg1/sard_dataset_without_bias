namespace NAMESPACE0
{
void FUN0()
{
    int i;
    char * data;
    data = new char[100];
    for(i = 0; i < 1; i++)
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
        delete [] data;
    }
}
} 
