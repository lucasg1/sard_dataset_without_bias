static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int data;
    data = -1;
    if(STATIC_CONST_FIVE==5)
    {
        fscanf(stdin, "%d", &data);
    }
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
