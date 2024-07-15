namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = new char[100];
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    {
        char * dataCopy = data;
        char * data = dataCopy;
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
} 
