void FUN0(int data);
void FUN1()
{
    int data;
    data = -1;
    fscanf(stdin, "%d", &data);
    FUN0(data);
}
void FUN2(int data);
void FUN0(int data)
{
    FUN2(data);
}
void FUN2(int data)
{
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
