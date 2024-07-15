void FUN0(int data);
void FUN1()
{
    int data;
    void (*funcPtr) (int) = FUN0;
    data = -1;
    data = 100-1;
    funcPtr(data);
}
void FUN0(int data)
{
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
