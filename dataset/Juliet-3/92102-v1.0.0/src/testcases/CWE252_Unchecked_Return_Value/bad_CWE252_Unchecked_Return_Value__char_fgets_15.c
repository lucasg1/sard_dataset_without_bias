void FUN0()
{
    switch(6)
    {
    case 6:
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
        printLine("Please enter a string: ");
<START>
        fgets(data, 100, stdin);
<END>
        printLine(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
