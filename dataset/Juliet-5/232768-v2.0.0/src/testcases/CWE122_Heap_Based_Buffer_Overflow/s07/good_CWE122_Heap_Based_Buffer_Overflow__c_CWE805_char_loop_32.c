void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    data = NULL;
    {
        char * data = *dataPtr1;
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
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
            free(data);
        }
    }
}
