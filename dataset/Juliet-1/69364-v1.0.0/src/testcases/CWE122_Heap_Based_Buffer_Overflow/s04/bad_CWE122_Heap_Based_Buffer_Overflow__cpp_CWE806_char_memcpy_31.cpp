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
            memcpy(dest, data, strlen(data)*sizeof(char));
<END>
            dest[50-1] = '\0'; 
            printLine(data);
            delete [] data;
        }
    }
}
} 
