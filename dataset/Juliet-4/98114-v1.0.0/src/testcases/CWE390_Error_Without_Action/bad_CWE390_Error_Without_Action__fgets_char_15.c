void FUN0()
{
    switch(6)
    {
    case 6:
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
        printLine("Please enter a string: ");
        if (fgets(data, 100, stdin) == NULL)
        {
<START>
        }
<END>
        printLine(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
