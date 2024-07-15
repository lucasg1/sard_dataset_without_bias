void FUN0()
{
    if(5==5)
    {
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
    }
}
