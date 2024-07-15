void FUN0()
{
    char * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (char *)malloc(50*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
<START>
        memcpy(dest, data, strlen(dest)*sizeof(char));
<END>
        dest[100-1] = '\0';
        printLine(dest);
        free(data);
    }
}
