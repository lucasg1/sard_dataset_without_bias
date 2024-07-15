namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    switch(6)
    {
    case 6:
    {
        char * dataBuffer = new char[100];
        memset(dataBuffer, 'A', 100-1);
        dataBuffer[100-1] = '\0';
        data = dataBuffer - 8;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        char dest[100*2];
        memset(dest, 'C', 100*2-1); 
        dest[100*2-1] = '\0'; 
<START>
        strcpy(dest, data);
<END>
        printLine(dest);
    }
}
} 
