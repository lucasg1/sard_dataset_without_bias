namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char VAR1[50];
    char VAR2[100];
    data = VAR1;
    data[0] = '\0'; 
    {
        char * data = dataRef;
        {
            char source[100];
            memset(source, 'C', 100-1); 
            source[100-1] = '\0'; 
<START>
            memcpy(data, source, 100*sizeof(char));
<END>
            data[100-1] = '\0'; 
            printLine(data);
        }
    }
}
} 
