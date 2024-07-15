namespace NAMESPACE0
{
static char * FUN0(char * data)
{
    data = new char[50];
    data[0] = '\0'; 
    return data;
}
void FUN1()
{
    char * data;
    data = NULL;
    data = FUN0(data);
    {
        size_t i;
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        for (i = 0; i < 100; i++)
        {
<START>
            data[i] = source[i];
<END>
        }
        data[100-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
}
} 
