void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        size_t bytesTranslated = 0;
        char charString[100];
        charString[0] = '\0';
        errno = 0; 
        bytesTranslated = wcstombs((char *)&charString, L"\xffff", 100);
        if (errno == EILSEQ)
        {
            printLine("wcstombs() failed");
            exit(1);
        }
        printUnsignedLine(bytesTranslated);
        printLine(charString);
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
        size_t bytesTranslated = 0;
        char charString[100];
        charString[0] = '\0';
        errno = 0; 
        bytesTranslated = wcstombs((char *)&charString, L"\xffff", 100);
        if (errno == EILSEQ)
        {
            printLine("wcstombs() failed");
            exit(1);
        }
        printUnsignedLine(bytesTranslated);
        printLine(charString);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
