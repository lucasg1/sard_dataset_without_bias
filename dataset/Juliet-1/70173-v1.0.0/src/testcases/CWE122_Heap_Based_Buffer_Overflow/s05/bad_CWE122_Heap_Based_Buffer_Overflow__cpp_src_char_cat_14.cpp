namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = new char[100];
    if(globalFive==5)
    {
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
    }
    {
        char dest[50] = "";
<START>
        strcat(dest, data);
<END>
        printLine(data);
        delete [] data;
    }
}
} 
