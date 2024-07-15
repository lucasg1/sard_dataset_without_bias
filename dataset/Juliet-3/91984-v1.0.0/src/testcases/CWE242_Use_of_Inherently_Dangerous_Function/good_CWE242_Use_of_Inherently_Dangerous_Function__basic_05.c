static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char dest[DEST_SIZE];
            char *result;
            result = fgets(dest, DEST_SIZE, stdin);
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
void FUN1()
{
    if(staticTrue)
    {
        {
            char dest[DEST_SIZE];
            char *result;
            result = fgets(dest, DEST_SIZE, stdin);
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
