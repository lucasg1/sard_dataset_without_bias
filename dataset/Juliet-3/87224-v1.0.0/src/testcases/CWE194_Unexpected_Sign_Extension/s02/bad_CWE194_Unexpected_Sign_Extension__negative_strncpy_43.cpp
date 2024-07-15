namespace NAMESPACE0
{
void FUN0(short &data)
{
    data = -1;
}
void FUN1()
{
    short data;
    data = 0;
    FUN0(data);
    {
        char source[100];
        char dest[100] = "";
        memset(source, 'A', 100-1);
        source[100-1] = '\0';
        if (data < 100)
        {
<START>
            strncpy(dest, source, data);
<END>
            dest[data] = '\0'; 
        }
        printLine(dest);
    }
}
} 
