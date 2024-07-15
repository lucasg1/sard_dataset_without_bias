namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char VAR1[10];
    char VAR2[10+1];
    data = VAR2;
    data[0] = '\0'; 
    {
        char * data = dataRef;
        {
            char source[10+1] = SRC_STRING;
            memcpy(data, source, (strlen(source) + 1) * sizeof(char));
            printLine(data);
        }
    }
}
} 
