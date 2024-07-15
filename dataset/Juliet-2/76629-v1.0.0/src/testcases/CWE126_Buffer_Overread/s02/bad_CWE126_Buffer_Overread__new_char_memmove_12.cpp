namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new char[50];
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
    }
    else
    {
        data = new char[100];
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
    }
    {
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
<START>
        memmove(dest, data, strlen(dest)*sizeof(char));
<END>
        dest[100-1] = '\0';
        printLine(dest);
        delete [] data;
    }
}
} 
