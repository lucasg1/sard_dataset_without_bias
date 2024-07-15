void FUN0()
{
    char * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        free(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(8)
    {
    case 7:
        printLine("Benign, fixed string");
        break;
    default:
        ; 
        break;
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        free(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        ; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        break;
    }
    switch(7)
    {
    case 7:
        printLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        printLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
