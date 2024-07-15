void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char VAR0[50];
    char VAR1[100];
    {
        char * data = *dataPtr1;
        data = VAR1;
        data[0] = '\0'; 
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
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
