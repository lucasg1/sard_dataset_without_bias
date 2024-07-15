void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char VAR0[50];
    char VAR1[100];
    memset(VAR0, 'A', 50-1); 
    VAR0[50-1] = '\0'; 
    memset(VAR1, 'A', 100-1); 
    VAR1[100-1] = '\0'; 
    {
        char * data = *dataPtr1;
        data = VAR0;
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        {
            char dest[100];
            memset(dest, 'C', 100-1);
            dest[100-1] = '\0'; 
<START>
            memcpy(dest, data, strlen(dest)*sizeof(char));
<END>
            dest[100-1] = '\0';
            printLine(dest);
        }
    }
}
