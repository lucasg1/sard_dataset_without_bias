namespace NAMESPACE0
{
static char * FUN0(char * data)
{
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    return data;
}
void FUN1()
{
    char * data;
    data = new char[100];
    data = FUN0(data);
    {
        char dest[50] = "";
<START>
        strcpy(dest, data);
<END>
        printLine(data);
        delete [] data;
    }
}
} 
