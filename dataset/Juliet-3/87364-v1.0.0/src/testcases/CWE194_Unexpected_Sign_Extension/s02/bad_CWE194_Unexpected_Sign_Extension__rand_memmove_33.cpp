namespace NAMESPACE0
{
void FUN0()
{
    short data;
    short &dataRef = data;
    data = 0;
    data = (short)RAND32();
    {
        short data = dataRef;
        {
            char source[100];
            char dest[100] = "";
            memset(source, 'A', 100-1);
            source[100-1] = '\0';
            if (data < 100)
            {
<START>
                memmove(dest, source, data);
<END>
                dest[data] = '\0'; 
            }
            printLine(dest);
        }
    }
}
} 
