namespace NAMESPACE0
{
void FUN0()
{
    short data;
    short &dataRef = data;
    data = 0;
    data = 100-1;
    {
        short data = dataRef;
        {
            char source[100];
            char dest[100] = "";
            memset(source, 'A', 100-1);
            source[100-1] = '\0';
            if (data < 100)
            {
                memcpy(dest, source, data);
                dest[data] = '\0'; 
            }
            printLine(dest);
        }
    }
}
} 
