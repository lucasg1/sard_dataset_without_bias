namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char VAR1[50];
    char VAR2[100];
    data = VAR2;
    data[0] = '\0'; 
    {
        char * data = dataRef;
        {
            size_t i;
            char source[100];
            memset(source, 'C', 100-1); 
            source[100-1] = '\0'; 
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            data[100-1] = '\0'; 
            printLine(data);
        }
    }
}
} 
