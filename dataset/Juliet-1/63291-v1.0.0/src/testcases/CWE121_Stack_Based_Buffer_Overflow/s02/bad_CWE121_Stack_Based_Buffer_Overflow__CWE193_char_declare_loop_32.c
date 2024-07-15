void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char VAR0[10];
    char VAR1[10+1];
    {
        char * data = *dataPtr1;
        data = VAR0;
        data[0] = '\0'; 
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
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
