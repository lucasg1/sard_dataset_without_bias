namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = new char[100];
    if(globalReturnsTrue())
    {
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
    }
    {
        char dest[50] = "";
<START>
        SNPRINTF(dest, strlen(data), "%s", data);
<END>
        printLine(data);
        delete [] data;
    }
}
} 
