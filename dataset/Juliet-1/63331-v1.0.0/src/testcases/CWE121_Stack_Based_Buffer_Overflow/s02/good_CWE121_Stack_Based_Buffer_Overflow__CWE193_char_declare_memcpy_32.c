void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char VAR0[10];
    char VAR1[10+1];
    {
        char * data = *dataPtr1;
        data = VAR1;
        data[0] = '\0'; 
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        {
            char source[10+1] = SRC_STRING;
            memcpy(data, source, (strlen(source) + 1) * sizeof(char));
            printLine(data);
        }
    }
}
