void FUN0()
{
    int data;
    data = -1;
    data = -1;
    {
        int dataCopy = data;
        int data = dataCopy;
        {
            char source[100];
            char dest[100] = "";
            memset(source, 'A', 100-1);
            source[100-1] = '\0';
            if (data < 100)
            {
<START>
                memcpy(dest, source, data);
<END>
                dest[data] = '\0'; 
            }
            printLine(dest);
        }
    }
}
