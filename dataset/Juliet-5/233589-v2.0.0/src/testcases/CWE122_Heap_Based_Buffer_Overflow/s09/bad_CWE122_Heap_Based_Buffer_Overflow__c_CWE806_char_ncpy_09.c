void FUN0()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    if(GLOBAL_CONST_TRUE)
    {
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
    }
    {
        char dest[50] = "";
<START>
        strncpy(dest, data, strlen(data));
<END>
        dest[50-1] = '\0'; 
        printLine(data);
        free(data);
    }
}
