namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char VAR1[10];
    char VAR2[10+1];
    data = VAR1;
    data[0] = '\0'; 
    {
        char * data = dataRef;
        {
            char source[10+1] = SRC_STRING;
            size_t i, sourceLen;
            sourceLen = strlen(source);
            for (i = 0; i < sourceLen + 1; i++)
            {
<START>
                data[i] = source[i];
<END>
            }
            printLine(data);
        }
    }
}
} 
