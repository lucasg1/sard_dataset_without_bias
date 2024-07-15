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
            char source[100];
            memset(source, 'C', 100-1); 
            source[100-1] = '\0'; 
            memmove(data, source, 100*sizeof(char));
            data[100-1] = '\0'; 
            printLine(data);
        }
    }
}
