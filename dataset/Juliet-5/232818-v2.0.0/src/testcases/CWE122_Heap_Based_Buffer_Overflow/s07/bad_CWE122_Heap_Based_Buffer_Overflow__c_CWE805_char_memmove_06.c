static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (char *)malloc(50*sizeof(char));
        if (data == NULL) {exit(-1);}
        data[0] = '\0'; 
    }
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
<START>
        memmove(data, source, 100*sizeof(char));
<END>
        data[100-1] = '\0'; 
        printLine(data);
        free(data);
    }
}
