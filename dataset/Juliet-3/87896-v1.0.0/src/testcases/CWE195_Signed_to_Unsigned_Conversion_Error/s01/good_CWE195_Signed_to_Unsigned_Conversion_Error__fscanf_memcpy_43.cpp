namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = 100-1;
}
void FUN1()
{
    int data;
    data = -1;
    FUN0(data);
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
