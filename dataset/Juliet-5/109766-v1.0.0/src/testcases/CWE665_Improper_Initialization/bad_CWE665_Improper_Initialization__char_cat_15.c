void FUN0()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    switch(6)
    {
    case 6:
<START>
<END>
        ; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcat(data, source);
        printLine(data);
    }
}
