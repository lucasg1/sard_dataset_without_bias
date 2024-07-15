namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char * VAR1 = (char *)ALLOCA((10)*sizeof(char));
    char * VAR2 = (char *)ALLOCA((10+1)*sizeof(char));
    data = VAR1;
    data[0] = '\0'; 
    {
        char * data = dataRef;
        {
            char source[10+1] = SRC_STRING;
<START>
            strncpy(data, source, strlen(source) + 1);
<END>
            printLine(data);
        }
    }
}
} 
