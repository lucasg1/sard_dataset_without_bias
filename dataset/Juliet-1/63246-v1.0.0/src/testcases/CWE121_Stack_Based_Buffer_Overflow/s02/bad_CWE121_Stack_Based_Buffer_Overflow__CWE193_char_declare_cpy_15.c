void FUN0()
{
    char * data;
    char VAR0[10];
    char VAR1[10+1];
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
        char source[10+1] = SRC_STRING;
<START>
        strcpy(data, source);
<END>
        printLine(data);
    }
}
