void FUN0()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    goto source;
source:
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    {
        char dest[50] = "";
<START>
        strncat(dest, data, strlen(data));
<END>
        dest[50-1] = '\0'; 
        printLine(data);
        free(data);
    }
}
