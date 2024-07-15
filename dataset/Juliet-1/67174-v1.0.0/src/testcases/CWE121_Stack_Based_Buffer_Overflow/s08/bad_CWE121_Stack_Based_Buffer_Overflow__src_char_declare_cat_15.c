void FUN0()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    switch(6)
    {
    case 6:
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        char dest[50] = "";
<START>
        strcat(dest, data);
<END>
        printLine(data);
    }
}
