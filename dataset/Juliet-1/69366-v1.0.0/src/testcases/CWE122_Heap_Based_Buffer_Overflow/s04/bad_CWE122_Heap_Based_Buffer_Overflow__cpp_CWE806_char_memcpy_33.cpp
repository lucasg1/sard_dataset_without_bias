namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    data = new char[100];
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    {
        char * data = dataRef;
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
