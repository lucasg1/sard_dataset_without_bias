void FUN0()
{
    char * data;
    data = NULL;
    data = (char *)malloc(50*sizeof(char));
    if (data == NULL) {exit(-1);}
    data[0] = '\0'; 
    {
        char * dataCopy = data;
        char * data = dataCopy;
        {
            size_t i;
            char source[100];
            memset(source, 'C', 100-1); 
            source[100-1] = '\0'; 
            for (i = 0; i < 100; i++)
            {
<START>
                data[i] = source[i];
<END>
            }
            data[100-1] = '\0'; 
            printLine(data);
            free(data);
        }
    }
}
