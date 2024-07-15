static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_FALSE)
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
    if(STATIC_CONST_TRUE)
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
