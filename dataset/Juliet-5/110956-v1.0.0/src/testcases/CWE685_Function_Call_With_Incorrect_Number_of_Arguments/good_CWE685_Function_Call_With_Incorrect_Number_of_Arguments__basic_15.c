void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        char dest[DEST_SIZE];
        sprintf(dest, "%s %s", SOURCE_STRING, SOURCE_STRING);
        printLine(dest);
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        char dest[DEST_SIZE];
        sprintf(dest, "%s %s", SOURCE_STRING, SOURCE_STRING);
        printLine(dest);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
