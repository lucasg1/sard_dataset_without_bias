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
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
<START>
        strncpy(data, source, 100-1);
<END>
        data[100-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
}
} 
