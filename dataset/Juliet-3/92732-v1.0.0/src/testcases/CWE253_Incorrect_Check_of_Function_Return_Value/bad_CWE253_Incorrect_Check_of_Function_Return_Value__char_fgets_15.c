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
        if (fgets(data, 100, stdin) < 0)
<END>
        {
            printLine("fgets failed!");
            exit(1);
        }
        printLine(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
