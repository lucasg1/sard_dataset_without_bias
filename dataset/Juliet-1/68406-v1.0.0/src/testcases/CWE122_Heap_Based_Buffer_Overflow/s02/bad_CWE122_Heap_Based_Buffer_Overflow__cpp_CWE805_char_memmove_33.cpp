namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    data = NULL;
    data = new char[50];
    data[0] = '\0'; 
    {
        char * data = dataRef;
        {
            char source[100];
            memset(source, 'C', 100-1); 
            source[100-1] = '\0'; 
<START>
            memmove(data, source, 100*sizeof(char));
<END>
            data[100-1] = '\0'; 
            printLine(data);
            delete [] data;
        }
    }
}
} 
