namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = new char[50];
    data[0] = '\0'; 
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
<START>
        memcpy(data, source, 100*sizeof(char));
<END>
        data[100-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
}
} 
