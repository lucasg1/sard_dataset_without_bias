namespace NAMESPACE0
{
void FUN0()
{
    int data;
    int &dataRef = data;
    data = -1;
    data = 100-1;
    {
        int data = dataRef;
        {
            char source[100];
            char dest[100] = "";
            memset(source, 'A', 100-1);
            source[100-1] = '\0';
            if (data < 100)
            {
                memmove(dest, source, data);
                dest[data] = '\0'; 
            }
            printLine(dest);
        }
    }
}
} 
