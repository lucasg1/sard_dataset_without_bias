void FUN0()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    while(1)
    {
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
        break;
    }
    {
        char dest[50] = "";
        strcpy(dest, data);
        printLine(data);
        free(data);
    }
}
