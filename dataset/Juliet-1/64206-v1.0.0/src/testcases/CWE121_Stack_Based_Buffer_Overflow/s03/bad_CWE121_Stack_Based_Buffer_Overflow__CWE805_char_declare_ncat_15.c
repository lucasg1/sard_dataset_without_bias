void FUN0()
{
    char * data;
    char VAR0[50];
    char VAR1[100];
    switch(6)
    {
    case 6:
        data = VAR0;
        data[0] = '\0'; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
<START>
        strncat(data, source, 100);
<END>
        printLine(data);
    }
}
