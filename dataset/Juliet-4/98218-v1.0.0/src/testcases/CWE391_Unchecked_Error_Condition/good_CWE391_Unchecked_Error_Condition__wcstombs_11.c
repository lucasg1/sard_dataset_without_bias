void FUN0()
{
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
    }
}
void FUN1()
{
    if(globalReturnsTrue())
    {
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
    }
}
