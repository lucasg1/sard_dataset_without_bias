void FUN0()
{
    switch(6)
    {
    case 6:
    {
        char dest[DEST_SIZE];
        char *result;
<START>
        result = gets(dest);
<END>
        if (result == NULL)
        {
            printLine("Error Condition: alter control flow to indicate action taken");
            exit(1);
        }
        dest[DEST_SIZE-1] = '\0';
        printLine(dest);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
