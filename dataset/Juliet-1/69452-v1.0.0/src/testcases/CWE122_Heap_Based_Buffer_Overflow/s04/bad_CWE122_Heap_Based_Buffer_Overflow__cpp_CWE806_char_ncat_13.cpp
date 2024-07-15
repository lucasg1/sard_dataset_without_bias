namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = new char[100];
    if(GLOBAL_CONST_FIVE==5)
    {
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
    }
    {
        char dest[50] = "";
<START>
        strncat(dest, data, strlen(data));
<END>
        dest[50-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
}
} 
