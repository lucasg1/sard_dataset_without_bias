namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char * VAR1 = (char *)ALLOCA(50*sizeof(char));
    char * VAR2 = (char *)ALLOCA(100*sizeof(char));
    data = VAR1;
    data[0] = '\0'; 
    {
        char * data = dataRef;
        {
            char source[100];
            memset(source, 'C', 100-1); 
            source[100-1] = '\0'; 
<START>
            strncat(data, source, 100);
<END>
            printLine(data);
        }
    }
}
} 
