void FUN0()
{
    switch(6)
    {
    case 6:
<START>
        if (RENAME(OLD_BAD_FILE_NAME, NEW_BAD_FILE_NAME) == 0)
<END>
        {
            printLine("rename failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
